#include "ChatServer.h"
#include <ChatSocket.h>
#include <QTextStream>
#include <QDebug>

namespace Rebeca {
ChatServer::ChatServer(QObject *parent)
    : QTcpServer(parent)
{
}

void ChatServer::incomingConnection(qintptr handle)
{
    auto socket = new ChatSocket(handle, this);
    mSockets << socket;
    connect(socket, &ChatSocket::RRead, [&](ChatSocket *S){
        qDebug() <<"ReadyRead is executing...";
        QTextStream T(S);
        auto text = T.readAll();
        for (auto i :mSockets) {
            QTextStream K(i);
            K << text;
            i->flush();
        }
    });
    connect(socket, &ChatSocket::StateChanged, [&](ChatSocket *S, int ST){
        qDebug() << "StateChanged is being executed...";
        if (ST == QTcpSocket::UnconnectedState){
            qDebug() << "UnconnectedState...";
            mSockets.removeOne(S);
            for (auto i: mSockets) {
                QTextStream K(i);
                K <<"Server: El cliente"
                 <<S->socketDescriptor()
                <<"se ha desconectado...";
                i->flush();
            }
        }
    });

}

bool ChatServer::StartServer(quint16 port)
{
    return listen(QHostAddress::Any, port);
}
} //end namespace Rebeca
