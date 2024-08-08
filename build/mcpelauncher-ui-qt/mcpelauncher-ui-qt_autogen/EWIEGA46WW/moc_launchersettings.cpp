/****************************************************************************
** Meta object code from reading C++ file 'launchersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/launchersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'launchersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LauncherSettings_t {
    QByteArrayData data[22];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LauncherSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LauncherSettings_t qt_meta_stringdata_LauncherSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LauncherSettings"
QT_MOC_LITERAL(1, 17, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "clipboardChanged"
QT_MOC_LITERAL(4, 51, 13), // "resetSettings"
QT_MOC_LITERAL(5, 65, 17), // "startHideLauncher"
QT_MOC_LITERAL(6, 83, 12), // "startOpenLog"
QT_MOC_LITERAL(7, 96, 14), // "disableGameLog"
QT_MOC_LITERAL(8, 111, 15), // "checkForUpdates"
QT_MOC_LITERAL(9, 127, 14), // "showUnverified"
QT_MOC_LITERAL(10, 142, 15), // "showUnsupported"
QT_MOC_LITERAL(11, 158, 16), // "showBetaVersions"
QT_MOC_LITERAL(12, 175, 12), // "downloadOnly"
QT_MOC_LITERAL(13, 188, 10), // "singleArch"
QT_MOC_LITERAL(14, 199, 11), // "lastVersion"
QT_MOC_LITERAL(15, 211, 11), // "gameDataDir"
QT_MOC_LITERAL(16, 223, 19), // "versionsFeedBaseUrl"
QT_MOC_LITERAL(17, 243, 17), // "showNotifications"
QT_MOC_LITERAL(18, 261, 9), // "clipboard"
QT_MOC_LITERAL(19, 271, 12), // "chromeOSMode"
QT_MOC_LITERAL(20, 284, 8), // "keepApks"
QT_MOC_LITERAL(21, 293, 9) // "trialMode"

    },
    "LauncherSettings\0settingsChanged\0\0"
    "clipboardChanged\0resetSettings\0"
    "startHideLauncher\0startOpenLog\0"
    "disableGameLog\0checkForUpdates\0"
    "showUnverified\0showUnsupported\0"
    "showBetaVersions\0downloadOnly\0singleArch\0"
    "lastVersion\0gameDataDir\0versionsFeedBaseUrl\0"
    "showNotifications\0clipboard\0chromeOSMode\0"
    "keepApks\0trialMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LauncherSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      17,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00495103,
       6, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::LongLong, 0x00495103,
      15, QMetaType::QUrl, 0x00095001,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::Bool, 0x00495103,
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,

       0        // eod
};

void LauncherSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LauncherSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->clipboardChanged(); break;
        case 2: _t->resetSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LauncherSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherSettings::settingsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LauncherSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherSettings::clipboardChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LauncherSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->startHideLauncher(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->startOpenLog(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->disableGameLog(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->checkForUpdates(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showUnverified(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showUnsupported(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showBetaVersions(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->downloadOnly(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->singleArch(); break;
        case 9: *reinterpret_cast< long long*>(_v) = _t->lastVersion(); break;
        case 10: *reinterpret_cast< QUrl*>(_v) = _t->gameDataDir(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->versionsFeedBaseUrl(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->showNotifications(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->clipboard(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->chromeOSMode(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->keepApks(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->trialMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LauncherSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartHideLauncher(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setStartOpenLog(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDisableGameLog(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setCheckForUpdates(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowUnverified(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowUnsupported(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setShowBetaVersions(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDownloadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setSingleArch(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setLastVersion(*reinterpret_cast< long long*>(_v)); break;
        case 11: _t->setVersionsFeedBaseUrl(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setShowNotifications(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setClipboard(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setChromeOSMode(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setKeepApks(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setTrialMode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LauncherSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LauncherSettings.data,
    qt_meta_data_LauncherSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LauncherSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LauncherSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LauncherSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LauncherSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LauncherSettings::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LauncherSettings::clipboardChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
