#ifndef CHATSOCKET_H
#define CHATSOCKET_H
#include <QTcpSocket>

namespace Rebeca{
class ChatSocket : public QTcpSocket
{
    Q_OBJECT
public:
    ChatSocket(qintptr handle, QObject *parent = nullptr);
signals:
    void RRead(ChatSocket *);
    void StateChanged(ChatSocket *, int);
};
} //end namespace Rebeca
#endif
