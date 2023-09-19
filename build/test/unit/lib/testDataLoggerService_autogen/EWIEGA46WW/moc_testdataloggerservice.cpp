/****************************************************************************
** Meta object code from reading C++ file 'testdataloggerservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/lib/testdataloggerservice.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testdataloggerservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS = QtMocHelpers::stringData(
    "TestDataLoggerService",
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
    "startLogger",
    "stopLogger",
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
struct qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[22];
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
    char stringdata11[12];
    char stringdata12[11];
    char stringdata13[13];
    char stringdata14[9];
    char stringdata15[28];
    char stringdata16[29];
    char stringdata17[27];
    char stringdata18[28];
    char stringdata19[20];
    char stringdata20[15];
    char stringdata21[19];
    char stringdata22[14];
    char stringdata23[18];
    char stringdata24[13];
    char stringdata25[19];
    char stringdata26[22];
    char stringdata27[22];
    char stringdata28[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS_t qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "TestDataLoggerService"
        QT_MOC_LITERAL(22, 18),  // "toString_Mode_data"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 13),  // "toString_Mode"
        QT_MOC_LITERAL(56, 19),  // "toString_Range_data"
        QT_MOC_LITERAL(76, 14),  // "toString_Range"
        QT_MOC_LITERAL(91, 13),  // "maxValue_data"
        QT_MOC_LITERAL(105, 8),  // "maxValue"
        QT_MOC_LITERAL(114, 19),  // "readCharacteristics"
        QT_MOC_LITERAL(134, 26),  // "readMetadataCharacteristic"
        QT_MOC_LITERAL(161, 11),  // "setSettings"
        QT_MOC_LITERAL(173, 11),  // "startLogger"
        QT_MOC_LITERAL(185, 10),  // "stopLogger"
        QT_MOC_LITERAL(196, 12),  // "fetchSamples"
        QT_MOC_LITERAL(209, 8),  // "metadata"
        QT_MOC_LITERAL(218, 27),  // "enableMetadataNotifications"
        QT_MOC_LITERAL(246, 28),  // "disableMetadataNotifications"
        QT_MOC_LITERAL(275, 26),  // "enableReadingNotifications"
        QT_MOC_LITERAL(302, 27),  // "disableReadingNotifications"
        QT_MOC_LITERAL(330, 19),  // "encodeSettings_data"
        QT_MOC_LITERAL(350, 14),  // "encodeSettings"
        QT_MOC_LITERAL(365, 18),  // "parseMetadata_data"
        QT_MOC_LITERAL(384, 13),  // "parseMetadata"
        QT_MOC_LITERAL(398, 17),  // "parseSamples_data"
        QT_MOC_LITERAL(416, 12),  // "parseSamples"
        QT_MOC_LITERAL(429, 18),  // "characteristicRead"
        QT_MOC_LITERAL(448, 21),  // "characteristicWritten"
        QT_MOC_LITERAL(470, 21),  // "characteristicChanged"
        QT_MOC_LITERAL(492, 2)   // "tr"
    },
    "TestDataLoggerService",
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
    "startLogger",
    "stopLogger",
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

Q_CONSTINIT static const uint qt_meta_data_CLASSTestDataLoggerServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  176,    2, 0x08,    1 /* Private */,
       3,    0,  177,    2, 0x08,    2 /* Private */,
       4,    0,  178,    2, 0x08,    3 /* Private */,
       5,    0,  179,    2, 0x08,    4 /* Private */,
       6,    0,  180,    2, 0x08,    5 /* Private */,
       7,    0,  181,    2, 0x08,    6 /* Private */,
       8,    0,  182,    2, 0x08,    7 /* Private */,
       9,    0,  183,    2, 0x08,    8 /* Private */,
      10,    0,  184,    2, 0x08,    9 /* Private */,
      11,    0,  185,    2, 0x08,   10 /* Private */,
      12,    0,  186,    2, 0x08,   11 /* Private */,
      13,    0,  187,    2, 0x08,   12 /* Private */,
      14,    0,  188,    2, 0x08,   13 /* Private */,
      15,    0,  189,    2, 0x08,   14 /* Private */,
      16,    0,  190,    2, 0x08,   15 /* Private */,
      17,    0,  191,    2, 0x08,   16 /* Private */,
      18,    0,  192,    2, 0x08,   17 /* Private */,
      19,    0,  193,    2, 0x08,   18 /* Private */,
      20,    0,  194,    2, 0x08,   19 /* Private */,
      21,    0,  195,    2, 0x08,   20 /* Private */,
      22,    0,  196,    2, 0x08,   21 /* Private */,
      23,    0,  197,    2, 0x08,   22 /* Private */,
      24,    0,  198,    2, 0x08,   23 /* Private */,
      25,    0,  199,    2, 0x08,   24 /* Private */,
      26,    0,  200,    2, 0x08,   25 /* Private */,
      27,    0,  201,    2, 0x08,   26 /* Private */,
      28,    0,  202,    2, 0x08,   27 /* Private */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject TestDataLoggerService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestDataLoggerServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestDataLoggerService, std::true_type>,
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
        // method 'startLogger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopLogger'
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

void TestDataLoggerService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestDataLoggerService *>(_o);
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
        case 9: _t->startLogger(); break;
        case 10: _t->stopLogger(); break;
        case 11: _t->fetchSamples(); break;
        case 12: _t->metadata(); break;
        case 13: _t->enableMetadataNotifications(); break;
        case 14: _t->disableMetadataNotifications(); break;
        case 15: _t->enableReadingNotifications(); break;
        case 16: _t->disableReadingNotifications(); break;
        case 17: _t->encodeSettings_data(); break;
        case 18: _t->encodeSettings(); break;
        case 19: _t->parseMetadata_data(); break;
        case 20: _t->parseMetadata(); break;
        case 21: _t->parseSamples_data(); break;
        case 22: _t->parseSamples(); break;
        case 23: _t->characteristicRead(); break;
        case 24: _t->characteristicWritten(); break;
        case 25: _t->characteristicChanged(); break;
        case 26: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestDataLoggerService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestDataLoggerService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestDataLoggerServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestDataLoggerService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
