/****************************************************************************
** Meta object code from reading C++ file 'pokitdevice_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/lib/pokitdevice_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pokitdevice_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS = QtMocHelpers::stringData(
    "PokitDevicePrivate",
    "connected",
    "",
    "connectionUpdated",
    "QLowEnergyConnectionParameters",
    "newParameters",
    "disconnected",
    "discoveryFinished",
    "errorOccurred",
    "QLowEnergyController::Error",
    "newError",
    "serviceDiscovered",
    "QBluetoothUuid",
    "newService",
    "stateChanged",
    "QLowEnergyController::ControllerState",
    "state"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[19];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[31];
    char stringdata5[14];
    char stringdata6[13];
    char stringdata7[18];
    char stringdata8[14];
    char stringdata9[28];
    char stringdata10[9];
    char stringdata11[18];
    char stringdata12[15];
    char stringdata13[11];
    char stringdata14[13];
    char stringdata15[38];
    char stringdata16[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS_t qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "PokitDevicePrivate"
        QT_MOC_LITERAL(19, 9),  // "connected"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 17),  // "connectionUpdated"
        QT_MOC_LITERAL(48, 30),  // "QLowEnergyConnectionParameters"
        QT_MOC_LITERAL(79, 13),  // "newParameters"
        QT_MOC_LITERAL(93, 12),  // "disconnected"
        QT_MOC_LITERAL(106, 17),  // "discoveryFinished"
        QT_MOC_LITERAL(124, 13),  // "errorOccurred"
        QT_MOC_LITERAL(138, 27),  // "QLowEnergyController::Error"
        QT_MOC_LITERAL(166, 8),  // "newError"
        QT_MOC_LITERAL(175, 17),  // "serviceDiscovered"
        QT_MOC_LITERAL(193, 14),  // "QBluetoothUuid"
        QT_MOC_LITERAL(208, 10),  // "newService"
        QT_MOC_LITERAL(219, 12),  // "stateChanged"
        QT_MOC_LITERAL(232, 37),  // "QLowEnergyController::Control..."
        QT_MOC_LITERAL(270, 5)   // "state"
    },
    "PokitDevicePrivate",
    "connected",
    "",
    "connectionUpdated",
    "QLowEnergyConnectionParameters",
    "newParameters",
    "disconnected",
    "discoveryFinished",
    "errorOccurred",
    "QLowEnergyController::Error",
    "newError",
    "serviceDiscovered",
    "QBluetoothUuid",
    "newService",
    "stateChanged",
    "QLowEnergyController::ControllerState",
    "state"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPokitDevicePrivateENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       3,    1,   57,    2, 0x10a,    2 /* Public | MethodIsConst  */,
       6,    0,   60,    2, 0x10a,    4 /* Public | MethodIsConst  */,
       7,    0,   61,    2, 0x10a,    5 /* Public | MethodIsConst  */,
       8,    1,   62,    2, 0x10a,    6 /* Public | MethodIsConst  */,
      11,    1,   65,    2, 0x10a,    8 /* Public | MethodIsConst  */,
      14,    1,   68,    2, 0x10a,   10 /* Public | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject PokitDevicePrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPokitDevicePrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PokitDevicePrivate, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectionUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QLowEnergyConnectionParameters &, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'discoveryFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLowEnergyController::Error, std::false_type>,
        // method 'serviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothUuid &, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLowEnergyController::ControllerState, std::false_type>
    >,
    nullptr
} };

void PokitDevicePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PokitDevicePrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->connectionUpdated((*reinterpret_cast< std::add_pointer_t<QLowEnergyConnectionParameters>>(_a[1]))); break;
        case 2: _t->disconnected(); break;
        case 3: _t->discoveryFinished(); break;
        case 4: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QLowEnergyController::Error>>(_a[1]))); break;
        case 5: _t->serviceDiscovered((*reinterpret_cast< std::add_pointer_t<QBluetoothUuid>>(_a[1]))); break;
        case 6: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QLowEnergyController::ControllerState>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLowEnergyConnectionParameters >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLowEnergyController::Error >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothUuid >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLowEnergyController::ControllerState >(); break;
            }
            break;
        }
    }
}

const QMetaObject *PokitDevicePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PokitDevicePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPokitDevicePrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PokitDevicePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
