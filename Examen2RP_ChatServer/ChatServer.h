#ifndef CHATSERVER_H
#define CHATSERVER_H
#include <QTcpServer>

namespace Rebeca{
class ChatSocket;

class ChatServer : public  QTcpServer
{
public:
    ChatServer(QObject *parent = nullptr);
    bool StartServer(quint16 port);
protected:
    void incomingConnection(qintptr handle);
private:
    QList<ChatSocket *> mSockets;
};
} //end namespace Rebeca
#endif // CHATSERVER_H
