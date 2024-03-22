#include "ChatItem.h"
#include "ui_ChatItem.h"

ChatItem::ChatItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatItem)
{
    ui->setupUi(this);
}

ChatItem::~ChatItem()
{
    delete ui;
}

void ChatItem::setMensaje(QString mensaje, bool esMiMensaje)
{
    if(esMiMensaje){
        ui->lblMensaje->setAlignment(Qt::AlignRight);
    }
    ui->lblMensaje->setText(mensaje);
    ui->lblTiempo->setText(QDateTime::currentDateTime().toString("HH:mm"));

}
