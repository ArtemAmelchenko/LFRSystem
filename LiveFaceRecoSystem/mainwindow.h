#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QDebug>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <QGraphicsPixmapItem>
#include <QThread>
#include <QDate>
#include <mutex>

#include "LFR/lfrmanager.h"
#include "LFR/videodetectionhandler.h"
#include "personalcardeditorform.h"
#include "makephotoform.h"
#include "addvideosourceform.h"
#include "showingcardmanager.h"
#include "devicesmanager.h"
#include "devicecontrolform.h"
#include "connectiontoserver.h"

#include "opencv2/opencv.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

	Ui::MainWindow *ui;

	//менеджер LFR
	LFRManager *m_LFRManager;

	//формы
	MakePhotoForm *makePhotoForm;
	PersonalCardEditorForm *cardEditForm;
	PersonalCardManager *cardManager;
	AddVideoSourceForm *addVideoSourceForm;
	DeviceControlForm *deviceControlForm;

	//менеджер персональных карт
	ShowingCardManager showingCardManager;

	DevicesManager devicesManager;

	ConnectionToServer *connection;
	QThread connectionThread;

	//количество видеопотоков
	int videoSourcesNumber;

	QQueue<QString> logs;
	std::mutex logMut;

	QList<QLabel *> imageLabels;
	QList<QLabel *> fioLabels;
	QList<QLabel *> dtLabels;
	QList<QLabel *> camLabels;

	//структура уже подключенной камеры
	struct Camera
	{
		QString name;
		QUuid releID;
		bool enterance;
		int id;
		VideoDetectionHandler::VideoDisplay *display;
	};

	//структура конфигурации
	struct Configure
	{
		//структура информации о камере, записываемая в конфиг
		struct Cam
		{
			Cam(int videoSourceindex, const QString &rtspConnectionAddres, const QString &name, bool enterance, int id, QUuid releID);
			Cam();
			int videoSourceindex;
			QString rtspConnectionAddres;
			QString name;
			bool enterance;
			int id;
			QUuid releID;
		};
		QList<Cam> cameras;
		QList<DevicesManager::Rele> reles;

		void saveConfig();
		void loadConfig();
	};

	QList<Camera> cameras;

	Configure config;

	QDate licenseDate;

	//добавление камеры с уже созданным видеопотоком, имеющим данный id
	void addCameraSource(int index, QString name, bool enterance, QUuid releID, bool showingMessage = true);

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	void setLicenseDate(QDate date);
	void logMsg(QString msg);

protected:
	void closeEvent(QCloseEvent *event);

	//инициализация
	void init();

	void loadConfig();

	bool setupConnection();

signals:
	void deleteableVideoSourceAdded(int index, QString name, bool enterance);	//сигнал о добавлении видеопотока для помещения в список удаляемых
	void pixmapUpdated(QPixmap pixmap, int index);	//сигнал об обновлении кадра
	void setCamerasInputResolution(int x, int y);
	void setCamerasOutputResolution(int x, int y);
	void setBrightnessCorrection(int corr);
	void setContrastCorrection(int corr);

	void pushMsg(QString msg);

public slots:
	void onAuthorised(QString login);
	void updatePixmap(VideoDetectionHandler::VideoDisplay *videoDisplay, cv::Mat frame, DrawInfo info);
	void updateDetectedPerson(bool detected, int id, double confidence, double similarity, VideoDetectionHandler::VideoDisplay *videoDisplay);
	void updatePersonalCards(const QList<PersonalCard> &cards);
	void updateReles(const QList<DevicesManager::Rele> &reles);
	void addCameraSourceByIndex(int sourceIndex, QString name, bool enterance, QUuid releID);
	void addCameraSourceByPath(const QString &path, QString name, bool enterance, QUuid releID);
	void deleteVideoSource(int index);

	void disconnected();

private slots:
	void pushMsgSlot(QString msg);

	void on_OpenPersonalCardEditor_triggered();
	void on_MakePhoto_triggered();
	void on_DeviceControlAction_triggered();
	void on_CameraControlAction_triggered();
	void on_horizontalSlider_actionTriggered(int action);
	void on_horizontalSlider_2_actionTriggered(int action);
};

#endif // MAINWINDOW_H

//иконка
//карточки, добавление источников разных, интерфейс, QSS, реле, сохранение конфигурации и логов, кринжовая авторизация
//ВИКИ (ОПИСАНИЕ), ДОКУМЕНТАЦИЯ !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//удаление карточек, массовое добавление(имя фотки - ФИО), время доступа сотрудника(интервал)
//удаление камер
//обработать отключения камер(сообщение о недоступности потока)
//обновить список карточек при удалении
