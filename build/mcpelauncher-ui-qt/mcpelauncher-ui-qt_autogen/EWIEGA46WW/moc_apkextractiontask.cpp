/****************************************************************************
** Meta object code from reading C++ file 'apkextractiontask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/apkextractiontask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apkextractiontask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApkExtractionTask_t {
    QByteArrayData data[23];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApkExtractionTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApkExtractionTask_t qt_meta_stringdata_ApkExtractionTask = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApkExtractionTask"
QT_MOC_LITERAL(1, 18, 8), // "progress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "versionInformationObtained"
QT_MOC_LITERAL(4, 55, 9), // "directory"
QT_MOC_LITERAL(5, 65, 11), // "versionName"
QT_MOC_LITERAL(6, 77, 11), // "versionCode"
QT_MOC_LITERAL(7, 89, 8), // "finished"
QT_MOC_LITERAL(8, 98, 5), // "error"
QT_MOC_LITERAL(9, 104, 3), // "err"
QT_MOC_LITERAL(10, 108, 13), // "activeChanged"
QT_MOC_LITERAL(11, 122, 28), // "onVersionInformationObtained"
QT_MOC_LITERAL(12, 151, 13), // "setSourceUrls"
QT_MOC_LITERAL(13, 165, 11), // "QList<QUrl>"
QT_MOC_LITERAL(14, 177, 4), // "urls"
QT_MOC_LITERAL(15, 182, 20), // "SetAllowIncompatible"
QT_MOC_LITERAL(16, 203, 1), // "c"
QT_MOC_LITERAL(17, 205, 14), // "versionManager"
QT_MOC_LITERAL(18, 220, 15), // "VersionManager*"
QT_MOC_LITERAL(19, 236, 7), // "sources"
QT_MOC_LITERAL(20, 244, 6), // "active"
QT_MOC_LITERAL(21, 251, 17), // "allowIncompatible"
QT_MOC_LITERAL(22, 269, 15) // "allowedPackages"

    },
    "ApkExtractionTask\0progress\0\0"
    "versionInformationObtained\0directory\0"
    "versionName\0versionCode\0finished\0error\0"
    "err\0activeChanged\0onVersionInformationObtained\0"
    "setSourceUrls\0QList<QUrl>\0urls\0"
    "SetAllowIncompatible\0c\0versionManager\0"
    "VersionManager*\0sources\0active\0"
    "allowIncompatible\0allowedPackages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApkExtractionTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    3,   57,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,
      10,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    3,   69,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x0a /* Public */,
      15,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    1,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,   16,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::QStringList, 0x00095103,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::Bool, 0x00095003,
       5, QMetaType::QString, 0x00095103,
      22, QMetaType::QStringList, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       4,
       0,
       0,
       0,

       0        // eod
};

void ApkExtractionTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApkExtractionTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->versionInformationObtained((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->finished(); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->activeChanged(); break;
        case 5: _t->onVersionInformationObtained((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: { bool _r = _t->setSourceUrls((*reinterpret_cast< QList<QUrl>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->SetAllowIncompatible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApkExtractionTask::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApkExtractionTask::progress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ApkExtractionTask::*)(QString const & , QString const & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApkExtractionTask::versionInformationObtained)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ApkExtractionTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApkExtractionTask::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ApkExtractionTask::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApkExtractionTask::error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ApkExtractionTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApkExtractionTask::activeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ApkExtractionTask *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< VersionManager**>(_v) = _t->versionManager(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->sources(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->allowIncompatible(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->versionName(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->allowedPackages(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ApkExtractionTask *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVersionManager(*reinterpret_cast< VersionManager**>(_v)); break;
        case 1: _t->setSources(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->SetAllowIncompatible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setVersionName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setAllowedPackages(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ApkExtractionTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ApkExtractionTask.data,
    qt_meta_data_ApkExtractionTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApkExtractionTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApkExtractionTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApkExtractionTask.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ApkExtractionTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApkExtractionTask::progress(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApkExtractionTask::versionInformationObtained(QString const & _t1, QString const & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ApkExtractionTask::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ApkExtractionTask::error(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ApkExtractionTask::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
