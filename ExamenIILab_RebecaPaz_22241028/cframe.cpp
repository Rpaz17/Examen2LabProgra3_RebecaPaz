#include "cframe.h"
#include "ui_cframe.h"

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}


void cframe::on_pushButton_pressed()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void cframe::on_pushButton_2_pressed()
{
    ui->stackedWidget->setCurrentIndex(2);
}

