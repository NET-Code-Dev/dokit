/****************************************************************************
** Meta object code from reading C++ file 'multimeterservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/qtpokit/multimeterservice.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multimeterservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMultimeterServiceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMultimeterServiceENDCLASS = QtMocHelpers::stringData(
    "MultimeterService",
    "settingsWritten",
    "",
    "readingRead",
    "MultimeterService::Reading",
    "reading"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMultimeterServiceENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[18];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[27];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMultimeterServiceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMultimeterServiceENDCLASS_t qt_meta_stringdata_CLASSMultimeterServiceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "MultimeterService"
        QT_MOC_LITERAL(18, 15),  // "settingsWritten"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 11),  // "readingRead"
        QT_MOC_LITERAL(47, 26),  // "MultimeterService::Reading"
        QT_MOC_LITERAL(74, 7)   // "reading"
    },
    "MultimeterService",
    "settingsWritten",
    "",
    "readingRead",
    "MultimeterService::Reading",
    "reading"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMultimeterServiceENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    1,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject MultimeterService::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPokitService::staticMetaObject>(),
    qt_meta_stringdata_CLASSMultimeterServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMultimeterServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMultimeterServiceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MultimeterService, std::true_type>,
        // method 'settingsWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readingRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MultimeterService::Reading &, std::false_type>
    >,
    nullptr
} };

void MultimeterService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultimeterService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsWritten(); break;
        case 1: _t->readingRead((*reinterpret_cast< std::add_pointer_t<MultimeterService::Reading>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MultimeterService::*)();
            if (_t _q_method = &MultimeterService::settingsWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MultimeterService::*)(const MultimeterService::Reading & );
            if (_t _q_method = &MultimeterService::readingRead; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MultimeterService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultimeterService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMultimeterServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPokitService::qt_metacast(_clname);
}

int MultimeterService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPokitService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MultimeterService::settingsWritten()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MultimeterService::readingRead(const MultimeterService::Reading & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
