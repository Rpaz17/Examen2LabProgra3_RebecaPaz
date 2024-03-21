#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class cframe; }
QT_END_NAMESPACE

class QTcpSocket;

namespace Rebeca {
class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();
private slots:
    void on_pushButton_pressed();
    void on_pushButton_2_pressed();
    void on_pushButton_3_clicked();

    void on_BtnIngresar_pressed();

private:
    Ui::cframe *ui;
    QTcpSocket *mSocket;
    void saveUserData(const QString &name, const QString &username, const QString &phone, const QString &password);
    bool checkUser(const QString &username, const QString &password);
    bool registerUser( const QString name, QString username, QString phone, QString password, QString passwordChecked);
};
} //end namespace Rebeca
#endif // CFRAME_H
