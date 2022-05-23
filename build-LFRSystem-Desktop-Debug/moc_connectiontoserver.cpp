/****************************************************************************
** Meta object code from reading C++ file 'connectiontoserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LiveFaceRecoSystem/connectiontoserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectiontoserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectionToServer_t {
    QByteArrayData data[19];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectionToServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectionToServer_t qt_meta_stringdata_ConnectionToServer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ConnectionToServer"
QT_MOC_LITERAL(1, 19, 17), // "personalCardAdded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "PersonalCard"
QT_MOC_LITERAL(4, 51, 4), // "card"
QT_MOC_LITERAL(5, 56, 18), // "personalCardEdited"
QT_MOC_LITERAL(6, 75, 19), // "personalCardDeleted"
QT_MOC_LITERAL(7, 95, 19), // "personalCardsSynced"
QT_MOC_LITERAL(8, 115, 19), // "QList<PersonalCard>"
QT_MOC_LITERAL(9, 135, 5), // "cards"
QT_MOC_LITERAL(10, 141, 12), // "disconnected"
QT_MOC_LITERAL(11, 154, 15), // "addPersonalCard"
QT_MOC_LITERAL(12, 170, 16), // "editPersonalCard"
QT_MOC_LITERAL(13, 187, 18), // "deletePersonalCard"
QT_MOC_LITERAL(14, 206, 15), // "newPassingEvent"
QT_MOC_LITERAL(15, 222, 12), // "PassingEvent"
QT_MOC_LITERAL(16, 235, 2), // "pe"
QT_MOC_LITERAL(17, 238, 10), // "imageAdded"
QT_MOC_LITERAL(18, 249, 8) // "fileName"

    },
    "ConnectionToServer\0personalCardAdded\0"
    "\0PersonalCard\0card\0personalCardEdited\0"
    "personalCardDeleted\0personalCardsSynced\0"
    "QList<PersonalCard>\0cards\0disconnected\0"
    "addPersonalCard\0editPersonalCard\0"
    "deletePersonalCard\0newPassingEvent\0"
    "PassingEvent\0pe\0imageAdded\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionToServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
      10,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   77,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,
      14,    1,   86,    2, 0x0a /* Public */,
      17,    1,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void ConnectionToServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionToServer *_t = static_cast<ConnectionToServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->personalCardAdded((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 1: _t->personalCardEdited((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 2: _t->personalCardDeleted((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 3: _t->personalCardsSynced((*reinterpret_cast< QList<PersonalCard>(*)>(_a[1]))); break;
        case 4: _t->disconnected(); break;
        case 5: _t->addPersonalCard((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 6: _t->editPersonalCard((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 7: _t->deletePersonalCard((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 8: _t->newPassingEvent((*reinterpret_cast< PassingEvent(*)>(_a[1]))); break;
        case 9: _t->imageAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ConnectionToServer::*_t)(PersonalCard );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionToServer::personalCardAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ConnectionToServer::*_t)(PersonalCard );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionToServer::personalCardEdited)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ConnectionToServer::*_t)(PersonalCard );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionToServer::personalCardDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ConnectionToServer::*_t)(QList<PersonalCard> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionToServer::personalCardsSynced)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ConnectionToServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionToServer::disconnected)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ConnectionToServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConnectionToServer.data,
      qt_meta_data_ConnectionToServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConnectionToServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionToServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionToServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConnectionToServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ConnectionToServer::personalCardAdded(PersonalCard _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectionToServer::personalCardEdited(PersonalCard _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConnectionToServer::personalCardDeleted(PersonalCard _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConnectionToServer::personalCardsSynced(QList<PersonalCard> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConnectionToServer::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
