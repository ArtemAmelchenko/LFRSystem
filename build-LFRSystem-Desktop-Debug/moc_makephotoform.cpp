/****************************************************************************
** Meta object code from reading C++ file 'makephotoform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LiveFaceRecoSystem/makephotoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'makephotoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MakePhotoForm_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MakePhotoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MakePhotoForm_t qt_meta_stringdata_MakePhotoForm = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MakePhotoForm"
QT_MOC_LITERAL(1, 14, 12), // "updatePixmap"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "mPixmap"
QT_MOC_LITERAL(4, 36, 5), // "index"
QT_MOC_LITERAL(5, 42, 19) // "on_OKButton_clicked"

    },
    "MakePhotoForm\0updatePixmap\0\0mPixmap\0"
    "index\0on_OKButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MakePhotoForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       5,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void MakePhotoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MakePhotoForm *_t = static_cast<MakePhotoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePixmap((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_OKButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MakePhotoForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MakePhotoForm.data,
      qt_meta_data_MakePhotoForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MakePhotoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MakePhotoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MakePhotoForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MakePhotoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
