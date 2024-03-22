#ifndef REGSITRO_H
#define REGSITRO_H

#include <QMainWindow>

namespace Ui {
class Regsitro;
}

class Regsitro : public QMainWindow
{
    Q_OBJECT

public:
    explicit Regsitro(QWidget *parent = nullptr);
    ~Regsitro();

    void saveUserData();
    bool chekUser(const QString &username, const QString &password);
    bool registerUser(const QString &name, const QString &username, const QString &password, const QString &passwordCheck);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    QString name;
    QString username;
    QString password;
    QString passwordC;
    Ui::Regsitro *ui;
};

#endif // REGSITRO_H
