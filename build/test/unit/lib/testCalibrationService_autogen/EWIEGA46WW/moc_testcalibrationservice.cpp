/****************************************************************************
** Meta object code from reading C++ file 'testcalibrationservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/lib/testcalibrationservice.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testcalibrationservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS = QtMocHelpers::stringData(
    "TestCalibrationService",
    "readCharacteristics",
    "",
    "calibrateTemperature",
    "encodeTemperature_data",
    "encodeTemperature",
    "characteristicWritten",
    "tr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[23];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[23];
    char stringdata5[18];
    char stringdata6[22];
    char stringdata7[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS_t qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "TestCalibrationService"
        QT_MOC_LITERAL(23, 19),  // "readCharacteristics"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 20),  // "calibrateTemperature"
        QT_MOC_LITERAL(65, 22),  // "encodeTemperature_data"
        QT_MOC_LITERAL(88, 17),  // "encodeTemperature"
        QT_MOC_LITERAL(106, 21),  // "characteristicWritten"
        QT_MOC_LITERAL(128, 2)   // "tr"
    },
    "TestCalibrationService",
    "readCharacteristics",
    "",
    "calibrateTemperature",
    "encodeTemperature_data",
    "encodeTemperature",
    "characteristicWritten",
    "tr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestCalibrationServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestCalibrationService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestCalibrationServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestCalibrationService, std::true_type>,
        // method 'readCharacteristics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calibrateTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'encodeTemperature_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'encodeTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'characteristicWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestCalibrationService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestCalibrationService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readCharacteristics(); break;
        case 1: _t->calibrateTemperature(); break;
        case 2: _t->encodeTemperature_data(); break;
        case 3: _t->encodeTemperature(); break;
        case 4: _t->characteristicWritten(); break;
        case 5: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestCalibrationService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestCalibrationService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestCalibrationServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestCalibrationService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
