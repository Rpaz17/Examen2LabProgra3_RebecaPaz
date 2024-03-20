#include "ChatSocket.h"

namespace Rebeca{
ChatSocket::ChatSocket(qintptr handle, QObject *parent)
    :QTcpSocket(parent)
{
    setSocketDescriptor(handle);
    connect(this, &ChatSocket::readyRead, [&](){
        emit RRead(this);
    });
    connect (this, &ChatSocket::stateChanged, [&](int S){
        emit StateChanged(this, S);
    });
}
} //end namespace Rebeca
