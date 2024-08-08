/****************************************************************************
** Meta object code from reading C++ file 'googleloginhelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/googleloginhelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googleloginhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GoogleLoginHelper_t {
    QByteArrayData data[21];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleLoginHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleLoginHelper_t qt_meta_stringdata_GoogleLoginHelper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GoogleLoginHelper"
QT_MOC_LITERAL(1, 18, 22), // "accountAcquireFinished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "GoogleAccount*"
QT_MOC_LITERAL(4, 57, 7), // "account"
QT_MOC_LITERAL(5, 65, 18), // "accountInfoChanged"
QT_MOC_LITERAL(6, 84, 10), // "loginError"
QT_MOC_LITERAL(7, 95, 5), // "error"
QT_MOC_LITERAL(8, 101, 14), // "acquireAccount"
QT_MOC_LITERAL(9, 116, 8), // "QWindow*"
QT_MOC_LITERAL(10, 125, 6), // "parent"
QT_MOC_LITERAL(11, 132, 7), // "signOut"
QT_MOC_LITERAL(12, 140, 7), // "getAbis"
QT_MOC_LITERAL(13, 148, 19), // "includeIncompatible"
QT_MOC_LITERAL(14, 168, 16), // "GetSupportReport"
QT_MOC_LITERAL(15, 185, 11), // "isSupported"
QT_MOC_LITERAL(16, 197, 10), // "singleArch"
QT_MOC_LITERAL(17, 208, 10), // "hideLatest"
QT_MOC_LITERAL(18, 219, 23), // "hasEncryptedCredentials"
QT_MOC_LITERAL(19, 243, 9), // "unlockkey"
QT_MOC_LITERAL(20, 253, 8) // "chromeOS"

    },
    "GoogleLoginHelper\0accountAcquireFinished\0"
    "\0GoogleAccount*\0account\0accountInfoChanged\0"
    "loginError\0error\0acquireAccount\0"
    "QWindow*\0parent\0signOut\0getAbis\0"
    "includeIncompatible\0GetSupportReport\0"
    "isSupported\0singleArch\0hideLatest\0"
    "hasEncryptedCredentials\0unlockkey\0"
    "chromeOS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleLoginHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   61,    2, 0x0a /* Public */,
      11,    0,   64,    2, 0x0a /* Public */,
      12,    1,   65,    2, 0x0a /* Public */,
      14,    0,   68,    2, 0x0a /* Public */,
      15,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::QStringList, QMetaType::Bool,   13,
    QMetaType::QString,
    QMetaType::Bool,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00495009,
      13, QMetaType::Bool, 0x00095103,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::Bool, 0x00495001,
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       1,
       0,
       0,
       1,
       1,
       1,
       0,

       0        // eod
};

void GoogleLoginHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GoogleLoginHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accountAcquireFinished((*reinterpret_cast< GoogleAccount*(*)>(_a[1]))); break;
        case 1: _t->accountInfoChanged(); break;
        case 2: _t->loginError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->acquireAccount((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 4: _t->signOut(); break;
        case 5: { QStringList _r = _t->getAbis((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->GetSupportReport();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->isSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GoogleAccount* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GoogleLoginHelper::*)(GoogleAccount * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleLoginHelper::accountAcquireFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GoogleLoginHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleLoginHelper::accountInfoChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GoogleLoginHelper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleLoginHelper::loginError)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GoogleAccount* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GoogleLoginHelper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< GoogleAccount**>(_v) = _t->account(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIncludeIncompatible(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getSingleArch(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hideLatest(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getHasEncryptedCredentials(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getUnlockkey(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->chromeOS; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GoogleLoginHelper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setIncludeIncompatible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSingleArch(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setUnlockkey(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setChromeOS(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GoogleLoginHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GoogleLoginHelper.data,
    qt_meta_data_GoogleLoginHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleLoginHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleLoginHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleLoginHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GoogleLoginHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
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
void GoogleLoginHelper::accountAcquireFinished(GoogleAccount * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GoogleLoginHelper::accountInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GoogleLoginHelper::loginError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
