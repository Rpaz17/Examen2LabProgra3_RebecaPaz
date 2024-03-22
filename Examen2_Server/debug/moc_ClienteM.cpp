/****************************************************************************
** Meta object code from reading C++ file 'ClienteM.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ClienteM.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClienteM.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClienteM_t {
    QByteArrayData data[15];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClienteM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClienteM_t qt_meta_stringdata_ClienteM = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ClienteM"
QT_MOC_LITERAL(1, 9, 9), // "conectado"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "desconectado"
QT_MOC_LITERAL(4, 33, 11), // "dataRecibda"
QT_MOC_LITERAL(5, 45, 4), // "data"
QT_MOC_LITERAL(6, 50, 15), // "mensajeRecibido"
QT_MOC_LITERAL(7, 66, 7), // "mensaje"
QT_MOC_LITERAL(8, 74, 8), // "isTyping"
QT_MOC_LITERAL(9, 83, 12), // "cambioNombre"
QT_MOC_LITERAL(10, 96, 6), // "nombre"
QT_MOC_LITERAL(11, 103, 12), // "cambioStatus"
QT_MOC_LITERAL(12, 116, 17), // "Protocolo::Status"
QT_MOC_LITERAL(13, 134, 6), // "status"
QT_MOC_LITERAL(14, 141, 5) // "rRead"

    },
    "ClienteM\0conectado\0\0desconectado\0"
    "dataRecibda\0data\0mensajeRecibido\0"
    "mensaje\0isTyping\0cambioNombre\0nombre\0"
    "cambioStatus\0Protocolo::Status\0status\0"
    "rRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClienteM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       8,    0,   62,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ClienteM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClienteM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->conectado(); break;
        case 1: _t->desconectado(); break;
        case 2: _t->dataRecibda((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->mensajeRecibido((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->isTyping(); break;
        case 5: _t->cambioNombre((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->cambioStatus((*reinterpret_cast< Protocolo::Status(*)>(_a[1]))); break;
        case 7: _t->rRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClienteM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClienteM::conectado)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClienteM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClienteM::desconectado)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClienteM::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClienteM::dataRecibda)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClienteM::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClienteM::mensajeRecibido)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClienteM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClienteM::isTyping)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClienteM::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClienteM::cambioNombre)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClienteM::*)(Protocolo::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClienteM::cambioStatus)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClienteM::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClienteM.data,
    qt_meta_data_ClienteM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClienteM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClienteM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClienteM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClienteM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ClienteM::conectado()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClienteM::desconectado()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClienteM::dataRecibda(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClienteM::mensajeRecibido(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClienteM::isTyping()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ClienteM::cambioNombre(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ClienteM::cambioStatus(Protocolo::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
