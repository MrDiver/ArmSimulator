/****************************************************************************
** Meta object code from reading C++ file 'codearea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "codearea/codearea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'codearea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CodeArea_t {
    QByteArrayData data[10];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CodeArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CodeArea_t qt_meta_stringdata_CodeArea = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CodeArea"
QT_MOC_LITERAL(1, 9, 13), // "blocksChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "newCount"
QT_MOC_LITERAL(4, 33, 15), // "updateRequested"
QT_MOC_LITERAL(5, 49, 4), // "rect"
QT_MOC_LITERAL(6, 54, 2), // "dy"
QT_MOC_LITERAL(7, 57, 13), // "addBreakpoint"
QT_MOC_LITERAL(8, 71, 14), // "getBreakpoints"
QT_MOC_LITERAL(9, 86, 9) // "QSet<int>"

    },
    "CodeArea\0blocksChanged\0\0newCount\0"
    "updateRequested\0rect\0dy\0addBreakpoint\0"
    "getBreakpoints\0QSet<int>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CodeArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    2,   37,    2, 0x0a /* Public */,
       7,    0,   42,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,    5,    6,
    QMetaType::Void,
    0x80000000 | 9,

       0        // eod
};

void CodeArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CodeArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blocksChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateRequested((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addBreakpoint(); break;
        case 3: { QSet<int> _r = _t->getBreakpoints();
            if (_a[0]) *reinterpret_cast< QSet<int>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CodeArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_CodeArea.data,
    qt_meta_data_CodeArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CodeArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CodeArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CodeArea.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int CodeArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
