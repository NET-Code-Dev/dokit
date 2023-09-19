/****************************************************************************
** Meta object code from reading C++ file 'testdsoservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/lib/testdsoservice.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testdsoservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestDsoServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestDsoServiceENDCLASS = QtMocHelpers::stringData(
    "TestDsoService",
    "toString_Mode_data",
    "",
    "toString_Mode",
    "toString_Range_data",
    "toString_Range",
    "maxValue_data",
    "maxValue",
    "readCharacteristics",
    "readMetadataCharacteristic",
    "setSettings",
    "startDso",
    "fetchSamples",
    "metadata",
    "enableMetadataNotifications",
    "disableMetadataNotifications",
    "enableReadingNotifications",
    "disableReadingNotifications",
    "encodeSettings_data",
    "encodeSettings",
    "parseMetadata_data",
    "parseMetadata",
    "parseSamples_data",
    "parseSamples",
    "characteristicRead",
    "characteristicWritten",
    "characteristicChanged",
    "tr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestDsoServiceENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[15];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[20];
    char stringdata5[15];
    char stringdata6[14];
    char stringdata7[9];
    char stringdata8[20];
    char stringdata9[27];
    char stringdata10[12];
    char stringdata11[9];
    char stringdata12[13];
    char stringdata13[9];
    char stringdata14[28];
    char stringdata15[29];
    char stringdata16[27];
    char stringdata17[28];
    char stringdata18[20];
    char stringdata19[15];
    char stringdata20[19];
    char stringdata21[14];
    char stringdata22[18];
    char stringdata23[13];
    char stringdata24[19];
    char stringdata25[22];
    char stringdata26[22];
    char stringdata27[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestDsoServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestDsoServiceENDCLASS_t qt_meta_stringdata_CLASSTestDsoServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "TestDsoService"
        QT_MOC_LITERAL(15, 18),  // "toString_Mode_data"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 13),  // "toString_Mode"
        QT_MOC_LITERAL(49, 19),  // "toString_Range_data"
        QT_MOC_LITERAL(69, 14),  // "toString_Range"
        QT_MOC_LITERAL(84, 13),  // "maxValue_data"
        QT_MOC_LITERAL(98, 8),  // "maxValue"
        QT_MOC_LITERAL(107, 19),  // "readCharacteristics"
        QT_MOC_LITERAL(127, 26),  // "readMetadataCharacteristic"
        QT_MOC_LITERAL(154, 11),  // "setSettings"
        QT_MOC_LITERAL(166, 8),  // "startDso"
        QT_MOC_LITERAL(175, 12),  // "fetchSamples"
        QT_MOC_LITERAL(188, 8),  // "metadata"
        QT_MOC_LITERAL(197, 27),  // "enableMetadataNotifications"
        QT_MOC_LITERAL(225, 28),  // "disableMetadataNotifications"
        QT_MOC_LITERAL(254, 26),  // "enableReadingNotifications"
        QT_MOC_LITERAL(281, 27),  // "disableReadingNotifications"
        QT_MOC_LITERAL(309, 19),  // "encodeSettings_data"
        QT_MOC_LITERAL(329, 14),  // "encodeSettings"
        QT_MOC_LITERAL(344, 18),  // "parseMetadata_data"
        QT_MOC_LITERAL(363, 13),  // "parseMetadata"
        QT_MOC_LITERAL(377, 17),  // "parseSamples_data"
        QT_MOC_LITERAL(395, 12),  // "parseSamples"
        QT_MOC_LITERAL(408, 18),  // "characteristicRead"
        QT_MOC_LITERAL(427, 21),  // "characteristicWritten"
        QT_MOC_LITERAL(449, 21),  // "characteristicChanged"
        QT_MOC_LITERAL(471, 2)   // "tr"
    },
    "TestDsoService",
    "toString_Mode_data",
    "",
    "toString_Mode",
    "toString_Range_data",
    "toString_Range",
    "maxValue_data",
    "maxValue",
    "readCharacteristics",
    "readMetadataCharacteristic",
    "setSettings",
    "startDso",
    "fetchSamples",
    "metadata",
    "enableMetadataNotifications",
    "disableMetadataNotifications",
    "enableReadingNotifications",
    "disableReadingNotifications",
    "encodeSettings_data",
    "encodeSettings",
    "parseMetadata_data",
    "parseMetadata",
    "parseSamples_data",
    "parseSamples",
    "characteristicRead",
    "characteristicWritten",
    "characteristicChanged",
    "tr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestDsoServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    0,  172,    2, 0x08,    3 /* Private */,
       5,    0,  173,    2, 0x08,    4 /* Private */,
       6,    0,  174,    2, 0x08,    5 /* Private */,
       7,    0,  175,    2, 0x08,    6 /* Private */,
       8,    0,  176,    2, 0x08,    7 /* Private */,
       9,    0,  177,    2, 0x08,    8 /* Private */,
      10,    0,  178,    2, 0x08,    9 /* Private */,
      11,    0,  179,    2, 0x08,   10 /* Private */,
      12,    0,  180,    2, 0x08,   11 /* Private */,
      13,    0,  181,    2, 0x08,   12 /* Private */,
      14,    0,  182,    2, 0x08,   13 /* Private */,
      15,    0,  183,    2, 0x08,   14 /* Private */,
      16,    0,  184,    2, 0x08,   15 /* Private */,
      17,    0,  185,    2, 0x08,   16 /* Private */,
      18,    0,  186,    2, 0x08,   17 /* Private */,
      19,    0,  187,    2, 0x08,   18 /* Private */,
      20,    0,  188,    2, 0x08,   19 /* Private */,
      21,    0,  189,    2, 0x08,   20 /* Private */,
      22,    0,  190,    2, 0x08,   21 /* Private */,
      23,    0,  191,    2, 0x08,   22 /* Private */,
      24,    0,  192,    2, 0x08,   23 /* Private */,
      25,    0,  193,    2, 0x08,   24 /* Private */,
      26,    0,  194,    2, 0x08,   25 /* Private */,
      27,    0,  195,    2, 0x08,   26 /* Private */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject TestDsoService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestDsoServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestDsoServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestDsoServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestDsoService, std::true_type>,
        // method 'toString_Mode_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_Mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_Range_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_Range'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxValue_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readCharacteristics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readMetadataCharacteristic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startDso'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchSamples'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'metadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableMetadataNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableMetadataNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableReadingNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableReadingNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'encodeSettings_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'encodeSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseMetadata_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseSamples_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parseSamples'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'characteristicRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'characteristicWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'characteristicChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestDsoService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestDsoService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toString_Mode_data(); break;
        case 1: _t->toString_Mode(); break;
        case 2: _t->toString_Range_data(); break;
        case 3: _t->toString_Range(); break;
        case 4: _t->maxValue_data(); break;
        case 5: _t->maxValue(); break;
        case 6: _t->readCharacteristics(); break;
        case 7: _t->readMetadataCharacteristic(); break;
        case 8: _t->setSettings(); break;
        case 9: _t->startDso(); break;
        case 10: _t->fetchSamples(); break;
        case 11: _t->metadata(); break;
        case 12: _t->enableMetadataNotifications(); break;
        case 13: _t->disableMetadataNotifications(); break;
        case 14: _t->enableReadingNotifications(); break;
        case 15: _t->disableReadingNotifications(); break;
        case 16: _t->encodeSettings_data(); break;
        case 17: _t->encodeSettings(); break;
        case 18: _t->parseMetadata_data(); break;
        case 19: _t->parseMetadata(); break;
        case 20: _t->parseSamples_data(); break;
        case 21: _t->parseSamples(); break;
        case 22: _t->characteristicRead(); break;
        case 23: _t->characteristicWritten(); break;
        case 24: _t->characteristicChanged(); break;
        case 25: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestDsoService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestDsoService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestDsoServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestDsoService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
