/****************************************************************************
** Meta object code from reading C++ file 'genericaccessservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/qtpokit/genericaccessservice.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericaccessservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS = QtMocHelpers::stringData(
    "GenericAccessService",
    "appearanceRead",
    "",
    "appearance",
    "deviceNameRead",
    "deviceName",
    "deviceNameWritten"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[15];
    char stringdata5[11];
    char stringdata6[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS_t qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "GenericAccessService"
        QT_MOC_LITERAL(21, 14),  // "appearanceRead"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 10),  // "appearance"
        QT_MOC_LITERAL(48, 14),  // "deviceNameRead"
        QT_MOC_LITERAL(63, 10),  // "deviceName"
        QT_MOC_LITERAL(74, 17)   // "deviceNameWritten"
    },
    "GenericAccessService",
    "appearanceRead",
    "",
    "appearance",
    "deviceNameRead",
    "deviceName",
    "deviceNameWritten"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGenericAccessServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,
       6,    0,   38,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GenericAccessService::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPokitService::staticMetaObject>(),
    qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGenericAccessServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GenericAccessService, std::true_type>,
        // method 'appearanceRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        // method 'deviceNameRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deviceNameWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GenericAccessService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GenericAccessService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appearanceRead((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 1: _t->deviceNameRead((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->deviceNameWritten(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GenericAccessService::*)(const quint16 );
            if (_t _q_method = &GenericAccessService::appearanceRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GenericAccessService::*)(const QString & );
            if (_t _q_method = &GenericAccessService::deviceNameRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GenericAccessService::*)();
            if (_t _q_method = &GenericAccessService::deviceNameWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *GenericAccessService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericAccessService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGenericAccessServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPokitService::qt_metacast(_clname);
}

int GenericAccessService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPokitService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GenericAccessService::appearanceRead(const quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GenericAccessService::deviceNameRead(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GenericAccessService::deviceNameWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
