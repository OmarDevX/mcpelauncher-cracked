/****************************************************************************
** Meta object code from reading C++ file 'googleplayapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/googleplayapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googleplayapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GooglePlayApi_t {
    QByteArrayData data[35];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GooglePlayApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GooglePlayApi_t qt_meta_stringdata_GooglePlayApi = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GooglePlayApi"
QT_MOC_LITERAL(1, 14, 5), // "ready"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "initError"
QT_MOC_LITERAL(4, 31, 4), // "text"
QT_MOC_LITERAL(5, 36, 19), // "tosApprovalRequired"
QT_MOC_LITERAL(6, 56, 7), // "tosText"
QT_MOC_LITERAL(7, 64, 13), // "marketingText"
QT_MOC_LITERAL(8, 78, 15), // "appInfoReceived"
QT_MOC_LITERAL(9, 94, 11), // "packageName"
QT_MOC_LITERAL(10, 106, 7), // "version"
QT_MOC_LITERAL(11, 114, 11), // "versionCode"
QT_MOC_LITERAL(12, 126, 6), // "isBeta"
QT_MOC_LITERAL(13, 133, 13), // "appInfoFailed"
QT_MOC_LITERAL(14, 147, 12), // "errorMessage"
QT_MOC_LITERAL(15, 160, 13), // "statusChanged"
QT_MOC_LITERAL(16, 174, 14), // "requestAppInfo"
QT_MOC_LITERAL(17, 189, 15), // "validateLicense"
QT_MOC_LITERAL(18, 205, 11), // "std::string"
QT_MOC_LITERAL(19, 217, 11), // "packagename"
QT_MOC_LITERAL(20, 229, 12), // "versionscode"
QT_MOC_LITERAL(21, 242, 25), // "std::function<void(bool)>"
QT_MOC_LITERAL(22, 268, 8), // "callback"
QT_MOC_LITERAL(23, 277, 14), // "setTosApproved"
QT_MOC_LITERAL(24, 292, 8), // "approved"
QT_MOC_LITERAL(25, 301, 9), // "marketing"
QT_MOC_LITERAL(26, 311, 12), // "cleanupLogin"
QT_MOC_LITERAL(27, 324, 5), // "login"
QT_MOC_LITERAL(28, 330, 18), // "GoogleLoginHelper*"
QT_MOC_LITERAL(29, 349, 6), // "status"
QT_MOC_LITERAL(30, 356, 19), // "GooglePlayApiStatus"
QT_MOC_LITERAL(31, 376, 9), // "NOT_READY"
QT_MOC_LITERAL(32, 386, 7), // "PENDING"
QT_MOC_LITERAL(33, 394, 6), // "FAILED"
QT_MOC_LITERAL(34, 401, 8) // "SUCCEDED"

    },
    "GooglePlayApi\0ready\0\0initError\0text\0"
    "tosApprovalRequired\0tosText\0marketingText\0"
    "appInfoReceived\0packageName\0version\0"
    "versionCode\0isBeta\0appInfoFailed\0"
    "errorMessage\0statusChanged\0requestAppInfo\0"
    "validateLicense\0std::string\0packagename\0"
    "versionscode\0std::function<void(bool)>\0"
    "callback\0setTosApproved\0approved\0"
    "marketing\0cleanupLogin\0login\0"
    "GoogleLoginHelper*\0status\0GooglePlayApiStatus\0"
    "NOT_READY\0PENDING\0FAILED\0SUCCEDED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GooglePlayApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,  104, // properties
       1,  112, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    2,   68,    2, 0x06 /* Public */,
       8,    4,   73,    2, 0x06 /* Public */,
      13,    2,   82,    2, 0x06 /* Public */,
      15,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   88,    2, 0x0a /* Public */,
      17,    3,   91,    2, 0x0a /* Public */,
      23,    2,   98,    2, 0x0a /* Public */,
      26,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int, 0x80000000 | 21,   19,   20,   22,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   24,   25,
    QMetaType::Void,

 // properties: name, type, flags
      27, 0x80000000 | 28, 0x0009510b,
      29, 0x80000000 | 30, 0x00495009,

 // properties: notify_signal_id
       0,
       5,

 // enums: name, alias, flags, count, data
      30,   30, 0x2,    4,  117,

 // enum data: key, value
      31, uint(GooglePlayApi::GooglePlayApiStatus::NOT_READY),
      32, uint(GooglePlayApi::GooglePlayApiStatus::PENDING),
      33, uint(GooglePlayApi::GooglePlayApiStatus::FAILED),
      34, uint(GooglePlayApi::GooglePlayApiStatus::SUCCEDED),

       0        // eod
};

void GooglePlayApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GooglePlayApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->initError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->tosApprovalRequired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->appInfoReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->appInfoFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->statusChanged(); break;
        case 6: _t->requestAppInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->validateLicense((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< std::function<void(bool)>(*)>(_a[3]))); break;
        case 8: _t->setTosApproved((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->cleanupLogin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GooglePlayApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GooglePlayApi::ready)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GooglePlayApi::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GooglePlayApi::initError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GooglePlayApi::*)(QString const & , QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GooglePlayApi::tosApprovalRequired)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GooglePlayApi::*)(QString const & , QString const & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GooglePlayApi::appInfoReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GooglePlayApi::*)(QString const & , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GooglePlayApi::appInfoFailed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GooglePlayApi::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GooglePlayApi::statusChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GooglePlayApi *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< GoogleLoginHelper**>(_v) = _t->getLogin(); break;
        case 1: *reinterpret_cast< GooglePlayApiStatus*>(_v) = _t->getStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GooglePlayApi *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogin(*reinterpret_cast< GoogleLoginHelper**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GooglePlayApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GooglePlayApi.data,
    qt_meta_data_GooglePlayApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GooglePlayApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GooglePlayApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GooglePlayApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GooglePlayApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GooglePlayApi::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GooglePlayApi::initError(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GooglePlayApi::tosApprovalRequired(QString const & _t1, QString const & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GooglePlayApi::appInfoReceived(QString const & _t1, QString const & _t2, int _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GooglePlayApi::appInfoFailed(QString const & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GooglePlayApi::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
