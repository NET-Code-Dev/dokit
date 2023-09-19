/****************************************************************************
** Meta object code from reading C++ file 'pokitdiscoveryagent_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/lib/pokitdiscoveryagent_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pokitdiscoveryagent_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS = QtMocHelpers::stringData(
    "PokitDiscoveryAgentPrivate",
    "canceled",
    "",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "info",
    "deviceUpdated",
    "QBluetoothDeviceInfo::Fields",
    "updatedFields",
    "error",
    "QBluetoothDeviceDiscoveryAgent::Error",
    "finished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[27];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[21];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[29];
    char stringdata8[14];
    char stringdata9[6];
    char stringdata10[38];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS_t qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "PokitDiscoveryAgentPrivate"
        QT_MOC_LITERAL(27, 8),  // "canceled"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 16),  // "deviceDiscovered"
        QT_MOC_LITERAL(54, 20),  // "QBluetoothDeviceInfo"
        QT_MOC_LITERAL(75, 4),  // "info"
        QT_MOC_LITERAL(80, 13),  // "deviceUpdated"
        QT_MOC_LITERAL(94, 28),  // "QBluetoothDeviceInfo::Fields"
        QT_MOC_LITERAL(123, 13),  // "updatedFields"
        QT_MOC_LITERAL(137, 5),  // "error"
        QT_MOC_LITERAL(143, 37),  // "QBluetoothDeviceDiscoveryAgen..."
        QT_MOC_LITERAL(181, 8)   // "finished"
    },
    "PokitDiscoveryAgentPrivate",
    "canceled",
    "",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "info",
    "deviceUpdated",
    "QBluetoothDeviceInfo::Fields",
    "updatedFields",
    "error",
    "QBluetoothDeviceDiscoveryAgent::Error",
    "finished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPokitDiscoveryAgentPrivateENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       3,    1,   45,    2, 0x0a,    2 /* Public */,
       6,    2,   48,    2, 0x0a,    4 /* Public */,
       9,    1,   53,    2, 0x10a,    7 /* Public | MethodIsConst  */,
      11,    0,   56,    2, 0x10a,    9 /* Public | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 7,    5,    8,
    QMetaType::Void, 0x80000000 | 10,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PokitDiscoveryAgentPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPokitDiscoveryAgentPrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PokitDiscoveryAgentPrivate, std::true_type>,
        // method 'canceled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceInfo &, std::false_type>,
        // method 'deviceUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QBluetoothDeviceInfo::Fields, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceDiscoveryAgent::Error, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PokitDiscoveryAgentPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PokitDiscoveryAgentPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canceled(); break;
        case 1: _t->deviceDiscovered((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo>>(_a[1]))); break;
        case 2: _t->deviceUpdated((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo::Fields>>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceDiscoveryAgent::Error>>(_a[1]))); break;
        case 4: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *PokitDiscoveryAgentPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PokitDiscoveryAgentPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPokitDiscoveryAgentPrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PokitDiscoveryAgentPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
