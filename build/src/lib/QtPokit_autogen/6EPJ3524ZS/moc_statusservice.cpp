/****************************************************************************
** Meta object code from reading C++ file 'statusservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/qtpokit/statusservice.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStatusServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSStatusServiceENDCLASS = QtMocHelpers::stringData(
    "StatusService",
    "deviceCharacteristicsRead",
    "",
    "StatusService::DeviceCharacteristics",
    "characteristics",
    "deviceNameRead",
    "deviceName",
    "deviceNameWritten",
    "deviceStatusRead",
    "StatusService::Status",
    "status",
    "deviceLedFlashed",
    "torchStatusRead",
    "TorchStatus",
    "torchStatusWritten",
    "buttonPressRead",
    "unknown",
    "ButtonStatus"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSStatusServiceENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[14];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[37];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[11];
    char stringdata7[18];
    char stringdata8[17];
    char stringdata9[22];
    char stringdata10[7];
    char stringdata11[17];
    char stringdata12[16];
    char stringdata13[12];
    char stringdata14[19];
    char stringdata15[16];
    char stringdata16[8];
    char stringdata17[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSStatusServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSStatusServiceENDCLASS_t qt_meta_stringdata_CLASSStatusServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "StatusService"
        QT_MOC_LITERAL(14, 25),  // "deviceCharacteristicsRead"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 36),  // "StatusService::DeviceCharacte..."
        QT_MOC_LITERAL(78, 15),  // "characteristics"
        QT_MOC_LITERAL(94, 14),  // "deviceNameRead"
        QT_MOC_LITERAL(109, 10),  // "deviceName"
        QT_MOC_LITERAL(120, 17),  // "deviceNameWritten"
        QT_MOC_LITERAL(138, 16),  // "deviceStatusRead"
        QT_MOC_LITERAL(155, 21),  // "StatusService::Status"
        QT_MOC_LITERAL(177, 6),  // "status"
        QT_MOC_LITERAL(184, 16),  // "deviceLedFlashed"
        QT_MOC_LITERAL(201, 15),  // "torchStatusRead"
        QT_MOC_LITERAL(217, 11),  // "TorchStatus"
        QT_MOC_LITERAL(229, 18),  // "torchStatusWritten"
        QT_MOC_LITERAL(248, 15),  // "buttonPressRead"
        QT_MOC_LITERAL(264, 7),  // "unknown"
        QT_MOC_LITERAL(272, 12)   // "ButtonStatus"
    },
    "StatusService",
    "deviceCharacteristicsRead",
    "",
    "StatusService::DeviceCharacteristics",
    "characteristics",
    "deviceNameRead",
    "deviceName",
    "deviceNameWritten",
    "deviceStatusRead",
    "StatusService::Status",
    "status",
    "deviceLedFlashed",
    "torchStatusRead",
    "TorchStatus",
    "torchStatusWritten",
    "buttonPressRead",
    "unknown",
    "ButtonStatus"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStatusServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    1,   65,    2, 0x06,    3 /* Public */,
       7,    0,   68,    2, 0x06,    5 /* Public */,
       8,    1,   69,    2, 0x06,    6 /* Public */,
      11,    0,   72,    2, 0x06,    8 /* Public */,
      12,    1,   73,    2, 0x06,    9 /* Public */,
      14,    0,   76,    2, 0x06,   11 /* Public */,
      15,    2,   77,    2, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 17,   16,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject StatusService::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPokitService::staticMetaObject>(),
    qt_meta_stringdata_CLASSStatusServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStatusServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStatusServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StatusService, std::true_type>,
        // method 'deviceCharacteristicsRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const StatusService::DeviceCharacteristics &, std::false_type>,
        // method 'deviceNameRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deviceNameWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceStatusRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const StatusService::Status &, std::false_type>,
        // method 'deviceLedFlashed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'torchStatusRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TorchStatus &, std::false_type>,
        // method 'torchStatusWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonPressRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint8 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ButtonStatus, std::false_type>
    >,
    nullptr
} };

void StatusService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deviceCharacteristicsRead((*reinterpret_cast< std::add_pointer_t<StatusService::DeviceCharacteristics>>(_a[1]))); break;
        case 1: _t->deviceNameRead((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->deviceNameWritten(); break;
        case 3: _t->deviceStatusRead((*reinterpret_cast< std::add_pointer_t<StatusService::Status>>(_a[1]))); break;
        case 4: _t->deviceLedFlashed(); break;
        case 5: _t->torchStatusRead((*reinterpret_cast< std::add_pointer_t<TorchStatus>>(_a[1]))); break;
        case 6: _t->torchStatusWritten(); break;
        case 7: _t->buttonPressRead((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ButtonStatus>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusService::*)(const StatusService::DeviceCharacteristics & );
            if (_t _q_method = &StatusService::deviceCharacteristicsRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusService::*)(const QString & );
            if (_t _q_method = &StatusService::deviceNameRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusService::*)();
            if (_t _q_method = &StatusService::deviceNameWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StatusService::*)(const StatusService::Status & );
            if (_t _q_method = &StatusService::deviceStatusRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StatusService::*)();
            if (_t _q_method = &StatusService::deviceLedFlashed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StatusService::*)(const TorchStatus & );
            if (_t _q_method = &StatusService::torchStatusRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StatusService::*)();
            if (_t _q_method = &StatusService::torchStatusWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StatusService::*)(const quint8 & , const ButtonStatus );
            if (_t _q_method = &StatusService::buttonPressRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *StatusService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStatusServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPokitService::qt_metacast(_clname);
}

int StatusService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPokitService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void StatusService::deviceCharacteristicsRead(const StatusService::DeviceCharacteristics & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusService::deviceNameRead(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusService::deviceNameWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void StatusService::deviceStatusRead(const StatusService::Status & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StatusService::deviceLedFlashed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void StatusService::torchStatusRead(const TorchStatus & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StatusService::torchStatusWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void StatusService::buttonPressRead(const quint8 & _t1, const ButtonStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
