#include "protocolo.h"

#include <QFileInfo>
#include <QIODevice>
#include <QDataStream>
Protocolo::Protocolo()
{

}

QByteArray Protocolo::mensajeTexto(QString message,QString reciever)
{
    QByteArray ba;
    QDataStream out(&ba, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_11);
    out << Text << reciever << mensaje ;
    return ba;
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
        in >> _reciever >> mensaje;
        break;
    case SetName:
        in >> nombre;
        break;
    case SetStatus:
        in >> statusInt;
        status = static_cast<Status>(statusInt);
        break;
    case ClientName:
    in >>_prevName>>_clientName;
        break;
    case newClient:
    case ClienteDesc:
        in >>_clientName;
        break;
    case ConexionCCS:
    in >> _myName >>_clientsName;
        break;
    default:
        break;
    }
}

QByteArray Protocolo::setSendRequest(QString sender, QString receiver)
{
    QString request = QString("{\"type\": \"friend_request\", \"sender\": \"%1\", \"receiver\": \"%2\"}")
                            .arg(sender)
                            .arg(receiver);

        return request.toUtf8(); // Convertir a QByteArray
}

QByteArray Protocolo::setAcceptRequest()
{
    return getData(AcceptRequest, "");
}

QByteArray Protocolo::setRejectRequest()
{
    return getData(RejectRequest, "");
}

QByteArray Protocolo::getData(TipoMensaje tipo, QString data)
{
    QByteArray ba;
    QDataStream out(&ba, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_11);
    out << static_cast<quint8>(tipo) << data;
    return ba;
}

const QString &Protocolo::myName() const
{
    return _myName;
}

const QStringList &Protocolo::clientsName() const
{
    return _clientsName;
}

const QString &Protocolo::prevName() const
{
    return _prevName;
}

const QString &Protocolo::clientName() const
{
    return _clientName;
}

Protocolo::Status Protocolo::reciever() const
{
    return status;
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
