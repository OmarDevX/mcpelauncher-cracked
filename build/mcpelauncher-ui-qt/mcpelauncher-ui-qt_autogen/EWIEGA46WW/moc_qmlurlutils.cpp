/****************************************************************************
** Meta object code from reading C++ file 'qmlurlutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mcpelauncher-ui-qt/qmlurlutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlurlutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlUrlUtils_t {
    QByteArrayData data[8];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlUrlUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlUrlUtils_t qt_meta_stringdata_QmlUrlUtils = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QmlUrlUtils"
QT_MOC_LITERAL(1, 12, 8), // "resolved"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "url"
QT_MOC_LITERAL(4, 26, 8), // "relative"
QT_MOC_LITERAL(5, 35, 14), // "urlToLocalFile"
QT_MOC_LITERAL(6, 50, 14), // "localFileToUrl"
QT_MOC_LITERAL(7, 65, 4) // "path"

    },
    "QmlUrlUtils\0resolved\0\0url\0relative\0"
    "urlToLocalFile\0localFileToUrl\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlUrlUtils[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       5,    1,   34,    2, 0x0a /* Public */,
       6,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QUrl, QMetaType::QUrl, QMetaType::QUrl,    3,    4,
    QMetaType::QString, QMetaType::QUrl,    3,
    QMetaType::QUrl, QMetaType::QString,    7,

       0        // eod
};

void QmlUrlUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QmlUrlUtils *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QUrl _r = _t->resolved((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->urlToLocalFile((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QUrl _r = _t->localFileToUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmlUrlUtils::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QmlUrlUtils.data,
    qt_meta_data_QmlUrlUtils,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QmlUrlUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlUrlUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlUrlUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlUrlUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
