#include "cframe.h"
#include "ui_cframe.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Persona{
    char nombre[80] = "";
    char username[20] = "";
    int numero = 0;
    string password = "";
} persona;

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

