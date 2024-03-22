#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "ChatItem.h"
namespace Rebeca {

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setUpClient();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void Rebeca::MainWindow::setUpClient()
{
    cliente = new ClienteM();
    connect(cliente, &ClienteM::conectado, [this](){
        ui->centralwidget->setEnabled(true);
    });
    connect(cliente, &ClienteM::desconectado, [this](){
        ui->centralwidget->setEnabled(false);
    });

    connect(cliente, &ClienteM::mensajeRecibido, this, &MainWindow::dataRecibida);

    connect(cliente, &ClienteM::connectionCCS, this, &MainWindow::onConnectionCCS);
    connect(cliente, &ClienteM::newClientCServer, this, &MainWindow::onNewClientCServer);
    connect(cliente, &ClienteM::clientDesc, this, &MainWindow::onClientDesc);
    connect(cliente, &ClienteM::clientNameChanged, this, &MainWindow::onClientNameChanged);

    connect(ui->lnMensaje, &QLineEdit::textChanged, cliente, &ClienteM::sendIsTyping);

}

void MainWindow::on_actionConectar_triggered()
{
   cliente->conectarAlServidor();
}

void MainWindow::dataRecibida(QString mensaje)
{
    //se agregan los mensajes
    //ui->lstMensajes->addItem(data);
    auto chatWidget = new ChatItem(this);
    chatWidget->setMensaje(mensaje);
    auto listItemWidget = new QListWidgetItem();
    listItemWidget->setSizeHint(QSize(0,65));
    ui->lstMensajes->addItem(listItemWidget);
    //implementamos color
    listItemWidget->setBackground(QColor(255, 138, 140));
    ui->lstMensajes->setItemWidget(listItemWidget, chatWidget);
}


void MainWindow::on_btnSend_clicked()
{
    auto mensaje = ui->lnMensaje->text().trimmed();
    cliente->enviarMensaje(mensaje, ui->cmbStatus->currentText());
    //   ui->lstMensajes->addItem(mensaje);
    ui->lnMensaje->setText("");

    auto chatWidget = new ChatItem(this);
    chatWidget->setMensaje(mensaje,true);
    auto listItemWidget = new QListWidgetItem();
    listItemWidget->setSizeHint(QSize(0,65));
    ui->lstMensajes->addItem(listItemWidget);
    //implementamos color
    listItemWidget->setBackground(QColor(167,255,237));
    ui->lstMensajes->setItemWidget(listItemWidget, chatWidget);
}


void MainWindow::on_lnNombre_editingFinished()
{
    auto name = ui->lnNombre->text().trimmed();
    cliente->enviarNombre(name);
}


void MainWindow::on_cmbStatus_currentIndexChanged(int index)
{
    auto status = (Protocolo::Status)index;
    cliente->enviarStatus(status);
}

void MainWindow::onConnectionCCS(QString myName, QStringList clientsName)
{

}

void MainWindow::onNewClientCServer(QString clientName)
{

}

void MainWindow::onClientNameChanged(QString prevName, QString nName)
{

}

void MainWindow::onClientDesc(QString clientName)
{

}


}//end namespace Rebeca;
