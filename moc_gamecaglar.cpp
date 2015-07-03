/****************************************************************************
** Meta object code from reading C++ file 'gamecaglar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FirstGame/gamecaglar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamecaglar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameCaglar_t {
    QByteArrayData data[8];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GameCaglar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GameCaglar_t qt_meta_stringdata_GameCaglar = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 7),
QT_MOC_LITERAL(4, 33, 13),
QT_MOC_LITERAL(5, 47, 5),
QT_MOC_LITERAL(6, 53, 19),
QT_MOC_LITERAL(7, 73, 18)
    },
    "GameCaglar\0testFinished\0\0timeout\0"
    "buttonClicked\0index\0on_pushPlay_clicked\0"
    "on_pushExt_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameCaglar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08,
       4,    1,   42,    2, 0x08,
       3,    0,   45,    2, 0x08,
       6,    0,   46,    2, 0x08,
       7,    0,   47,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameCaglar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameCaglar *_t = static_cast<GameCaglar *>(_o);
        switch (_id) {
        case 0: _t->testFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->timeout(); break;
        case 3: _t->on_pushPlay_clicked(); break;
        case 4: _t->on_pushExt_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject GameCaglar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameCaglar.data,
      qt_meta_data_GameCaglar,  qt_static_metacall, 0, 0}
};


const QMetaObject *GameCaglar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameCaglar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameCaglar.stringdata))
        return static_cast<void*>(const_cast< GameCaglar*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameCaglar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
