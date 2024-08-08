/****************************************************************************
** Meta object code from reading C++ file 'googleversionchannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/googleversionchannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googleversionchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GoogleVersionChannel_t {
    QByteArrayData data[20];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleVersionChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleVersionChannel_t qt_meta_stringdata_GoogleVersionChannel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GoogleVersionChannel"
QT_MOC_LITERAL(1, 21, 20), // "latestVersionChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "statusChanged"
QT_MOC_LITERAL(4, 57, 7), // "playApi"
QT_MOC_LITERAL(5, 65, 14), // "GooglePlayApi*"
QT_MOC_LITERAL(6, 80, 13), // "latestVersion"
QT_MOC_LITERAL(7, 94, 17), // "latestVersionCode"
QT_MOC_LITERAL(8, 112, 19), // "latestVersionIsBeta"
QT_MOC_LITERAL(9, 132, 6), // "status"
QT_MOC_LITERAL(10, 139, 26), // "GoogleVersionChannelStatus"
QT_MOC_LITERAL(11, 166, 9), // "trialMode"
QT_MOC_LITERAL(12, 176, 18), // "hasVerifiedLicense"
QT_MOC_LITERAL(13, 195, 13), // "licenseStatus"
QT_MOC_LITERAL(14, 209, 33), // "GoogleVersionChannelLicenceSt..."
QT_MOC_LITERAL(15, 243, 9), // "NOT_READY"
QT_MOC_LITERAL(16, 253, 7), // "PENDING"
QT_MOC_LITERAL(17, 261, 6), // "FAILED"
QT_MOC_LITERAL(18, 268, 8), // "SUCCEDED"
QT_MOC_LITERAL(19, 277, 7) // "OFFLINE"

    },
    "GoogleVersionChannel\0latestVersionChanged\0"
    "\0statusChanged\0playApi\0GooglePlayApi*\0"
    "latestVersion\0latestVersionCode\0"
    "latestVersionIsBeta\0status\0"
    "GoogleVersionChannelStatus\0trialMode\0"
    "hasVerifiedLicense\0licenseStatus\0"
    "GoogleVersionChannelLicenceStatus\0"
    "NOT_READY\0PENDING\0FAILED\0SUCCEDED\0"
    "OFFLINE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleVersionChannel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       8,   26, // properties
       2,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::QString, 0x00495001,
       7, QMetaType::Int, 0x00495001,
       8, QMetaType::Bool, 0x00495001,
       9, 0x80000000 | 10, 0x00495009,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495003,
      13, 0x80000000 | 14, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       1,
       1,
       1,

 // enums: name, alias, flags, count, data
      10,   10, 0x2,    4,   68,
      14,   14, 0x2,    5,   76,

 // enum data: key, value
      15, uint(GoogleVersionChannel::GoogleVersionChannelStatus::NOT_READY),
      16, uint(GoogleVersionChannel::GoogleVersionChannelStatus::PENDING),
      17, uint(GoogleVersionChannel::GoogleVersionChannelStatus::FAILED),
      18, uint(GoogleVersionChannel::GoogleVersionChannelStatus::SUCCEDED),
      15, uint(GoogleVersionChannel::GoogleVersionChannelLicenceStatus::NOT_READY),
      16, uint(GoogleVersionChannel::GoogleVersionChannelLicenceStatus::PENDING),
      17, uint(GoogleVersionChannel::GoogleVersionChannelLicenceStatus::FAILED),
      18, uint(GoogleVersionChannel::GoogleVersionChannelLicenceStatus::SUCCEDED),
      19, uint(GoogleVersionChannel::GoogleVersionChannelLicenceStatus::OFFLINE),

       0        // eod
};

void GoogleVersionChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GoogleVersionChannel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->latestVersionChanged(); break;
        case 1: _t->statusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GoogleVersionChannel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleVersionChannel::latestVersionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GoogleVersionChannel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoogleVersionChannel::statusChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GooglePlayApi* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GoogleVersionChannel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< GooglePlayApi**>(_v) = _t->m_playApi; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->latestVersion(); break;
        case 2: *reinterpret_cast< qint32*>(_v) = _t->latestVersionCode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->latestVersionIsBeta(); break;
        case 4: *reinterpret_cast< GoogleVersionChannelStatus*>(_v) = _t->getStatus(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->m_trialMode; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->m_hasVerifiedLicense; break;
        case 7: *reinterpret_cast< GoogleVersionChannelLicenceStatus*>(_v) = _t->getLicenseStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GoogleVersionChannel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlayApi(*reinterpret_cast< GooglePlayApi**>(_v)); break;
        case 5: _t->setTrialMode(*reinterpret_cast< bool*>(_v)); break;
        case 6:
            if (_t->m_hasVerifiedLicense != *reinterpret_cast< bool*>(_v)) {
                _t->m_hasVerifiedLicense = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->statusChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GoogleVersionChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GoogleVersionChannel.data,
    qt_meta_data_GoogleVersionChannel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GoogleVersionChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleVersionChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleVersionChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GoogleVersionChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GoogleVersionChannel::latestVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GoogleVersionChannel::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
