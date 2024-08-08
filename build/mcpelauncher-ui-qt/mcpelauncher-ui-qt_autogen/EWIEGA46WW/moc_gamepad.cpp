/****************************************************************************
** Meta object code from reading C++ file 'gamepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/gamepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gamepad_t {
    QByteArrayData data[15];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gamepad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gamepad_t qt_meta_stringdata_Gamepad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Gamepad"
QT_MOC_LITERAL(1, 8, 12), // "inputChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "metaChanged"
QT_MOC_LITERAL(4, 34, 14), // "mappingChanged"
QT_MOC_LITERAL(5, 49, 2), // "id"
QT_MOC_LITERAL(6, 52, 4), // "guid"
QT_MOC_LITERAL(7, 57, 4), // "name"
QT_MOC_LITERAL(8, 62, 7), // "buttons"
QT_MOC_LITERAL(9, 70, 12), // "QVector<int>"
QT_MOC_LITERAL(10, 83, 4), // "hats"
QT_MOC_LITERAL(11, 88, 4), // "axes"
QT_MOC_LITERAL(12, 93, 14), // "QVector<qreal>"
QT_MOC_LITERAL(13, 108, 18), // "fakeGamePadMapping"
QT_MOC_LITERAL(14, 127, 10) // "hasMapping"

    },
    "Gamepad\0inputChanged\0\0metaChanged\0"
    "mappingChanged\0id\0guid\0name\0buttons\0"
    "QVector<int>\0hats\0axes\0QVector<qreal>\0"
    "fakeGamePadMapping\0hasMapping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gamepad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00495003,
       6, QMetaType::QString, 0x00495003,
       7, QMetaType::QString, 0x00495003,
       8, 0x80000000 | 9, 0x00495009,
      10, 0x80000000 | 9, 0x00495009,
      11, 0x80000000 | 12, 0x00495009,
      13, QMetaType::QString, 0x00495003,
      14, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       1,
       1,
       1,
       0,
       0,
       0,
       1,
       2,

       0        // eod
};

void Gamepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Gamepad *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->inputChanged(); break;
        case 1: _t->metaChanged(); break;
        case 2: _t->mappingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Gamepad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gamepad::inputChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Gamepad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gamepad::metaChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Gamepad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gamepad::mappingChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<qreal> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Gamepad *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->m_id; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->m_guid; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->m_name; break;
        case 3: *reinterpret_cast< QVector<int>*>(_v) = _t->buttons(); break;
        case 4: *reinterpret_cast< QVector<int>*>(_v) = _t->hats(); break;
        case 5: *reinterpret_cast< QVector<qreal>*>(_v) = _t->axes(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->m_fakeGamePadMapping; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->m_hasMapping; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Gamepad *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_id != *reinterpret_cast< int*>(_v)) {
                _t->m_id = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->metaChanged();
            }
            break;
        case 1:
            if (_t->m_guid != *reinterpret_cast< QString*>(_v)) {
                _t->m_guid = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->metaChanged();
            }
            break;
        case 2:
            if (_t->m_name != *reinterpret_cast< QString*>(_v)) {
                _t->m_name = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->metaChanged();
            }
            break;
        case 6:
            if (_t->m_fakeGamePadMapping != *reinterpret_cast< QString*>(_v)) {
                _t->m_fakeGamePadMapping = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->metaChanged();
            }
            break;
        case 7:
            if (_t->m_hasMapping != *reinterpret_cast< bool*>(_v)) {
                _t->m_hasMapping = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->mappingChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Gamepad::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gamepad.data,
    qt_meta_data_Gamepad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gamepad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gamepad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gamepad.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gamepad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Gamepad::inputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Gamepad::metaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Gamepad::mappingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_GamepadManager_t {
    QByteArrayData data[12];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GamepadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GamepadManager_t qt_meta_stringdata_GamepadManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GamepadManager"
QT_MOC_LITERAL(1, 15, 10), // "errorAdded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "gamepadsChanged"
QT_MOC_LITERAL(4, 43, 11), // "clearErrors"
QT_MOC_LITERAL(5, 55, 11), // "saveMapping"
QT_MOC_LITERAL(6, 67, 7), // "datadir"
QT_MOC_LITERAL(7, 75, 7), // "mapping"
QT_MOC_LITERAL(8, 83, 6), // "errors"
QT_MOC_LITERAL(9, 90, 7), // "enabled"
QT_MOC_LITERAL(10, 98, 8), // "gamepads"
QT_MOC_LITERAL(11, 107, 15) // "QList<QObject*>"

    },
    "GamepadManager\0errorAdded\0\0gamepadsChanged\0"
    "clearErrors\0saveMapping\0datadir\0mapping\0"
    "errors\0enabled\0gamepads\0QList<QObject*>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamepadManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    2,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // properties: name, type, flags
       8, QMetaType::QStringList, 0x00495001,
       9, QMetaType::Bool, 0x00095103,
      10, 0x80000000 | 11, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void GamepadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamepadManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->errorAdded(); break;
        case 1: _t->gamepadsChanged(); break;
        case 2: _t->clearErrors(); break;
        case 3: _t->saveMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GamepadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamepadManager::errorAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GamepadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamepadManager::gamepadsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GamepadManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->errors(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 2: *reinterpret_cast< QList<QObject*>*>(_v) = _t->gamepads(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GamepadManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GamepadManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GamepadManager.data,
    qt_meta_data_GamepadManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GamepadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamepadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamepadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GamepadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GamepadManager::errorAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GamepadManager::gamepadsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
