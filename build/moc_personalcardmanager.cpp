/****************************************************************************
** Meta object code from reading C++ file 'personalcardmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LiveFaceRecoSystem/personalcardmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personalcardmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PersonalCardManager_t {
    QByteArrayData data[15];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PersonalCardManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PersonalCardManager_t qt_meta_stringdata_PersonalCardManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PersonalCardManager"
QT_MOC_LITERAL(1, 20, 17), // "personalCardAdded"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "PersonalCard"
QT_MOC_LITERAL(4, 52, 4), // "card"
QT_MOC_LITERAL(5, 57, 18), // "personalCardEdited"
QT_MOC_LITERAL(6, 76, 19), // "personalCardDeleted"
QT_MOC_LITERAL(7, 96, 20), // "personalCardsUpdated"
QT_MOC_LITERAL(8, 117, 19), // "QList<PersonalCard>"
QT_MOC_LITERAL(9, 137, 8), // "newCards"
QT_MOC_LITERAL(10, 146, 21), // "personalCardAddedSlot"
QT_MOC_LITERAL(11, 168, 22), // "personalCardEditedSlot"
QT_MOC_LITERAL(12, 191, 23), // "personalCardDeletedSlot"
QT_MOC_LITERAL(13, 215, 11), // "updateCards"
QT_MOC_LITERAL(14, 227, 19) // "updateCardsFromSync"

    },
    "PersonalCardManager\0personalCardAdded\0"
    "\0PersonalCard\0card\0personalCardEdited\0"
    "personalCardDeleted\0personalCardsUpdated\0"
    "QList<PersonalCard>\0newCards\0"
    "personalCardAddedSlot\0personalCardEditedSlot\0"
    "personalCardDeletedSlot\0updateCards\0"
    "updateCardsFromSync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PersonalCardManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       7,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      12,    1,   77,    2, 0x0a /* Public */,
      13,    1,   80,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void PersonalCardManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PersonalCardManager *_t = static_cast<PersonalCardManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->personalCardAdded((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 1: _t->personalCardEdited((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 2: _t->personalCardDeleted((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 3: _t->personalCardsUpdated((*reinterpret_cast< QList<PersonalCard>(*)>(_a[1]))); break;
        case 4: _t->personalCardAddedSlot((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 5: _t->personalCardEditedSlot((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 6: _t->personalCardDeletedSlot((*reinterpret_cast< PersonalCard(*)>(_a[1]))); break;
        case 7: _t->updateCards((*reinterpret_cast< QList<PersonalCard>(*)>(_a[1]))); break;
        case 8: _t->updateCardsFromSync((*reinterpret_cast< QList<PersonalCard>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PersonalCardManager::*_t)(PersonalCard );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PersonalCardManager::personalCardAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PersonalCardManager::*_t)(PersonalCard );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PersonalCardManager::personalCardEdited)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PersonalCardManager::*_t)(PersonalCard );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PersonalCardManager::personalCardDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PersonalCardManager::*_t)(QList<PersonalCard> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PersonalCardManager::personalCardsUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject PersonalCardManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PersonalCardManager.data,
      qt_meta_data_PersonalCardManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PersonalCardManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PersonalCardManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PersonalCardManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PersonalCardManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PersonalCardManager::personalCardAdded(PersonalCard _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PersonalCardManager::personalCardEdited(PersonalCard _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PersonalCardManager::personalCardDeleted(PersonalCard _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PersonalCardManager::personalCardsUpdated(QList<PersonalCard> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
