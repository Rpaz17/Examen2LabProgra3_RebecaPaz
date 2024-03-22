#ifndef CLIENTEM_H
#define CLIENTEM_H
#include "protocolo.h"
#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>

class ClienteM : public QObject
{
    Q_OBJECT
public:
    explicit ClienteM(QHostAddress ip = QHostAddress::LocalHost, ushort port = 4500,  QObject *parent = nullptr);
    void conectarAlServidor();
    void enviarMensaje(QString mensaje, QString reciever);
    void enviarNombre(QString nombre);
    void enviarStatus(Protocolo::Status status);
public:
    void sendIsTyping();
signals:
    void conectado();
    void desconectado();
    void dataRecibda(QByteArray data);
    void mensajeRecibido(QString mensaje);
    void isTyping();
    void cambioNombre(QString nombre);
    void cambioStatus(Protocolo::Status status);


    void connectionCCS(QString myName, QStringList clientsName);
    void newClientCServer(QString clientName);
    void clientNameChanged(QString prevName, QString nName);
    void clientDesc(QString clientName);
private slots:
    void rRead();
private:
    void setUpClient();
    QTcpSocket *socket;
    QHostAddress dirIp;
    ushort puerto;
    Protocolo protocol;
    /*tenemos estos valores en caso de que el servidor
    se desconectara para poder tener un metodo
    de reconectar
    */



};

#endif // CLIENTEM_H
