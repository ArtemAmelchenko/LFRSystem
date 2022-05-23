#include "connectiontoserver.h"
#include <fstream>

using namespace std;

namespace http = boost::beast::http;

std::string readuntil(std::istream& in, std::string delimiter)
{
	std::string cr;
	char delim = *(delimiter.rbegin());
	size_t sz = delimiter.size(), tot;
	do {
		std::string temp;
		std::getline(in, temp, delim);
		cr += temp + delim;
		tot = cr.size();
	} while ((tot < sz) || (cr.substr(tot - sz, sz) != delimiter));
	return cr.substr(0, tot - sz);  // or return cr; if you want to keep the delimiter
}
string personalCardToJSON(const PersonalCard &card)
{
	QJsonDocument doc;
	QJsonObject obj;
	obj.insert("id", card.id.toString());
	obj.insert("imagePath", card.imagePath);
	obj.insert("lastname", card.lastname);
	obj.insert("name", card.name);
	obj.insert("post", card.post);
	obj.insert("subdivision", card.subdivision);
	obj.insert("surname", card.surname);
	obj.insert("brightness", card.brightnessCorrection);
	obj.insert("contrast", card.contrastCorrection);
	doc.setObject(obj);

	return doc.toJson().toStdString();
}

PersonalCard personalCardFromJSON(const string &str)
{
	PersonalCard card;
	QByteArray b(str.data());
	QJsonDocument doc = QJsonDocument::fromJson(b);
	QJsonObject obj = doc.object();
	card.id = QUuid(obj.take("id").toString());
	card.imagePath = obj.take("imagePath").toString();
	card.lastname = obj.take("lastname").toString();
	card.name = obj.take("name").toString();
	card.post = obj.take("post").toString();
	card.subdivision = obj.take("subdivision").toString();
	card.surname = obj.take("surname").toString();
	card.brightnessCorrection = obj.take("brightness").toInt();
	card.contrastCorrection = obj.take("contrast").toInt();
	return card;
}

string passingEventToJSON(const PassingEvent &event)
{
	QJsonDocument doc;
	QJsonObject obj;
	obj.insert("id", event.id.toString());
	obj.insert("enterance", event.enterance);
	obj.insert("passed", event.passed);
	obj.insert("time", event.time.toString("yyyy.MM.dd.hh.mm.ss"));
	doc.setObject(obj);
	return doc.toJson().toStdString();
}

PassingEvent passingEventFromJSON(const string &str)
{
	PassingEvent event;
	QJsonDocument doc = QJsonDocument::fromJson(QByteArray::fromStdString(str));
	QJsonObject obj = doc.object();
	event.id = QUuid(obj.take("id").toString());
	event.enterance = obj.take("enterance").toBool();
	event.passed = obj.take("passed").toBool();
	event.time = QDateTime::fromString(obj.take("time").toString(), "yyyy.MM.dd.hh.mm.ss");
	return event;
}

ConnectionToServer::ConnectionToServer(QObject *parent)
	: QObject(parent), socket(ioc), resolver(ioc), in(&buff)
{
	running = false;
	lastSendingTime = QDateTime::currentDateTime();
}

bool ConnectionToServer::connect(std::string ipStart, string ipEnd, int port)
{
	boost::system::error_code ec;
	boost::asio::ip::tcp::endpoint ep;
	ep.address(boost::asio::ip::address::from_string(ipStart));
	ep.port(port);
	boost::asio::ip::tcp::endpoint epEnd;
	epEnd.address(boost::asio::ip::address::from_string(ipEnd));
	epEnd.port(port);

	while(true)
	{
		cout << ep.address().to_string() << endl;
		socket.connect(ep, ec);
		if (!ec)
			break;
		if (ep.address().to_string() == epEnd.address().to_string())
			return false;
		ep.address(boost::asio::ip::address_v4(ep.address().to_v4().to_uint() + 1));
	}

	http::verb verb = http::verb::get;
	string query = "/connect";
	string host = ipStart + ":" + to_string(port);

	http::request<http::string_body> req(verb, query, 11);
	req.set(http::field::host, host);
	req.prepare_payload();

	http::write(socket, req);

	// Часть, отвечающая за чтение респонса
	boost::beast::flat_buffer buffer;
	http::response<http::string_body> res;
	http::read(socket, buffer, res);

	std::cout << res.body() << std::endl;
	string nPort = res.body();
	// Закрываем соединение
	socket.shutdown(boost::asio::ip::tcp::socket::shutdown_both);
	socket.close();

	ep.port(atoi(nPort.c_str()));
	socket.connect(ep, ec);
	if (ec)
		return false;
	connected = true;
	cout << "CONNECTED !!!!!!!!!!!!!!!!!" << endl;
	return true;
}

