/****************************************************************************
** Meta object code from reading C++ file 'dataloggerservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/qtpokit/dataloggerservice.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataloggerservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS = QtMocHelpers::stringData(
    "DataLoggerService",
    "settingsWritten",
    "",
    "metadataRead",
    "DataLoggerService::Metadata",
    "meta",
    "samplesRead",
    "DataLoggerService::Samples",
    "samples"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[18];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[28];
    char stringdata5[5];
    char stringdata6[12];
    char stringdata7[27];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS_t qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "DataLoggerService"
        QT_MOC_LITERAL(18, 15),  // "settingsWritten"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 12),  // "metadataRead"
        QT_MOC_LITERAL(48, 27),  // "DataLoggerService::Metadata"
        QT_MOC_LITERAL(76, 4),  // "meta"
        QT_MOC_LITERAL(81, 11),  // "samplesRead"
        QT_MOC_LITERAL(93, 26),  // "DataLoggerService::Samples"
        QT_MOC_LITERAL(120, 7)   // "samples"
    },
    "DataLoggerService",
    "settingsWritten",
    "",
    "metadataRead",
    "DataLoggerService::Metadata",
    "meta",
    "samplesRead",
    "DataLoggerService::Samples",
    "samples"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDataLoggerServiceENDCLASS[] = {

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
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    1,   33,    2, 0x06,    2 /* Public */,
       6,    1,   36,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataLoggerService::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPokitService::staticMetaObject>(),
    qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDataLoggerServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataLoggerService, std::true_type>,
        // method 'settingsWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'metadataRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DataLoggerService::Metadata &, std::false_type>,
        // method 'samplesRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DataLoggerService::Samples &, std::false_type>
    >,
    nullptr
} };

void DataLoggerService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataLoggerService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsWritten(); break;
        case 1: _t->metadataRead((*reinterpret_cast< std::add_pointer_t<DataLoggerService::Metadata>>(_a[1]))); break;
        case 2: _t->samplesRead((*reinterpret_cast< std::add_pointer_t<DataLoggerService::Samples>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataLoggerService::*)();
            if (_t _q_method = &DataLoggerService::settingsWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataLoggerService::*)(const DataLoggerService::Metadata & );
            if (_t _q_method = &DataLoggerService::metadataRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataLoggerService::*)(const DataLoggerService::Samples & );
            if (_t _q_method = &DataLoggerService::samplesRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *DataLoggerService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataLoggerService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDataLoggerServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPokitService::qt_metacast(_clname);
}

int DataLoggerService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DataLoggerService::settingsWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataLoggerService::metadataRead(const DataLoggerService::Metadata & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataLoggerService::samplesRead(const DataLoggerService::Samples & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
