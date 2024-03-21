#include "cframe.h"
#include "ui_cframe.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <QTcpSocket>
#include <QTextStream>
#include <QDir>
using namespace std;

struct Persona{
    QString name;
    QString username;
    QString phone;
    QString password;
};

namespace Rebeca {
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


void cframe::on_pushButton_3_clicked()
{
    QString name = ui->LEditName->text();
        QString username = ui->LEditUser->text();
        QString phone = ui->LEditPhone->text();
        QString password = ui->LEditPass_2->text();
        QString passwordCheck = ui->LEditPCheck->text();

        // Validar los campos y registrar al usuario
        bool registrationSuccessful = registerUser(name, username, phone, password, passwordCheck);

        if (registrationSuccessful) {
            // Registro exitoso, cambiar a la página correspondiente
            ui->ErrorM->setText("");
            ui->stackedWidget->setCurrentIndex(2); // Cambiar a la página correspondiente después del registro
        }
    }

void cframe::saveUserData(const QString &name, const QString &username, const QString &phone, const QString &password)
{
    std::ofstream file("userdata.bin", std::ios::binary | std::ios::app);

       if (file.is_open()) {
           // Write user data to the file
           Persona infoPersona{name, username, phone, password};
           file.write(reinterpret_cast<char*>(&infoPersona), sizeof(Persona));

           // Close the file
           file.close();

           qDebug() << "Usuario registrado exitosamente.";
       } else {
           // Handle error if file cannot be opened
           qDebug() << "Error opening file for writing.";
           qDebug() << "Current path: " << QDir::currentPath();
           // Optionally, display an error message to the user
       }
}

bool cframe::checkUser(const QString &username, const QString &password)
{
    // Abrir el archivo binario para lectura
    std::ifstream file("userdata.bin", std::ios::binary);

    if (file.is_open()) {
        // Leer cada registro de usuario del archivo binario
        Persona userData;
        while (file.read(reinterpret_cast<char*>(&userData), sizeof(Persona))) {
            // Verificar si el nombre de usuario y la contraseña coinciden
            if (userData.username == username && userData.password == password) {
                // Usuario encontrado, cerrar el archivo y devolver verdadero
                file.close();
                return true;
            }
        }
        // Cerrar el archivo después de terminar de leer
        file.close();
    }else{
        qDebug() << "Error opening file for reading.";
        qDebug() << "Current path: " << QDir::currentPath();
    }

    // Usuario no encontrado o contraseña incorrecta
    return false;
}

bool cframe::registerUser(const QString name, QString username, QString phone, QString password, QString passwordChecked)
{
    // Validations
    if (name.contains(QRegExp("[0-9]")) || name.isEmpty()) {
        ui->ErrorName->setText("Caracteres no permitidos en el nombre.");
        return false;
    }
    if (username.length() > 7 || username.isEmpty()) {
        ui->ErrorUser->setText("Cantidad de caracteres no permitida (max. 7)");
        return false;
    }
    if (phone.length() > 8 || phone.isEmpty()) {
        ui->ErrorPhone->setText("Cantidad de caracteres no permitida (max. 8)");
        return false;
    }
    if (password.length() < 3 || password.isEmpty()) {
        ui->ErrorPass->setText("Debe contener más de 3 caracteres.");
        return false;
    }
    if (password != passwordChecked || passwordChecked.isEmpty()) {
        ui->ErrorPass->setText("Las contraseñas no coinciden.");
        return false;
    }

    if (!name.isEmpty() && !username.isEmpty() && !phone.isEmpty()
            && !password.isEmpty() && !passwordChecked.isEmpty()){
        // guardar datos en el archivo
        saveUserData(name, username, phone, password);
        ui->ErrorName->clear();
        ui->ErrorPass->clear();
        ui->ErrorPhone->clear();
        ui->ErrorUser->clear();
        return true;
    }
    return false;
}


void cframe::on_BtnIngresar_pressed()
{
    QString username = ui->LEdirUser->text();
        QString password = ui->LEditPass->text();

        // Buscar el usuario en el archivo binario
        bool userFound = checkUser(username, password);

        if (userFound) {
            // Usuario encontrado, puede iniciar sesión
            ui->ErrorM->setText("");
            ui->stackedWidget->setCurrentIndex(1);
            // Aquí puedes agregar la lógica para iniciar sesión, como abrir una nueva ventana o mostrar un mensaje de éxito.
        } else {
            // Usuario no encontrado o contraseña incorrecta
            ui->ErrorM->setText("Usuario no encontrado o contraseña incorrecta.");
            qDebug() << "Usuario no encontrado";
        }
}

} //end namespace Rebeca
