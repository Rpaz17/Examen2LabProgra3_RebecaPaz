#include "protocolo.h"

#include <QFileInfo>
#include <QIODevice>
#include <QDataStream>
Protocolo::Protocolo()
{

}

QByteArray Protocolo::mensajeTexto(QString mensaje)
{
    return getData(Text, mensaje);
}

QByteArray Protocolo::isTypingMensaje()
{
    return getData(isTyping, "");
}

QByteArray Protocolo::setName(QString name)
{
    return getData(SetName, name);
}



QByteArray Protocolo::setStatus(Status status)
{
    QByteArray ba;
    QDataStream out(&ba, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_11);
    out << SetStatus <<static_cast<int>(status) ;
    return ba;
}

void Protocolo::loadData(QByteArray data)
{
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_11);
    int statusInt;
    quint8 tipoInt;
    in >> tipoInt;
    _tipo = static_cast<TipoMensaje>(tipoInt);
    switch (_tipo) {
    case Text:
        in >> mensaje;
        break;
    case SetName:
        in >> nombre;
        break;
    case SetStatus:
        in >> statusInt;
        status = static_cast<Status>(statusInt);
        break;
    default:
        break;
    }
}

QByteArray Protocolo::getData(TipoMensaje tipo, QString data)
{
    QByteArray ba;
    QDataStream out(&ba, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_11);
    out << static_cast<quint8>(tipo) << data;
    return ba;
}

const QString &Protocolo::getNombre() const
{
    return nombre;
}

Protocolo::TipoMensaje Protocolo::tipo() const
{
    return _tipo;
}

Protocolo::Status Protocolo::getStatus() const
{
    return status;
}

const QString &Protocolo::getMensaje() const
{
    return mensaje;
}
