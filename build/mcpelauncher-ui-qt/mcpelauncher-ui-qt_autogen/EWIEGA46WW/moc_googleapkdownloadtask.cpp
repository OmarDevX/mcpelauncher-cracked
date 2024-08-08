/****************************************************************************
** Meta object code from reading C++ file 'googleapkdownloadtask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/googleapkdownloadtask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googleapkdownloadtask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GoogleApkDownloadTask_t {
    QByteArrayData data[22];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleApkDownloadTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleApkDownloadTask_t qt_meta_stringdata_GoogleApkDownloadTask = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GoogleApkDownloadTask"
QT_MOC_LITERAL(1, 22, 8), // "progress"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "finished"
QT_MOC_LITERAL(4, 41, 5), // "error"
QT_MOC_LITERAL(5, 47, 3), // "err"
QT_MOC_LITERAL(6, 51, 13), // "activeChanged"
QT_MOC_LITERAL(7, 65, 13), // "queueDownload"
QT_MOC_LITERAL(8, 79, 56), // "playapi::proto::finsky::downl..."
QT_MOC_LITERAL(9, 136, 2), // "dd"
QT_MOC_LITERAL(10, 139, 11), // "skipMainApk"
QT_MOC_LITERAL(11, 151, 12), // "downloadInfo"
QT_MOC_LITERAL(12, 164, 3), // "url"
QT_MOC_LITERAL(13, 168, 5), // "start"
QT_MOC_LITERAL(14, 174, 7), // "playApi"
QT_MOC_LITERAL(15, 182, 14), // "GooglePlayApi*"
QT_MOC_LITERAL(16, 197, 11), // "packageName"
QT_MOC_LITERAL(17, 209, 11), // "versionCode"
QT_MOC_LITERAL(18, 221, 6), // "active"
QT_MOC_LITERAL(19, 228, 9), // "filePaths"
QT_MOC_LITERAL(20, 238, 8), // "keepApks"
QT_MOC_LITERAL(21, 247, 6) // "dryrun"

    },
    "GoogleApkDownloadTask\0progress\0\0"
    "finished\0error\0err\0activeChanged\0"
    "queueDownload\0"
    "playapi::proto::finsky::download::AndroidAppDeliveryData\0"
    "dd\0skipMainApk\0downloadInfo\0url\0start\0"
    "playApi\0GooglePlayApi*\0packageName\0"
    "versionCode\0active\0filePaths\0keepApks\0"
    "dryrun"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleApkDownloadTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x06 /* Public */,
       4,    1,   58,    2, 0x06 /* Public */,
       6,    0,   61,    2, 0x06 /* Public */,
       7,    2,   62,    2, 0x06 /* Public */,
      11,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   70,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0009510a,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::QStringList, 0x00095001,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Bool, 0x00095003,

 // properties: notify_signal_id
       0,
       0,
       0,
       3,
       0,
       0,
       0,

       0        // eod
};

void GoogleApkDownloadTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GoogleApkDownloadTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->activeChanged(); break;
        case 4: _t->queueDownload((*reinterpret_cast< playapi::proto::finsky::download::AndroidAppDeliveryData(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->downloadInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->start((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GoogleApkDownloadTask::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleApkDownloadTask::progress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GoogleApkDownloadTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleApkDownloadTask::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GoogleApkDownloadTask::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleApkDownloadTask::error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GoogleApkDownloadTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleApkDownloadTask::activeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GoogleApkDownloadTask::*)(playapi::proto::finsky::download::AndroidAppDeliveryData , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleApkDownloadTask::queueDownload)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GoogleApkDownloadTask::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleApkDownloadTask::downloadInfo)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GoogleApkDownloadTask *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: *reinterpret_cast< QString*>(_v) = _t->packageName(); break;
        case 2: *reinterpret_cast< qint32*>(_v) = _t->versionCode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->filePaths(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->keepApks(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->m_dryrun; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GoogleApkDownloadTask *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlayApi(*reinterpret_cast< GooglePlayApi**>(_v)); break;
        case 1: _t->setPackageName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVersionCode(*reinterpret_cast< qint32*>(_v)); break;
        case 5: _t->setKeepApks(*reinterpret_cast< bool*>(_v)); break;
        case 6:
            if (_t->m_dryrun != *reinterpret_cast< bool*>(_v)) {
                _t->m_dryrun = *reinterpret_cast< bool*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GoogleApkDownloadTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GoogleApkDownloadTask.data,
    qt_meta_data_GoogleApkDownloadTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleApkDownloadTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleApkDownloadTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleApkDownloadTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GoogleApkDownloadTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GoogleApkDownloadTask::progress(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GoogleApkDownloadTask::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GoogleApkDownloadTask::error(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GoogleApkDownloadTask::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GoogleApkDownloadTask::queueDownload(playapi::proto::finsky::download::AndroidAppDeliveryData _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GoogleApkDownloadTask::downloadInfo(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
