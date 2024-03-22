#ifndef SERVIDORM_H
#define SERVIDORM_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class ServidorM : public QObject
{
    Q_OBJECT
public:
    explicit ServidorM(ushort port = 4500, QObject *parent = nullptr);

private slots:
    void nuevoClienteConexionRecibida();
    void enClienteDesconectado();
signals:
    void nuevoClienteConectado(QTcpSocket *client);
    void clienteDesconectado(QTcpSocket *client);
private://fields
    QTcpServer *S; //puntero del servidor
    QList<QTcpSocket *> _C;
private://methods
    void setUpServer(ushort port);

};

#endif // SERVIDORM_H
