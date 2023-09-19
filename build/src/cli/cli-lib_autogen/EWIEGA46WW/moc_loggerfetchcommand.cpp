/****************************************************************************
** Meta object code from reading C++ file 'loggerfetchcommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/cli/loggerfetchcommand.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loggerfetchcommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS = QtMocHelpers::stringData(
    "LoggerFetchCommand",
    "serviceDetailsDiscovered",
    "",
    "metadataRead",
    "DataLoggerService::Metadata",
    "data",
    "outputSamples",
    "DataLoggerService::Samples",
    "samples"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[19];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[28];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[27];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS_t qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "LoggerFetchCommand"
        QT_MOC_LITERAL(19, 24),  // "serviceDetailsDiscovered"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 12),  // "metadataRead"
        QT_MOC_LITERAL(58, 27),  // "DataLoggerService::Metadata"
        QT_MOC_LITERAL(86, 4),  // "data"
        QT_MOC_LITERAL(91, 13),  // "outputSamples"
        QT_MOC_LITERAL(105, 26),  // "DataLoggerService::Samples"
        QT_MOC_LITERAL(132, 7)   // "samples"
    },
    "LoggerFetchCommand",
    "serviceDetailsDiscovered",
    "",
    "metadataRead",
    "DataLoggerService::Metadata",
    "data",
    "outputSamples",
    "DataLoggerService::Samples",
    "samples"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoggerFetchCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x09,    1 /* Protected */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       6,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoggerFetchCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceCommand::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoggerFetchCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoggerFetchCommand, std::true_type>,
        // method 'serviceDetailsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'metadataRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DataLoggerService::Metadata &, std::false_type>,
        // method 'outputSamples'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DataLoggerService::Samples &, std::false_type>
    >,
    nullptr
} };

void LoggerFetchCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoggerFetchCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->serviceDetailsDiscovered(); break;
        case 1: _t->metadataRead((*reinterpret_cast< std::add_pointer_t<DataLoggerService::Metadata>>(_a[1]))); break;
        case 2: _t->outputSamples((*reinterpret_cast< std::add_pointer_t<DataLoggerService::Samples>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LoggerFetchCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoggerFetchCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoggerFetchCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DeviceCommand::qt_metacast(_clname);
}

int LoggerFetchCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceCommand::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
