#ifndef CONNECTIONTOSERVER_H
#define CONNECTIONTOSERVER_H

#include <QObject>
#include <iostream>
#include <thread>
#include <QUuid>
#include <QDateTime>
#include <QJsonDocument>
#include <QJsonObject>
#include <time.h>
#include <boost/asio.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>

#include "personalcardmanager.h"

struct PassingEvent
{
	PassingEvent();
	PassingEvent(const PassingEvent &other);
	~PassingEvent();
	QUuid id;
	bool enterance;
	bool passed;
	QDateTime time;
};

class ConnectionToServer : public QObject
{
	Q_OBJECT

public:
	explicit ConnectionToServer(QObject *parent = nullptr);

	bool connect(std::string ipStart, std::string ipEnd, int port);

	void run();
	void stop();

	bool isConnected() const;

	bool getImage(QString fileName);

public slots:
	void addPersonalCard(PersonalCard card);
	void editPersonalCard(PersonalCard card);
	void deletePersonalCard(PersonalCard card);
	void newPassingEvent(PassingEvent pe);
	void imageAdded(QString fileName);

signals:
	void personalCardAdded(PersonalCard card);
	void personalCardEdited(PersonalCard card);
	void personalCardDeleted(PersonalCard card);

	void personalCardsSynced(QList<PersonalCard> cards);

	void disconnected();

private:

	void sync();
	bool recvPersonalCard(PersonalCard &card, int millisec = 3000);

	void pinging();

	bool recvImage(const std::string &fileName, int millisec = 3000);
	void writeImage(const std::string &data, const std::string &fileName);

	void sendImage();

	void disableConnection();

	boost::asio::io_context ioc;
	boost::asio::ip::tcp::socket socket;
	boost::asio::ip::tcp::resolver resolver;

	QDateTime lastSendingTime;

	boost::asio::streambuf buff;
	std::istream in;

	bool running;
	bool connected;
};


#endif // CONNECTIONTOSERVER_H