void ConnectionToServer::run()
{
	running = true;
	std::thread t1 = std::thread([&]()
	{
		pinging();
	});
	t1.detach();
	std::thread t2 = std::thread([&]()
	{
		while(running)
		{
			std::cout << "reading socket" << std::endl;
			boost::system::error_code ec;
			boost::asio::read_until(socket, buff, '\n', ec);
			if (ec)
			{
				disableConnection();
			}
			string msg;
			getline(in, msg);

			cout << msg << endl;
			if (msg == "personal card added")
			{
				PersonalCard pc;
				if (!recvPersonalCard(pc))
				{
					// disconnect
					disableConnection();
				}
				cout << "conn: personal card added from server";
				emit personalCardAdded(pc);
			}
			else if (msg == "personal card edited")
			{
				PersonalCard pc;
				if (!recvPersonalCard(pc))
				{
					// disconnect
					disableConnection();
				}
				cout << "conn: personal card edited from server";
				emit personalCardEdited(pc);
			}
			else if (msg == "personal card deleted")
			{
				PersonalCard pc;
				if (!recvPersonalCard(pc))
				{
					// disconnect
					disableConnection();
				}
				cout << "conn: personal card deleted from server";
				emit personalCardDeleted(pc);
			}
			else if (msg == "sync")
			{
				sync();
			}
			else if (msg == "get image")
			{
				cout << "recieving image" << endl;
				recvImage("Image1.png");
				cout << "recieved image" << endl;
			}
		}
	});
	t2.detach();
}

void ConnectionToServer::stop()
{
	running = false;
}

bool ConnectionToServer::isConnected() const
{
	return connected;
}

bool ConnectionToServer::getImage(QString fileName)
{
	cout << "conn: getting image" << fileName.toStdString() << endl;
	string msg = "get image\n";
	msg += fileName.toStdString() + "\n";
	boost::asio::const_buffer buff(msg.data(), msg.size());
	boost::asio::write(socket, buff);
	lastSendingTime = QDateTime::currentDateTime();
	return recvImage(fileName.toStdString());
}

void ConnectionToServer::addPersonalCard(PersonalCard card)
{
	cout << "conn: PCA" << endl;
	string msg = "personal card added\n";
	msg += personalCardToJSON(card);
	msg += "!end!";
	boost::asio::const_buffer buff(msg.data(), msg.size());
	boost::asio::write(socket, buff);
	lastSendingTime = QDateTime::currentDateTime();
}

void ConnectionToServer::editPersonalCard(PersonalCard card)
{
	cout << "conn: PCE" << endl;
	string msg = "personal card edited\n";
	msg += personalCardToJSON(card);
	msg += "!end!";
	boost::asio::const_buffer buff(msg.data(), msg.size());
	boost::asio::write(socket, buff);
	lastSendingTime = QDateTime::currentDateTime();
}

void ConnectionToServer::deletePersonalCard(PersonalCard card)
{
	cout << "conn: PCD" << endl;
	string msg = "personal card deleted\n";
	msg += personalCardToJSON(card);
	msg += "!end!";
	boost::asio::const_buffer buff(msg.data(), msg.size());
	boost::asio::write(socket, buff);
	lastSendingTime = QDateTime::currentDateTime();
}

