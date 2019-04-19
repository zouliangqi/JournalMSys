/****************************************************************************
** Meta object code from reading C++ file 'mymessagebox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/mymessagebox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymessagebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyMessageBox_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyMessageBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyMessageBox_t qt_meta_stringdata_MyMessageBox = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MyMessageBox"
QT_MOC_LITERAL(1, 13, 9), // "okClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "cancelClicked"
QT_MOC_LITERAL(4, 38, 15), // "handleOkClicked"
QT_MOC_LITERAL(5, 54, 19) // "handleCancelClicked"

    },
    "MyMessageBox\0okClicked\0\0cancelClicked\0"
    "handleOkClicked\0handleCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyMessageBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyMessageBox *_t = static_cast<MyMessageBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->okClicked(); break;
        case 1: _t->cancelClicked(); break;
        case 2: _t->handleOkClicked(); break;
        case 3: _t->handleCancelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyMessageBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyMessageBox::okClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyMessageBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyMessageBox::cancelClicked)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyMessageBox::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MyMessageBox.data,
      qt_meta_data_MyMessageBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyMessageBox.stringdata0))
        return static_cast<void*>(const_cast< MyMessageBox*>(this));
    return QDialog::qt_metacast(_clname);
}

int MyMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MyMessageBox::okClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MyMessageBox::cancelClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
