/****************************************************************************
** Meta object code from reading C++ file 'ChatCliente.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ChatCliente.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatCliente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatCliente_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatCliente_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatCliente_t qt_meta_stringdata_ChatCliente = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ChatCliente"
QT_MOC_LITERAL(1, 12, 19), // "clienteCambioNombre"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "nombre"
QT_MOC_LITERAL(4, 40, 8), // "isTyping"
QT_MOC_LITERAL(5, 49, 7), // "mensaje"
QT_MOC_LITERAL(6, 57, 12), // "cambioStatus"
QT_MOC_LITERAL(7, 70, 17), // "Protocolo::Status"
QT_MOC_LITERAL(8, 88, 6), // "status"
QT_MOC_LITERAL(9, 95, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(10, 114, 19), // "clienteDesconectado"
QT_MOC_LITERAL(11, 134, 15) // "mensajeRecibido"

    },
    "ChatCliente\0clienteCambioNombre\0\0"
    "nombre\0isTyping\0mensaje\0cambioStatus\0"
    "Protocolo::Status\0status\0on_btnSend_clicked\0"
    "clienteDesconectado\0mensajeRecibido"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatCliente[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   53,    2, 0x08 /* Private */,
      10,    0,   54,    2, 0x08 /* Private */,
      11,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void ChatCliente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatCliente *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clienteCambioNombre((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->isTyping((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->cambioStatus((*reinterpret_cast< Protocolo::Status(*)>(_a[1]))); break;
        case 3: _t->on_btnSend_clicked(); break;
        case 4: _t->clienteDesconectado(); break;
        case 5: _t->mensajeRecibido((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatCliente::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatCliente::clienteCambioNombre)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatCliente::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatCliente::isTyping)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatCliente::*)(Protocolo::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatCliente::cambioStatus)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatCliente::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ChatCliente.data,
    qt_meta_data_ChatCliente,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatCliente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatCliente::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatCliente.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatCliente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ChatCliente::clienteCambioNombre(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatCliente::isTyping(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatCliente::cambioStatus(Protocolo::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
