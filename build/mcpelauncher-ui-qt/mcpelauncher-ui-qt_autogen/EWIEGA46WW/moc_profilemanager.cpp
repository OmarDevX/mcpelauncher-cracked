/****************************************************************************
** Meta object code from reading C++ file 'profilemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/profilemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profilemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProfileInfo_t {
    QByteArrayData data[28];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProfileInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProfileInfo_t qt_meta_stringdata_ProfileInfo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ProfileInfo"
QT_MOC_LITERAL(1, 12, 7), // "changed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "setName"
QT_MOC_LITERAL(4, 29, 7), // "newName"
QT_MOC_LITERAL(5, 37, 4), // "save"
QT_MOC_LITERAL(6, 42, 15), // "setTexturePatch"
QT_MOC_LITERAL(7, 58, 3), // "val"
QT_MOC_LITERAL(8, 62, 8), // "clearEnv"
QT_MOC_LITERAL(9, 71, 4), // "name"
QT_MOC_LITERAL(10, 76, 10), // "nameLocked"
QT_MOC_LITERAL(11, 87, 11), // "versionType"
QT_MOC_LITERAL(12, 99, 11), // "VersionType"
QT_MOC_LITERAL(13, 111, 14), // "versionDirName"
QT_MOC_LITERAL(14, 126, 11), // "versionCode"
QT_MOC_LITERAL(15, 138, 13), // "dataDirCustom"
QT_MOC_LITERAL(16, 152, 7), // "dataDir"
QT_MOC_LITERAL(17, 160, 16), // "windowCustomSize"
QT_MOC_LITERAL(18, 177, 11), // "windowWidth"
QT_MOC_LITERAL(19, 189, 12), // "windowHeight"
QT_MOC_LITERAL(20, 202, 4), // "arch"
QT_MOC_LITERAL(21, 207, 12), // "texturePatch"
QT_MOC_LITERAL(22, 220, 11), // "commandline"
QT_MOC_LITERAL(23, 232, 3), // "env"
QT_MOC_LITERAL(24, 236, 16), // "QQmlPropertyMap*"
QT_MOC_LITERAL(25, 253, 18), // "LATEST_GOOGLE_PLAY"
QT_MOC_LITERAL(26, 272, 11), // "LOCKED_NAME"
QT_MOC_LITERAL(27, 284, 11) // "LOCKED_CODE"

    },
    "ProfileInfo\0changed\0\0setName\0newName\0"
    "save\0setTexturePatch\0val\0clearEnv\0"
    "name\0nameLocked\0versionType\0VersionType\0"
    "versionDirName\0versionCode\0dataDirCustom\0"
    "dataDir\0windowCustomSize\0windowWidth\0"
    "windowHeight\0arch\0texturePatch\0"
    "commandline\0env\0QQmlPropertyMap*\0"
    "LATEST_GOOGLE_PLAY\0LOCKED_NAME\0"
    "LOCKED_CODE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProfileInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      14,   48, // properties
       1,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::Bool, 0x00095401,
      11, 0x80000000 | 12, 0x0049500b,
      13, QMetaType::QString, 0x00495003,
      14, QMetaType::Int, 0x00495003,
      15, QMetaType::Bool, 0x00495003,
      16, QMetaType::QString, 0x00495003,
      17, QMetaType::Bool, 0x00495003,
      18, QMetaType::Int, 0x00495003,
      19, QMetaType::Int, 0x00495003,
      20, QMetaType::QString, 0x00495003,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::QString, 0x00495003,
      23, 0x80000000 | 24, 0x0049500b,

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
       0,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    3,  109,

 // enum data: key, value
      25, uint(ProfileInfo::LATEST_GOOGLE_PLAY),
      26, uint(ProfileInfo::LOCKED_NAME),
      27, uint(ProfileInfo::LOCKED_CODE),

       0        // eod
};

void ProfileInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProfileInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->save(); break;
        case 3: _t->setTexturePatch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clearEnv(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProfileInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileInfo::changed)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlPropertyMap* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ProfileInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->nameLocked; break;
        case 2: *reinterpret_cast< VersionType*>(_v) = _t->versionType; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->versionDirName; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->versionCode; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->dataDirCustom; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->dataDir; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->windowCustomSize; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->windowWidth; break;
        case 9: *reinterpret_cast< int*>(_v) = _t->windowHeight; break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->arch; break;
        case 11: *reinterpret_cast< int*>(_v) = _t->texturePatch; break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->commandline; break;
        case 13: *reinterpret_cast< QQmlPropertyMap**>(_v) = _t->env; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ProfileInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2:
            if (_t->versionType != *reinterpret_cast< VersionType*>(_v)) {
                _t->versionType = *reinterpret_cast< VersionType*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 3:
            if (_t->versionDirName != *reinterpret_cast< QString*>(_v)) {
                _t->versionDirName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 4:
            if (_t->versionCode != *reinterpret_cast< int*>(_v)) {
                _t->versionCode = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 5:
            if (_t->dataDirCustom != *reinterpret_cast< bool*>(_v)) {
                _t->dataDirCustom = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 6:
            if (_t->dataDir != *reinterpret_cast< QString*>(_v)) {
                _t->dataDir = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 7:
            if (_t->windowCustomSize != *reinterpret_cast< bool*>(_v)) {
                _t->windowCustomSize = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 8:
            if (_t->windowWidth != *reinterpret_cast< int*>(_v)) {
                _t->windowWidth = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 9:
            if (_t->windowHeight != *reinterpret_cast< int*>(_v)) {
                _t->windowHeight = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 10:
            if (_t->arch != *reinterpret_cast< QString*>(_v)) {
                _t->arch = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 11: _t->setTexturePatch(*reinterpret_cast< int*>(_v)); break;
        case 12:
            if (_t->commandline != *reinterpret_cast< QString*>(_v)) {
                _t->commandline = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->changed();
            }
            break;
        case 13:
            if (_t->env != *reinterpret_cast< QQmlPropertyMap**>(_v)) {
                _t->env = *reinterpret_cast< QQmlPropertyMap**>(_v);
                Q_EMIT _t->changed();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ProfileInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ProfileInfo.data,
    qt_meta_data_ProfileInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProfileInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProfileInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ProfileInfo::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ProfileManager_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProfileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProfileManager_t qt_meta_stringdata_ProfileManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProfileManager"
QT_MOC_LITERAL(1, 15, 15), // "profilesChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "activeProfileChanged"
QT_MOC_LITERAL(4, 53, 13), // "createProfile"
QT_MOC_LITERAL(5, 67, 12), // "ProfileInfo*"
QT_MOC_LITERAL(6, 80, 4), // "name"
QT_MOC_LITERAL(7, 85, 13), // "deleteProfile"
QT_MOC_LITERAL(8, 99, 7), // "profile"
QT_MOC_LITERAL(9, 107, 12), // "validateName"
QT_MOC_LITERAL(10, 120, 8), // "profiles"
QT_MOC_LITERAL(11, 129, 15), // "QList<QObject*>"
QT_MOC_LITERAL(12, 145, 14), // "defaultProfile"
QT_MOC_LITERAL(13, 160, 13) // "activeProfile"

    },
    "ProfileManager\0profilesChanged\0\0"
    "activeProfileChanged\0createProfile\0"
    "ProfileInfo*\0name\0deleteProfile\0profile\0"
    "validateName\0profiles\0QList<QObject*>\0"
    "defaultProfile\0activeProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProfileManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 5, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Bool, QMetaType::QString,    6,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00495009,
      12, 0x80000000 | 5, 0x00095409,
      13, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void ProfileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProfileManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->profilesChanged(); break;
        case 1: _t->activeProfileChanged(); break;
        case 2: { ProfileInfo* _r = _t->createProfile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ProfileInfo**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->deleteProfile((*reinterpret_cast< ProfileInfo*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->validateName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ProfileInfo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProfileManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileManager::profilesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProfileManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileManager::activeProfileChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ProfileInfo* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ProfileManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QObject*>*>(_v) = _t->profiles(); break;
        case 1: *reinterpret_cast< ProfileInfo**>(_v) = _t->defaultProfile(); break;
        case 2: *reinterpret_cast< ProfileInfo**>(_v) = _t->activeProfile(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ProfileManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setActiveProfile(*reinterpret_cast< ProfileInfo**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ProfileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ProfileManager.data,
    qt_meta_data_ProfileManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProfileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProfileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void ProfileManager::profilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProfileManager::activeProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
