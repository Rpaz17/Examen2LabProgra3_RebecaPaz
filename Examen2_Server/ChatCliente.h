#ifndef CHATCLIENTE_H
#define CHATCLIENTE_H

#include <QWidget>
#include <QTcpSocket>
#include "ClienteM.h"
namespace Ui {
class ChatCliente;
}

class ChatCliente : public QWidget
{
    Q_OBJECT

public:
    explicit ChatCliente(QTcpSocket *cliente, QWidget *parent = nullptr);
    ~ChatCliente();

signals:
    void clienteCambioNombre(QString nombre);
    void isTyping(QString mensaje);
    void cambioStatus(Protocolo::Status status);
private slots:

    void on_btnSend_clicked();
    void clienteDesconectado();
    void mensajeRecibido(QString mensaje);

private:
    Ui::ChatCliente *ui;
    ClienteM *_cliente;

};

#endif // CHATCLIENTE_H
