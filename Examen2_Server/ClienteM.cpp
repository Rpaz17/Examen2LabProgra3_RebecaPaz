#include "ClienteM.h"

ClienteM::ClienteM(QHostAddress ip, ushort port,  QObject *parent)
    : QObject{parent},
      dirIp(ip),
      puerto(port)
{
     socket = new QTcpSocket(this);
    setUpClient();
}

ClienteM::ClienteM(QTcpSocket *cliente, QObject *parent)
    : QObject{parent},
       socket(cliente)
{
    setUpClient();
}

void ClienteM::conectarAlServidor()
{
    socket->connectToHost(dirIp, puerto);
}

void ClienteM::enviarMensaje(QString mensaje)
{
    socket->write(protocol.mensajeTexto(mensaje));
}

void ClienteM::enviarNombre(QString nombre)
{
    socket->write(protocol.setName(nombre));
}

void ClienteM::enviarStatus(Protocolo::Status status)
{
    socket->write(protocol.setStatus(status));

}

QString ClienteM::nombre() const
{
    auto id = socket->property("id").toInt();
    auto name = protocol.getNombre().length() >0 ? protocol.getNombre() :QString("Cliente %1").arg(id);

    return name;
}

void ClienteM::sendIsTyping()
{
    socket->write(protocol.isTypingMensaje());

}

void ClienteM::rRead()
{
    // se va a recibir la data y se pasa a la otra parte de la aplicacion
    auto data = socket->readAll();
    protocol.loadData(data);
    switch (protocol.tipo()) {
    case Protocolo::isTyping:
        emit isTyping();
        break;
    case Protocolo::Text:
        emit mensajeRecibido(protocol.getMensaje());
        break;
    case Protocolo::SetName:
        emit cambioNombre(nombre());
        break;
    case Protocolo::SetStatus:
        emit cambioStatus(protocol.getStatus());
        break;
    default:
        break;

    }
}

void ClienteM::setUpClient()
{

    // debemos tener tres conexiones con el Socket
    //conectado, desconectado y readyread
    connect(socket, &QTcpSocket::connected, this, &ClienteM::conectado);
    connect(socket, &QTcpSocket::disconnected, this, &ClienteM::desconectado);
    connect(socket, &QTcpSocket::readyRead, this, &ClienteM::rRead);
}
