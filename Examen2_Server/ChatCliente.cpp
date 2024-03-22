#include "ChatCliente.h"
#include "ui_chatcliente.h"

ChatCliente::ChatCliente(QTcpSocket *cliente, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatCliente)

{
    ui->setupUi(this);
    // conectar la senal de QTcpSocket y un slot dentro del widget
    _cliente = new ClienteM(cliente, this);
//    connect(cliente, &QTcpSocket::readyRead, this, &ChatCliente::dataRecibida);
    /*
     * se esta conectando todos los metodos del manager del cliente con el chat para poder mandar las senales
     */
    connect(_cliente, &ClienteM::desconectado, this, &ChatCliente::clienteDesconectado);
    connect(_cliente, &ClienteM::mensajeRecibido, this, &ChatCliente::mensajeRecibido);
    connect(_cliente, &ClienteM::cambioNombre, this, &ChatCliente::clienteCambioNombre);
    connect(_cliente, &ClienteM::cambioStatus, this, &ChatCliente::cambioStatus);
    connect(ui->lnMessage, &QLineEdit::textChanged, _cliente, &ClienteM::sendIsTyping);
}

ChatCliente::~ChatCliente()
{
    delete ui;
}

void ChatCliente::on_btnSend_clicked()
{
    auto mensaje = ui->lnMessage->text().trimmed();

    _cliente->enviarMensaje(mensaje);
    ui->lnMessage->setText("");
    ui->lstMessages->addItem(mensaje);

}

void ChatCliente::clienteDesconectado()
{
    ui->wdgSend->setEnabled(false);
}

void ChatCliente::mensajeRecibido(QString mensaje)
{
    ui->lstMessages->addItem(mensaje);
}

