#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include "servidorm.h"
#include "ChatCliente.h"
QT_BEGIN_NAMESPACE
namespace Ui { class cframe; }
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();
private slots:
    void nuevoClienteC(QTcpSocket *cliente);
    void clienteDesC(QTcpSocket *cliente);
    void setNombreCliente(QString nombre);
    void setStatusCliente(Protocolo::Status status);
private:
    Ui::cframe *ui;
    ServidorM *server;

private: //methods
    void setUpServer();
};
#endif // CFRAME_H
