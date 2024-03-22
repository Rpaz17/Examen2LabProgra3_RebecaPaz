#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ClienteM.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QTcpSocket;

namespace Rebeca {
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionConectar_triggered();
    void dataRecibida (QString mensaje);
    void on_btnSend_clicked();

    void on_lnNombre_editingFinished();

    void on_cmbStatus_currentIndexChanged(int index);



private:
    Ui::MainWindow *ui;
    QTcpSocket *mSocket;
    ClienteM *cliente;
};
}// end namespace Rebeca

#endif // MAINWINDOW_H
