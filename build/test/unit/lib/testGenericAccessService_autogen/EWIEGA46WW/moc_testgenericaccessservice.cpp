/****************************************************************************
** Meta object code from reading C++ file 'testgenericaccessservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/lib/testgenericaccessservice.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testgenericaccessservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS = QtMocHelpers::stringData(
    "TestGenericAccessService",
    "readCharacteristics",
    "",
    "readAppearanceCharacteristic",
    "readDeviceNameCharacteristic",
    "appearance",
    "deviceName",
    "setDeviceName",
    "parseAppearance_data",
    "parseAppearance",
    "characteristicRead",
    "characteristicWritten",
    "tr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[25];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[29];
    char stringdata5[11];
    char stringdata6[11];
    char stringdata7[14];
    char stringdata8[21];
    char stringdata9[16];
    char stringdata10[19];
    char stringdata11[22];
    char stringdata12[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS_t qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "TestGenericAccessService"
        QT_MOC_LITERAL(25, 19),  // "readCharacteristics"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 28),  // "readAppearanceCharacteristic"
        QT_MOC_LITERAL(75, 28),  // "readDeviceNameCharacteristic"
        QT_MOC_LITERAL(104, 10),  // "appearance"
        QT_MOC_LITERAL(115, 10),  // "deviceName"
        QT_MOC_LITERAL(126, 13),  // "setDeviceName"
        QT_MOC_LITERAL(140, 20),  // "parseAppearance_data"
        QT_MOC_LITERAL(161, 15),  // "parseAppearance"
        QT_MOC_LITERAL(177, 18),  // "characteristicRead"
        QT_MOC_LITERAL(196, 21),  // "characteristicWritten"
        QT_MOC_LITERAL(218, 2)   // "tr"
    },
    "TestGenericAccessService",
    "readCharacteristics",
    "",
    "readAppearanceCharacteristic",
    "readDeviceNameCharacteristic",
    "appearance",
    "deviceName",
    "setDeviceName",
    "parseAppearance_data",
    "parseAppearance",
    "characteristicRead",
    "characteristicWritten",
    "tr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestGenericAccessServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject TestGenericAccessService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestGenericAccessServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestGenericAccessService, std::true_type>,
        // method 'readCharacteristics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readAppearanceCharacteristic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readDeviceNameCharacteristic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'appearance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDeviceName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseAppearance_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseAppearance'
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

void TestGenericAccessService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestGenericAccessService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readCharacteristics(); break;
        case 1: _t->readAppearanceCharacteristic(); break;
        case 2: _t->readDeviceNameCharacteristic(); break;
        case 3: _t->appearance(); break;
        case 4: _t->deviceName(); break;
        case 5: _t->setDeviceName(); break;
        case 6: _t->parseAppearance_data(); break;
        case 7: _t->parseAppearance(); break;
        case 8: _t->characteristicRead(); break;
        case 9: _t->characteristicWritten(); break;
        case 10: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestGenericAccessService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestGenericAccessService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestGenericAccessServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestGenericAccessService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
