/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LiveFaceRecoSystem/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[52];
    char stringdata0[776];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "deleteableVideoSourceAdded"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 4), // "name"
QT_MOC_LITERAL(5, 50, 9), // "enterance"
QT_MOC_LITERAL(6, 60, 13), // "pixmapUpdated"
QT_MOC_LITERAL(7, 74, 6), // "pixmap"
QT_MOC_LITERAL(8, 81, 25), // "setCamerasInputResolution"
QT_MOC_LITERAL(9, 107, 1), // "x"
QT_MOC_LITERAL(10, 109, 1), // "y"
QT_MOC_LITERAL(11, 111, 26), // "setCamerasOutputResolution"
QT_MOC_LITERAL(12, 138, 23), // "setBrightnessCorrection"
QT_MOC_LITERAL(13, 162, 4), // "corr"
QT_MOC_LITERAL(14, 167, 21), // "setContrastCorrection"
QT_MOC_LITERAL(15, 189, 7), // "pushMsg"
QT_MOC_LITERAL(16, 197, 3), // "msg"
QT_MOC_LITERAL(17, 201, 12), // "onAuthorised"
QT_MOC_LITERAL(18, 214, 5), // "login"
QT_MOC_LITERAL(19, 220, 12), // "updatePixmap"
QT_MOC_LITERAL(20, 233, 36), // "VideoDetectionHandler::VideoD..."
QT_MOC_LITERAL(21, 270, 12), // "videoDisplay"
QT_MOC_LITERAL(22, 283, 7), // "cv::Mat"
QT_MOC_LITERAL(23, 291, 5), // "frame"
QT_MOC_LITERAL(24, 297, 8), // "DrawInfo"
QT_MOC_LITERAL(25, 306, 4), // "info"
QT_MOC_LITERAL(26, 311, 20), // "updateDetectedPerson"
QT_MOC_LITERAL(27, 332, 8), // "detected"
QT_MOC_LITERAL(28, 341, 2), // "id"
QT_MOC_LITERAL(29, 344, 10), // "confidence"
QT_MOC_LITERAL(30, 355, 10), // "similarity"
QT_MOC_LITERAL(31, 366, 19), // "updatePersonalCards"
QT_MOC_LITERAL(32, 386, 19), // "QList<PersonalCard>"
QT_MOC_LITERAL(33, 406, 5), // "cards"
QT_MOC_LITERAL(34, 412, 11), // "updateReles"
QT_MOC_LITERAL(35, 424, 27), // "QList<DevicesManager::Rele>"
QT_MOC_LITERAL(36, 452, 5), // "reles"
QT_MOC_LITERAL(37, 458, 22), // "addCameraSourceByIndex"
QT_MOC_LITERAL(38, 481, 11), // "sourceIndex"
QT_MOC_LITERAL(39, 493, 6), // "releID"
QT_MOC_LITERAL(40, 500, 21), // "addCameraSourceByPath"
QT_MOC_LITERAL(41, 522, 4), // "path"
QT_MOC_LITERAL(42, 527, 17), // "deleteVideoSource"
QT_MOC_LITERAL(43, 545, 12), // "disconnected"
QT_MOC_LITERAL(44, 558, 11), // "pushMsgSlot"
QT_MOC_LITERAL(45, 570, 35), // "on_OpenPersonalCardEditor_tri..."
QT_MOC_LITERAL(46, 606, 22), // "on_MakePhoto_triggered"
QT_MOC_LITERAL(47, 629, 32), // "on_DeviceControlAction_triggered"
QT_MOC_LITERAL(48, 662, 32), // "on_CameraControlAction_triggered"
QT_MOC_LITERAL(49, 695, 35), // "on_horizontalSlider_actionTri..."
QT_MOC_LITERAL(50, 731, 6), // "action"
QT_MOC_LITERAL(51, 738, 37) // "on_horizontalSlider_2_actionT..."

    },
    "MainWindow\0deleteableVideoSourceAdded\0"
    "\0index\0name\0enterance\0pixmapUpdated\0"
    "pixmap\0setCamerasInputResolution\0x\0y\0"
    "setCamerasOutputResolution\0"
    "setBrightnessCorrection\0corr\0"
    "setContrastCorrection\0pushMsg\0msg\0"
    "onAuthorised\0login\0updatePixmap\0"
    "VideoDetectionHandler::VideoDisplay*\0"
    "videoDisplay\0cv::Mat\0frame\0DrawInfo\0"
    "info\0updateDetectedPerson\0detected\0"
    "id\0confidence\0similarity\0updatePersonalCards\0"
    "QList<PersonalCard>\0cards\0updateReles\0"
    "QList<DevicesManager::Rele>\0reles\0"
    "addCameraSourceByIndex\0sourceIndex\0"
    "releID\0addCameraSourceByPath\0path\0"
    "deleteVideoSource\0disconnected\0"
    "pushMsgSlot\0on_OpenPersonalCardEditor_triggered\0"
    "on_MakePhoto_triggered\0"
    "on_DeviceControlAction_triggered\0"
    "on_CameraControlAction_triggered\0"
    "on_horizontalSlider_actionTriggered\0"
    "action\0on_horizontalSlider_2_actionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  129,    2, 0x06 /* Public */,
       6,    2,  136,    2, 0x06 /* Public */,
       8,    2,  141,    2, 0x06 /* Public */,
      11,    2,  146,    2, 0x06 /* Public */,
      12,    1,  151,    2, 0x06 /* Public */,
      14,    1,  154,    2, 0x06 /* Public */,
      15,    1,  157,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  160,    2, 0x0a /* Public */,
      19,    3,  163,    2, 0x0a /* Public */,
      26,    5,  170,    2, 0x0a /* Public */,
      31,    1,  181,    2, 0x0a /* Public */,
      34,    1,  184,    2, 0x0a /* Public */,
      37,    4,  187,    2, 0x0a /* Public */,
      40,    4,  196,    2, 0x0a /* Public */,
      42,    1,  205,    2, 0x0a /* Public */,
      43,    0,  208,    2, 0x0a /* Public */,
      44,    1,  209,    2, 0x08 /* Private */,
      45,    0,  212,    2, 0x08 /* Private */,
      46,    0,  213,    2, 0x08 /* Private */,
      47,    0,  214,    2, 0x08 /* Private */,
      48,    0,  215,    2, 0x08 /* Private */,
      49,    1,  216,    2, 0x08 /* Private */,
      51,    1,  219,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int,    7,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22, 0x80000000 | 24,   21,   23,   25,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, QMetaType::Double, 0x80000000 | 20,   27,   28,   29,   30,   21,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::QUuid,   38,    4,    5,   39,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QUuid,   41,    4,    5,   39,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int,   50,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteableVideoSourceAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->pixmapUpdated((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setCamerasInputResolution((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setCamerasOutputResolution((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setBrightnessCorrection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setContrastCorrection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->pushMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onAuthorised((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->updatePixmap((*reinterpret_cast< VideoDetectionHandler::VideoDisplay*(*)>(_a[1])),(*reinterpret_cast< cv::Mat(*)>(_a[2])),(*reinterpret_cast< DrawInfo(*)>(_a[3]))); break;
        case 9: _t->updateDetectedPerson((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< VideoDetectionHandler::VideoDisplay*(*)>(_a[5]))); break;
        case 10: _t->updatePersonalCards((*reinterpret_cast< const QList<PersonalCard>(*)>(_a[1]))); break;
        case 11: _t->updateReles((*reinterpret_cast< const QList<DevicesManager::Rele>(*)>(_a[1]))); break;
        case 12: _t->addCameraSourceByIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QUuid(*)>(_a[4]))); break;
        case 13: _t->addCameraSourceByPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QUuid(*)>(_a[4]))); break;
        case 14: _t->deleteVideoSource((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->disconnected(); break;
        case 16: _t->pushMsgSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->on_OpenPersonalCardEditor_triggered(); break;
        case 18: _t->on_MakePhoto_triggered(); break;
        case 19: _t->on_DeviceControlAction_triggered(); break;
        case 20: _t->on_CameraControlAction_triggered(); break;
        case 21: _t->on_horizontalSlider_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_horizontalSlider_2_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(int , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::deleteableVideoSourceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QPixmap , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::pixmapUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setCamerasInputResolution)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setCamerasOutputResolution)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setBrightnessCorrection)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setContrastCorrection)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::pushMsg)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::deleteableVideoSourceAdded(int _t1, QString _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::pixmapUpdated(QPixmap _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::setCamerasInputResolution(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::setCamerasOutputResolution(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::setBrightnessCorrection(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::setContrastCorrection(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::pushMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
