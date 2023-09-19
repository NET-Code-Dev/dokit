/****************************************************************************
** Meta object code from reading C++ file 'teststatusservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/lib/teststatusservice.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teststatusservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestStatusServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestStatusServiceENDCLASS = QtMocHelpers::stringData(
    "TestStatusService",
    "toString_DeviceStatus_data",
    "",
    "toString_DeviceStatus",
    "toString_BatteryStatus_data",
    "toString_BatteryStatus",
    "toString_SwitchPosition_data",
    "toString_SwitchPosition",
    "toString_ChargingStatus_data",
    "toString_ChargingStatus",
    "toString_TorchStatus_data",
    "toString_TorchStatus",
    "toString_ButtonStatus_data",
    "toString_ButtonStatus",
    "readCharacteristics",
    "readDeviceCharacteristics",
    "readStatusCharacteristic",
    "readNameCharacteristic",
    "readTorchCharacteristic",
    "readButtonPressCharacteristic",
    "deviceCharacteristics",
    "status",
    "enableStatusNotifications",
    "disableStatusNotifications",
    "deviceName",
    "setDeviceName",
    "flashLed",
    "torchStatus",
    "setTorchStatus",
    "enableTorchStatusNotifications",
    "disableTorchStatusNotifications",
    "buttonPress",
    "enableButtonPressedNotifications",
    "disableButtonPressedNotifications",
    "parseDeviceCharacteristics_data",
    "parseDeviceCharacteristics",
    "parseStatus_data",
    "parseStatus",
    "parseTorchStatus_data",
    "parseTorchStatus",
    "parseButtonPress_data",
    "parseButtonPress",
    "serviceDiscovered",
    "characteristicRead",
    "characteristicWritten",
    "tr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestStatusServiceENDCLASS_t {
    uint offsetsAndSizes[92];
    char stringdata0[18];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[28];
    char stringdata5[23];
    char stringdata6[29];
    char stringdata7[24];
    char stringdata8[29];
    char stringdata9[24];
    char stringdata10[26];
    char stringdata11[21];
    char stringdata12[27];
    char stringdata13[22];
    char stringdata14[20];
    char stringdata15[26];
    char stringdata16[25];
    char stringdata17[23];
    char stringdata18[24];
    char stringdata19[30];
    char stringdata20[22];
    char stringdata21[7];
    char stringdata22[26];
    char stringdata23[27];
    char stringdata24[11];
    char stringdata25[14];
    char stringdata26[9];
    char stringdata27[12];
    char stringdata28[15];
    char stringdata29[31];
    char stringdata30[32];
    char stringdata31[12];
    char stringdata32[33];
    char stringdata33[34];
    char stringdata34[32];
    char stringdata35[27];
    char stringdata36[17];
    char stringdata37[12];
    char stringdata38[22];
    char stringdata39[17];
    char stringdata40[22];
    char stringdata41[17];
    char stringdata42[18];
    char stringdata43[19];
    char stringdata44[22];
    char stringdata45[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestStatusServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestStatusServiceENDCLASS_t qt_meta_stringdata_CLASSTestStatusServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "TestStatusService"
        QT_MOC_LITERAL(18, 26),  // "toString_DeviceStatus_data"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 21),  // "toString_DeviceStatus"
        QT_MOC_LITERAL(68, 27),  // "toString_BatteryStatus_data"
        QT_MOC_LITERAL(96, 22),  // "toString_BatteryStatus"
        QT_MOC_LITERAL(119, 28),  // "toString_SwitchPosition_data"
        QT_MOC_LITERAL(148, 23),  // "toString_SwitchPosition"
        QT_MOC_LITERAL(172, 28),  // "toString_ChargingStatus_data"
        QT_MOC_LITERAL(201, 23),  // "toString_ChargingStatus"
        QT_MOC_LITERAL(225, 25),  // "toString_TorchStatus_data"
        QT_MOC_LITERAL(251, 20),  // "toString_TorchStatus"
        QT_MOC_LITERAL(272, 26),  // "toString_ButtonStatus_data"
        QT_MOC_LITERAL(299, 21),  // "toString_ButtonStatus"
        QT_MOC_LITERAL(321, 19),  // "readCharacteristics"
        QT_MOC_LITERAL(341, 25),  // "readDeviceCharacteristics"
        QT_MOC_LITERAL(367, 24),  // "readStatusCharacteristic"
        QT_MOC_LITERAL(392, 22),  // "readNameCharacteristic"
        QT_MOC_LITERAL(415, 23),  // "readTorchCharacteristic"
        QT_MOC_LITERAL(439, 29),  // "readButtonPressCharacteristic"
        QT_MOC_LITERAL(469, 21),  // "deviceCharacteristics"
        QT_MOC_LITERAL(491, 6),  // "status"
        QT_MOC_LITERAL(498, 25),  // "enableStatusNotifications"
        QT_MOC_LITERAL(524, 26),  // "disableStatusNotifications"
        QT_MOC_LITERAL(551, 10),  // "deviceName"
        QT_MOC_LITERAL(562, 13),  // "setDeviceName"
        QT_MOC_LITERAL(576, 8),  // "flashLed"
        QT_MOC_LITERAL(585, 11),  // "torchStatus"
        QT_MOC_LITERAL(597, 14),  // "setTorchStatus"
        QT_MOC_LITERAL(612, 30),  // "enableTorchStatusNotifications"
        QT_MOC_LITERAL(643, 31),  // "disableTorchStatusNotifications"
        QT_MOC_LITERAL(675, 11),  // "buttonPress"
        QT_MOC_LITERAL(687, 32),  // "enableButtonPressedNotifications"
        QT_MOC_LITERAL(720, 33),  // "disableButtonPressedNotificat..."
        QT_MOC_LITERAL(754, 31),  // "parseDeviceCharacteristics_data"
        QT_MOC_LITERAL(786, 26),  // "parseDeviceCharacteristics"
        QT_MOC_LITERAL(813, 16),  // "parseStatus_data"
        QT_MOC_LITERAL(830, 11),  // "parseStatus"
        QT_MOC_LITERAL(842, 21),  // "parseTorchStatus_data"
        QT_MOC_LITERAL(864, 16),  // "parseTorchStatus"
        QT_MOC_LITERAL(881, 21),  // "parseButtonPress_data"
        QT_MOC_LITERAL(903, 16),  // "parseButtonPress"
        QT_MOC_LITERAL(920, 17),  // "serviceDiscovered"
        QT_MOC_LITERAL(938, 18),  // "characteristicRead"
        QT_MOC_LITERAL(957, 21),  // "characteristicWritten"
        QT_MOC_LITERAL(979, 2)   // "tr"
    },
    "TestStatusService",
    "toString_DeviceStatus_data",
    "",
    "toString_DeviceStatus",
    "toString_BatteryStatus_data",
    "toString_BatteryStatus",
    "toString_SwitchPosition_data",
    "toString_SwitchPosition",
    "toString_ChargingStatus_data",
    "toString_ChargingStatus",
    "toString_TorchStatus_data",
    "toString_TorchStatus",
    "toString_ButtonStatus_data",
    "toString_ButtonStatus",
    "readCharacteristics",
    "readDeviceCharacteristics",
    "readStatusCharacteristic",
    "readNameCharacteristic",
    "readTorchCharacteristic",
    "readButtonPressCharacteristic",
    "deviceCharacteristics",
    "status",
    "enableStatusNotifications",
    "disableStatusNotifications",
    "deviceName",
    "setDeviceName",
    "flashLed",
    "torchStatus",
    "setTorchStatus",
    "enableTorchStatusNotifications",
    "disableTorchStatusNotifications",
    "buttonPress",
    "enableButtonPressedNotifications",
    "disableButtonPressedNotifications",
    "parseDeviceCharacteristics_data",
    "parseDeviceCharacteristics",
    "parseStatus_data",
    "parseStatus",
    "parseTorchStatus_data",
    "parseTorchStatus",
    "parseButtonPress_data",
    "parseButtonPress",
    "serviceDiscovered",
    "characteristicRead",
    "characteristicWritten",
    "tr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestStatusServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  278,    2, 0x08,    1 /* Private */,
       3,    0,  279,    2, 0x08,    2 /* Private */,
       4,    0,  280,    2, 0x08,    3 /* Private */,
       5,    0,  281,    2, 0x08,    4 /* Private */,
       6,    0,  282,    2, 0x08,    5 /* Private */,
       7,    0,  283,    2, 0x08,    6 /* Private */,
       8,    0,  284,    2, 0x08,    7 /* Private */,
       9,    0,  285,    2, 0x08,    8 /* Private */,
      10,    0,  286,    2, 0x08,    9 /* Private */,
      11,    0,  287,    2, 0x08,   10 /* Private */,
      12,    0,  288,    2, 0x08,   11 /* Private */,
      13,    0,  289,    2, 0x08,   12 /* Private */,
      14,    0,  290,    2, 0x08,   13 /* Private */,
      15,    0,  291,    2, 0x08,   14 /* Private */,
      16,    0,  292,    2, 0x08,   15 /* Private */,
      17,    0,  293,    2, 0x08,   16 /* Private */,
      18,    0,  294,    2, 0x08,   17 /* Private */,
      19,    0,  295,    2, 0x08,   18 /* Private */,
      20,    0,  296,    2, 0x08,   19 /* Private */,
      21,    0,  297,    2, 0x08,   20 /* Private */,
      22,    0,  298,    2, 0x08,   21 /* Private */,
      23,    0,  299,    2, 0x08,   22 /* Private */,
      24,    0,  300,    2, 0x08,   23 /* Private */,
      25,    0,  301,    2, 0x08,   24 /* Private */,
      26,    0,  302,    2, 0x08,   25 /* Private */,
      27,    0,  303,    2, 0x08,   26 /* Private */,
      28,    0,  304,    2, 0x08,   27 /* Private */,
      29,    0,  305,    2, 0x08,   28 /* Private */,
      30,    0,  306,    2, 0x08,   29 /* Private */,
      31,    0,  307,    2, 0x08,   30 /* Private */,
      32,    0,  308,    2, 0x08,   31 /* Private */,
      33,    0,  309,    2, 0x08,   32 /* Private */,
      34,    0,  310,    2, 0x08,   33 /* Private */,
      35,    0,  311,    2, 0x08,   34 /* Private */,
      36,    0,  312,    2, 0x08,   35 /* Private */,
      37,    0,  313,    2, 0x08,   36 /* Private */,
      38,    0,  314,    2, 0x08,   37 /* Private */,
      39,    0,  315,    2, 0x08,   38 /* Private */,
      40,    0,  316,    2, 0x08,   39 /* Private */,
      41,    0,  317,    2, 0x08,   40 /* Private */,
      42,    0,  318,    2, 0x08,   41 /* Private */,
      43,    0,  319,    2, 0x08,   42 /* Private */,
      44,    0,  320,    2, 0x08,   43 /* Private */,
      45,    0,  321,    2, 0x08,   44 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestStatusService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestStatusServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestStatusServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestStatusServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestStatusService, std::true_type>,
        // method 'toString_DeviceStatus_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_DeviceStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_BatteryStatus_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_BatteryStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_SwitchPosition_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_SwitchPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_ChargingStatus_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_ChargingStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_TorchStatus_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_TorchStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_ButtonStatus_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_ButtonStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readCharacteristics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readDeviceCharacteristics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readStatusCharacteristic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readNameCharacteristic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readTorchCharacteristic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readButtonPressCharacteristic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceCharacteristics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableStatusNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableStatusNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDeviceName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flashLed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'torchStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTorchStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableTorchStatusNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableTorchStatusNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonPress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableButtonPressedNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableButtonPressedNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseDeviceCharacteristics_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseDeviceCharacteristics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseStatus_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseTorchStatus_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseTorchStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseButtonPress_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseButtonPress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'characteristicRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'characteristicWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestStatusService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestStatusService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toString_DeviceStatus_data(); break;
        case 1: _t->toString_DeviceStatus(); break;
        case 2: _t->toString_BatteryStatus_data(); break;
        case 3: _t->toString_BatteryStatus(); break;
        case 4: _t->toString_SwitchPosition_data(); break;
        case 5: _t->toString_SwitchPosition(); break;
        case 6: _t->toString_ChargingStatus_data(); break;
        case 7: _t->toString_ChargingStatus(); break;
        case 8: _t->toString_TorchStatus_data(); break;
        case 9: _t->toString_TorchStatus(); break;
        case 10: _t->toString_ButtonStatus_data(); break;
        case 11: _t->toString_ButtonStatus(); break;
        case 12: _t->readCharacteristics(); break;
        case 13: _t->readDeviceCharacteristics(); break;
        case 14: _t->readStatusCharacteristic(); break;
        case 15: _t->readNameCharacteristic(); break;
        case 16: _t->readTorchCharacteristic(); break;
        case 17: _t->readButtonPressCharacteristic(); break;
        case 18: _t->deviceCharacteristics(); break;
        case 19: _t->status(); break;
        case 20: _t->enableStatusNotifications(); break;
        case 21: _t->disableStatusNotifications(); break;
        case 22: _t->deviceName(); break;
        case 23: _t->setDeviceName(); break;
        case 24: _t->flashLed(); break;
        case 25: _t->torchStatus(); break;
        case 26: _t->setTorchStatus(); break;
        case 27: _t->enableTorchStatusNotifications(); break;
        case 28: _t->disableTorchStatusNotifications(); break;
        case 29: _t->buttonPress(); break;
        case 30: _t->enableButtonPressedNotifications(); break;
        case 31: _t->disableButtonPressedNotifications(); break;
        case 32: _t->parseDeviceCharacteristics_data(); break;
        case 33: _t->parseDeviceCharacteristics(); break;
        case 34: _t->parseStatus_data(); break;
        case 35: _t->parseStatus(); break;
        case 36: _t->parseTorchStatus_data(); break;
        case 37: _t->parseTorchStatus(); break;
        case 38: _t->parseButtonPress_data(); break;
        case 39: _t->parseButtonPress(); break;
        case 40: _t->serviceDiscovered(); break;
        case 41: _t->characteristicRead(); break;
        case 42: _t->characteristicWritten(); break;
        case 43: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestStatusService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestStatusService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestStatusServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestStatusService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 44;
    }
    return _id;
}
QT_WARNING_POP
