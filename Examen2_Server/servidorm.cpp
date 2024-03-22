#include "servidorm.h"

ServidorM::ServidorM(ushort port, QObject *parent) : QObject(parent)
{
    setUpServer(port);
}

void ServidorM::nuevoClienteConexionRecibida()
{
    // va a recibir senal del cliente que este esperando a conectarse con el servidor
    auto cliente = S->nextPendingConnection();
    //anadimos al cliente al QList de clientes
    _C << cliente;
    auto id = _C.length();
    cliente->setProperty("id", id);

    connect(cliente, &QTcpSocket::disconnected, this, &ServidorM::enClienteDesconectado);
    //emitir una senal para cuando un nuevo cliente se conecta
    emit nuevoClienteConectado(cliente);
}

/*
 esta funcion elimina al cliente una vez se desconecta sin embargo
 debo cambiarla para solo cerrar el chat y no que se elimine el cliente
*/
void ServidorM::enClienteDesconectado()
{
    //cast the center
    auto cliente =qobject_cast<QTcpSocket *>(sender());
//    int id = cliente->property("id").toInt();
    _C.removeOne(cliente);
    //envia una senal de cliente desconectado
    emit clienteDesconectado(cliente);
}

void ServidorM::setUpServer(ushort port)
{
    //instancia del servidor
    S = new QTcpServer(this);
    // conectando el servidor con la funcion que recibe senal de los clientes
    connect(S, &QTcpServer::newConnection, this, &ServidorM::nuevoClienteConexionRecibida);
    //esperar senal cualquier puerto anadido (4500)
    S->listen(QHostAddress::Any, port);
}
