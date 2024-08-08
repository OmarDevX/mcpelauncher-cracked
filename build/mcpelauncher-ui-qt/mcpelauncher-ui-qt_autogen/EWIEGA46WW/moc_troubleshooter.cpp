/****************************************************************************
** Meta object code from reading C++ file 'troubleshooter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/troubleshooter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'troubleshooter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TroubleshooterIssue_t {
    QByteArrayData data[10];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TroubleshooterIssue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TroubleshooterIssue_t qt_meta_stringdata_TroubleshooterIssue = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TroubleshooterIssue"
QT_MOC_LITERAL(1, 20, 9), // "shortDesc"
QT_MOC_LITERAL(2, 30, 8), // "longDesc"
QT_MOC_LITERAL(3, 39, 7), // "wikiUrl"
QT_MOC_LITERAL(4, 47, 4), // "Type"
QT_MOC_LITERAL(5, 52, 23), // "TYPE_LAUNCHER_NOT_FOUND"
QT_MOC_LITERAL(6, 76, 34), // "TYPE_LAUNCHER_VERSION_QUERY_F..."
QT_MOC_LITERAL(7, 111, 31), // "TYPE_LAUNCHER_SOFTWARE_RENDERER"
QT_MOC_LITERAL(8, 143, 27), // "TYPE_LAUNCHER_MSA_NOT_FOUND"
QT_MOC_LITERAL(9, 171, 30) // "TYPE_LAUNCHER_ZENITY_NOT_FOUND"

    },
    "TroubleshooterIssue\0shortDesc\0longDesc\0"
    "wikiUrl\0Type\0TYPE_LAUNCHER_NOT_FOUND\0"
    "TYPE_LAUNCHER_VERSION_QUERY_FAILED\0"
    "TYPE_LAUNCHER_SOFTWARE_RENDERER\0"
    "TYPE_LAUNCHER_MSA_NOT_FOUND\0"
    "TYPE_LAUNCHER_ZENITY_NOT_FOUND"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TroubleshooterIssue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    5,   28,

 // enum data: key, value
       5, uint(TroubleshooterIssue::TYPE_LAUNCHER_NOT_FOUND),
       6, uint(TroubleshooterIssue::TYPE_LAUNCHER_VERSION_QUERY_FAILED),
       7, uint(TroubleshooterIssue::TYPE_LAUNCHER_SOFTWARE_RENDERER),
       8, uint(TroubleshooterIssue::TYPE_LAUNCHER_MSA_NOT_FOUND),
       9, uint(TroubleshooterIssue::TYPE_LAUNCHER_ZENITY_NOT_FOUND),

       0        // eod
};

void TroubleshooterIssue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TroubleshooterIssue *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->shortDesc; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->longDesc; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->wikiUrl; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TroubleshooterIssue::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TroubleshooterIssue.data,
    qt_meta_data_TroubleshooterIssue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TroubleshooterIssue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TroubleshooterIssue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TroubleshooterIssue.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TroubleshooterIssue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_Troubleshooter_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Troubleshooter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Troubleshooter_t qt_meta_stringdata_Troubleshooter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Troubleshooter"
QT_MOC_LITERAL(1, 15, 10), // "findIssues"
QT_MOC_LITERAL(2, 26, 15), // "QList<QObject*>"
QT_MOC_LITERAL(3, 42, 0) // ""

    },
    "Troubleshooter\0findIssues\0QList<QObject*>\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Troubleshooter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,

       0        // eod
};

void Troubleshooter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Troubleshooter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<QObject*> _r = _t->findIssues();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Troubleshooter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Troubleshooter.data,
    qt_meta_data_Troubleshooter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Troubleshooter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Troubleshooter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Troubleshooter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Troubleshooter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
