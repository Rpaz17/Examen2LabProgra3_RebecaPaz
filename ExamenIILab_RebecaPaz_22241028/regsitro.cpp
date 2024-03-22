#include "regsitro.h"
#include "ui_regsitro.h"
#include <QFile>
#include <qdebug.h>
#include <QIODevice>

Regsitro::Regsitro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Regsitro)
{
    ui->setupUi(this);
}

Regsitro::~Regsitro()
{
    saveUserData();
    delete ui;
}

void Regsitro::on_pushButton_2_clicked()
{
ui->stackedWidget->setCurrentIndex(1);
}


void Regsitro::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Regsitro::on_pushButton_3_clicked()
{
        name = ui->lnNombre->text();
        username = ui->lnUser->text();
        password = ui->lnPassword->text();
        passwordC = ui->lnCP->text();
        // Validar los campos y registrar al usuario
            bool registrationSuccessful = registerUser(name, username, password, passwordC);

            if (registrationSuccessful) {
                // Registro exitoso, guardar los datos y cambiar al inicio de sesión
                saveUserData();
                ui->stackedWidget->setCurrentIndex(0); // Cambiar al inicio de sesión
            }
}

void Regsitro::saveUserData()
{
    // Abrir el archivo en modo de escritura, truncando el contenido existente
        QFile file("userdata.bin");
        if (file.open(QIODevice::ReadWrite | QIODevice::Truncate)) {
            // Crear un QDataStream para escribir en el archivo binario
            QDataStream out(&file);

            // Escribir los datos en el archivo
            out << name << username << password;

            // Cerrar el archivo después de escribir
            file.close();

            qDebug() << "Datos guardados exitosamente.";
        } else {
            // Manejar el error si no se puede abrir el archivo
            qDebug() << "Error al abrir el archivo para escritura.";
        }
}

bool Regsitro::chekUser(const QString &username, const QString &password)
{
    // Abrir el archivo binario para lectura
        QFile file("userdata.bin");
        if (file.open(QIODevice::ReadOnly)) {
            // Crear un QDataStream para leer desde el archivo binario
            QDataStream in(&file);

            // Leer cada registro de usuario del archivo binario
            QString storedUsername;
            QString storedPassword;
            while (!in.atEnd()) {
                // Leer el nombre de usuario y la contraseña almacenados
                in >> storedUsername >> storedPassword;

                // Verificar si el nombre de usuario y la contraseña coinciden
                if (storedUsername == username && storedPassword == password) {
                    // Usuario encontrado, cerrar el archivo y devolver verdadero
                    file.close();
                    return true;
                }
            }
            // Cerrar el archivo después de terminar de leer
            file.close();
        }

        // Usuario no encontrado o contraseña incorrecta
        return false;
}

bool Regsitro::registerUser(const QString &name, const QString &username, const QString &password, const QString &passwordCheck)
{
    // Validar los campos del formulario de registro
        if (name.isEmpty() || username.isEmpty() || password.isEmpty() || passwordCheck.isEmpty()) {
            // Mostrar mensaje de error si aslgún campo está vacío
            qDebug() << "Error: Uno o más campos están vacíos.";
            return false;
        }
        if (password != passwordCheck) {
            // Mostrar mensaje de error si las contraseñas no coinciden
            qDebug() << "Error: Las contraseñas no coinciden.";
            return false;
        }
        // Otros chequeos de validación si es necesario...

        // Si todos los campos son válidos, el registro es exitoso
        qDebug() << "Usuario registrado exitosamente.";
        return true;
}


void Regsitro::on_pushButton_clicked()
{
    // Obtener el nombre de usuario y la contraseña ingresados
        QString username = ui->lnUser->text();
        QString password = ui->lnCP->text();

        // Verificar el usuario en el archivo binario
        bool userFound = chekUser(username, password);

        if (userFound) {
            // Usuario encontrado, mostrar mensaje de éxito y cambiar de página
            ui->ErrorM->setText("");
            ui->stackedWidget->setCurrentIndex(2); // Cambiar a la página correspondiente después del login
        } else {
            // Usuario no encontrado o contraseña incorrecta, mostrar mensaje de error
            ui->ErrorM->setText("Usuario no encontrado o contraseña incorrecta.");
        }
}

