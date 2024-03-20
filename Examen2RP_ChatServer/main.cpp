#include <QCoreApplication>
#include <ChatServer.h>

using namespace Rebeca;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ChatServer Server;
    if (!Server.StartServer(3333)) {
        qDebug()<<"Error: "<<Server.errorString();
        return 1;
    }
    qDebug( )<<"Server started...";
    return a.exec();
}
