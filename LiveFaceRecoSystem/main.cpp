#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <QProcess>
#include <QDebug>
#include <thread>
#include "authorisationform.h"

// Умный указатель на файл логирования
QScopedPointer<QFile> m_logFile;
MainWindow* window;

// Реализация обработчика
void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
	// Открываем поток записи в файл
	QTextStream out(m_logFile.data());
	// Записываем дату записи
	QString str;
	str = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz ");
	// По типу определяем, к какому уровню относится сообщение
	switch (type)
	{
	case QtInfoMsg:     str += "INF "; break;
	case QtDebugMsg:    str += "DBG "; break;
	case QtWarningMsg:  str += "WRN "; break;
	case QtCriticalMsg: str += "CRT "; break;
	case QtFatalMsg:    str += "FTL "; break;
	}
	// Записываем в вывод категорию сообщения и само сообщение
	str += context.category;
	str += ": ";
	str += msg + "\n";
	window->logMsg(msg);
	std::cout << str.toStdString() << std::flush;
	out << str;
	out.flush();    // Очищаем буферизированные данные
}

//проверка лицензии
bool checkLicense(QDate &date)
{
	QProcess proc;
	proc.start("ifconfig -a");
	proc.waitForFinished();
	QString str = QString(proc.readAllStandardOutput());
	proc.close();
	int pos = str.indexOf("ether", str.indexOf("eth0"));
	QString MACaddr = QString::fromStdString(str.toStdString().substr(pos + 6, 17));

	QFile licenseFile("license.lfr");
	if (!licenseFile.exists())
	{
		QMessageBox::information(nullptr, "Not license file", "Not license file (license.lfr)");
		qDebug() << "Not license file (license.lfr)";
		return false;
	}
	licenseFile.open(QFile::ReadOnly);
	QByteArray bytes = licenseFile.readAll();
	QString readMAC = QString::fromStdString(QString(bytes).toStdString().substr(0, 17));
	if (MACaddr != readMAC)
	{
		QMessageBox::information(nullptr, "Not correct MAC", "Not correct MAC");
		qDebug() << "Not correct MAC";
		return false;
	}
	QString readUUID = QString::fromStdString(QString(bytes).toStdString().substr(17, 20));
	if (readUUID != "uhbygvrkismanudyeozz")
	{
		QMessageBox::information(nullptr, "Not correct UUID", "Not correct UUID");
		qDebug() << "Not correct UUID";
		return false;
	}
	QString s = QString::fromStdString(QString(bytes).toStdString().substr(37, 10));
	QDateTime readTIME = QDateTime::fromString(s, "dd.MM.yyyy");
	date = readTIME.date();
	if (readTIME.secsTo(QDateTime::currentDateTime()) >= 0)
	{
		QMessageBox::information(nullptr, "License time is gone", "License time is gone");
		qDebug() << "License time is gone";
		return false;
	}
	return true;
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	window = &w;
	QDate date;

	if (!checkLicense(date))
		return 10;

	//постоянная проверка лицензии
	std::thread checkLicenseThread = std::thread([&]()
	{
		while(true)
		{
			std::this_thread::sleep_for(std::chrono::seconds(10));
			if (!checkLicense(date))
			{
				a.exit();
				return 10;
			}
		}
	});
	checkLicenseThread.detach();

	// Устанавливаем файл логирования,
	// внимательно сверьтесь с тем, какой используете путь для файла
	m_logFile.reset(new QFile("log.lfr"));
	// Открываем файл логирования
	m_logFile.data()->open(QFile::Append | QFile::Text);

	// Устанавливаем обработчик
	qInstallMessageHandler(messageHandler);

	qDebug() << "LFR initialising";

	//подключение стилей
	QFile style("Mixchat.qss");
	style.open(QFile::ReadOnly);
	a.setStyleSheet(style.readAll());
	style.close();

	AuthorisationForm authForm;

	QApplication::connect(&authForm, &AuthorisationForm::authorised, &w, &MainWindow::onAuthorised);
	authForm.authorisation();
	w.setLicenseDate(date);
	//w.show();

    return a.exec();
}