void ConnectionToServer::newPassingEvent(PassingEvent pe)
{
	cout << "NEW PASSING EVENT" << endl;
	string msg = "new passing event\n";
	msg += passingEventToJSON(pe);
	msg += "!end!";
	boost::asio::const_buffer buff(msg.data(), msg.size());
	boost::asio::write(socket, buff);
	lastSendingTime = QDateTime::currentDateTime();
}

void ConnectionToServer::imageAdded(QString fileName)
{
	string msg = "image added\n";
	msg += fileName.toStdString();
	msg += "\n";
	boost::asio::const_buffer buff(msg.data(), msg.size());
	boost::asio::write(socket, buff);
	sendImage();
}

void ConnectionToServer::sync()
{
	lastSendingTime = QDateTime::currentDateTime();
	int num;
	in >> num;
	cout << num << endl;
	QList<PersonalCard> syncCards;
	PersonalCard pc;
	for (int i = 0; i < num; ++i)
	{
		if (!recvPersonalCard(pc))
		{
			disableConnection();
		}
		syncCards.append(pc);
	}
	emit personalCardsSynced(syncCards);
	lastSendingTime = QDateTime::currentDateTime();
}

bool ConnectionToServer::recvPersonalCard(PersonalCard &card, int millisec)
{
	bool recv = false;
	boost::asio::async_read_until(socket, buff, "!end!", [&](const boost::system::error_code& error, std::size_t bytes_transferred)
	{
		cout << "recv OK" << endl;
		recv = true;
		std::string msg = readuntil(in, "!end!");
		card = personalCardFromJSON(msg);
	});
	ioc.reset();
	ioc.run_for(std::chrono::milliseconds(millisec));
	return recv;
}

void ConnectionToServer::pinging()
{
	while (running)
	{
		if (lastSendingTime.secsTo(QDateTime::currentDateTime()) >= 2)
		{
			string msg = "ping\n";
			boost::asio::const_buffer buff(msg.data(), msg.size());
			boost::asio::write(socket, buff);
			lastSendingTime = QDateTime::currentDateTime();
		}
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}

bool ConnectionToServer::recvImage(const string &fileName, int millisec)
{
	atomic<bool> recv(false);
	int length;
	read_until(socket, buff, "\n");
	in >> length;
	cout << "image length " << length << endl;
	boost::asio::async_read(socket, buff, boost::asio::transfer_exactly(length - buff.size()), [&](const boost::system::error_code& error, std::size_t bytes_transferred)
	{
		cout << "recv length " << bytes_transferred << endl;
		recv = true;
		std::string msg(std::istreambuf_iterator<char>(in), {});
		writeImage(msg, fileName);
	});
	ioc.reset();
	ioc.run_for(std::chrono::milliseconds(millisec));
	return recv;
}

void ConnectionToServer::writeImage(const string &data, const string &fileName)
{
	ofstream f("./img/" + fileName);
	f.write(data.c_str(), data.size());
	f.close();
}

void ConnectionToServer::sendImage()
{
	string fileName;
	read_until(socket, buff, "\n");
	getline(in, fileName);

	cout << "connection: sending " << fileName << endl;

	ifstream f("./img/" + fileName);
	f.seekg(0, std::ios::end);
	size_t size = f.tellg();
	std::string data(size, ' ');
	f.seekg(0);
	f.read(&data[0], size);
	f.close();

	int length = data.size();
	string strLen = to_string(length);
	cout << "connection: sending length " << strLen << endl;
	write(socket, boost::asio::const_buffer(strLen.data(), strLen.size()));
	write(socket, boost::asio::const_buffer(data.data(), data.size()));
}

void ConnectionToServer::disableConnection()
{
	cout << "conn: Closing !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
	socket.shutdown(boost::asio::ip::tcp::socket::shutdown_both);
	socket.close();
	connected = false;
	running = false;
	emit disconnected();
}

PassingEvent::PassingEvent()
{

}

PassingEvent::PassingEvent(const PassingEvent &other)
{
	enterance = other.enterance;
	id = other.id;
	passed = other.passed;
	time = other.time;
}

PassingEvent::~PassingEvent()
{

}
