#include "ClienteM.h"

ClienteM::ClienteM(QHostAddress ip, ushort port,  QObject *parent)
    : QObject{parent},
      dirIp(ip),
      puerto(port)
{
    setUpClient();
}

void ClienteM::conectarAlServidor()
{
    socket->connectToHost(dirIp, puerto);
}

void ClienteM::enviarMensaje(QString mensaje)
{
    Protocolo protocol;
    socket->write(protocol.mensajeTexto(mensaje));
}

void ClienteM::enviarNombre(QString nombre)
{
    Protocolo protocol;
    socket->write(protocol.setName(nombre));
}

void ClienteM::enviarStatus(Protocolo::Status status)
{
    socket->write(protocol.setStatus(status));

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
        emit cambioNombre(protocol.getNombre());
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
    socket = new QTcpSocket(this);
    // debemos tener tres conexiones con el Socket
    //conectado, desconectado y readyread
    connect(socket, &QTcpSocket::connected, this, &ClienteM::conectado);
    connect(socket, &QTcpSocket::disconnected, this, &ClienteM::desconectado);
    connect(socket, &QTcpSocket::readyRead, this, &ClienteM::rRead);
}
