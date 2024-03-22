#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "ChatItem.h"
namespace Rebeca {

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConectar_triggered()
{
    cliente = new ClienteM();
    connect(cliente, &ClienteM::conectado, [this](){
        ui->centralwidget->setEnabled(true);
    });
    connect(cliente, &ClienteM::desconectado, [this](){
        ui->centralwidget->setEnabled(false);
    });
    connect(cliente, &ClienteM::mensajeRecibido, this, &MainWindow::dataRecibida);

    connect(ui->lnMensaje, &QLineEdit::textChanged, cliente, &ClienteM::sendIsTyping);
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
    cliente->enviarMensaje(mensaje);
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

}//end namespace Rebeca;
