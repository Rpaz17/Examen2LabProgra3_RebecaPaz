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
    explicit ClienteM(QTcpSocket *cliente,  QObject *parent = nullptr);
    void conectarAlServidor();
    void enviarMensaje(QString mensaje);
    void enviarNombre(QString nombre);
    void enviarStatus(Protocolo::Status status);
    QString nombre() const;
public:
    void sendIsTyping();
signals:
    void conectado();
    void desconectado();
    void dataRecibda(QByteArray data);
    void mensajeRecibido(const QString mensaje);
    void isTyping();
    void cambioNombre(QString nombre);
    void cambioStatus(Protocolo::Status status);
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
