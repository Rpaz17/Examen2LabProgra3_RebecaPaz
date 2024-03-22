/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Registro;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *LEditName;
    QLineEdit *LEditUser;
    QLineEdit *LEditPhone;
    QLineEdit *LEditPass_2;
    QLineEdit *LEditPCheck;
    QTextEdit *ErrorName;
    QTextEdit *ErrorUser;
    QTextEdit *ErrorPhone;
    QTextEdit *textEdit;
    QTextEdit *ErrorPass;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *ChatsList;
    QLabel *bienvenido;
    QPushButton *pushButton_4;
    QWidget *Inicio;
    QLabel *label;
    QPushButton *BtnIngresar;
    QLineEdit *LEdirUser;
    QLabel *label_2;
    QLineEdit *LEditPass;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *ErrorM;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName(QString::fromUtf8("cframe"));
        cframe->resize(552, 685);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        cframe->setPalette(palette);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 20, 541, 611));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        stackedWidget->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("MS PGothic"));
        font.setPointSize(10);
        stackedWidget->setFont(font);
        stackedWidget->setAutoFillBackground(true);
        Registro = new QWidget();
        Registro->setObjectName(QString::fromUtf8("Registro"));
        label_4 = new QLabel(Registro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 40, 451, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush4(QColor(255, 193, 157, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_4->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("NSimSun"));
        font1.setPointSize(22);
        label_4->setFont(font1);
        label_5 = new QLabel(Registro);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 130, 81, 16));
        label_5->setFont(font);
        label_6 = new QLabel(Registro);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 220, 71, 16));
        label_6->setFont(font);
        label_7 = new QLabel(Registro);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 400, 71, 16));
        label_7->setFont(font);
        label_8 = new QLabel(Registro);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 310, 111, 16));
        label_8->setFont(font);
        label_9 = new QLabel(Registro);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 490, 121, 16));
        label_9->setFont(font);
        LEditName = new QLineEdit(Registro);
        LEditName->setObjectName(QString::fromUtf8("LEditName"));
        LEditName->setGeometry(QRect(130, 130, 371, 24));
        QPalette palette3;
        QBrush brush5(QColor(122, 122, 122, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(100, 100, 100, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LEditName->setPalette(palette3);
        LEditUser = new QLineEdit(Registro);
        LEditUser->setObjectName(QString::fromUtf8("LEditUser"));
        LEditUser->setGeometry(QRect(130, 220, 371, 24));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LEditUser->setPalette(palette4);
        LEditPhone = new QLineEdit(Registro);
        LEditPhone->setObjectName(QString::fromUtf8("LEditPhone"));
        LEditPhone->setGeometry(QRect(160, 310, 341, 24));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LEditPhone->setPalette(palette5);
        LEditPass_2 = new QLineEdit(Registro);
        LEditPass_2->setObjectName(QString::fromUtf8("LEditPass_2"));
        LEditPass_2->setGeometry(QRect(130, 400, 371, 24));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LEditPass_2->setPalette(palette6);
        LEditPCheck = new QLineEdit(Registro);
        LEditPCheck->setObjectName(QString::fromUtf8("LEditPCheck"));
        LEditPCheck->setGeometry(QRect(170, 490, 331, 24));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Light, brush5);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LEditPCheck->setPalette(palette7);
        ErrorName = new QTextEdit(Registro);
        ErrorName->setObjectName(QString::fromUtf8("ErrorName"));
        ErrorName->setGeometry(QRect(130, 160, 371, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        ErrorName->setPalette(palette8);
        ErrorUser = new QTextEdit(Registro);
        ErrorUser->setObjectName(QString::fromUtf8("ErrorUser"));
        ErrorUser->setGeometry(QRect(130, 260, 371, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        ErrorUser->setPalette(palette9);
        ErrorUser->setAutoFillBackground(false);
        ErrorPhone = new QTextEdit(Registro);
        ErrorPhone->setObjectName(QString::fromUtf8("ErrorPhone"));
        ErrorPhone->setGeometry(QRect(160, 350, 341, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        ErrorPhone->setPalette(palette10);
        ErrorPhone->setAutoFillBackground(false);
        textEdit = new QTextEdit(Registro);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 440, 371, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textEdit->setPalette(palette11);
        textEdit->setAutoFillBackground(false);
        ErrorPass = new QTextEdit(Registro);
        ErrorPass->setObjectName(QString::fromUtf8("ErrorPass"));
        ErrorPass->setGeometry(QRect(170, 530, 331, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        ErrorPass->setPalette(palette12);
        ErrorPass->setAutoFillBackground(false);
        pushButton_2 = new QPushButton(Registro);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 560, 161, 41));
        QPalette palette13;
        QBrush brush7(QColor(43, 43, 43, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        pushButton_2->setPalette(palette13);
        pushButton_2->setAcceptDrops(false);
        pushButton_2->setAutoFillBackground(true);
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(Registro);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 560, 161, 41));
        QPalette palette14;
        QBrush brush11(QColor(57, 57, 57, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        pushButton_3->setPalette(palette14);
        pushButton_3->setAutoFillBackground(true);
        pushButton_3->setFlat(true);
        stackedWidget->addWidget(Registro);
        ChatsList = new QWidget();
        ChatsList->setObjectName(QString::fromUtf8("ChatsList"));
        bienvenido = new QLabel(ChatsList);
        bienvenido->setObjectName(QString::fromUtf8("bienvenido"));
        bienvenido->setGeometry(QRect(10, 30, 521, 501));
        pushButton_4 = new QPushButton(ChatsList);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 550, 111, 51));
        pushButton_4->setFlat(true);
        stackedWidget->addWidget(ChatsList);
        Inicio = new QWidget();
        Inicio->setObjectName(QString::fromUtf8("Inicio"));
        label = new QLabel(Inicio);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 371, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("High Tower Text"));
        font2.setPointSize(36);
        label->setFont(font2);
        BtnIngresar = new QPushButton(Inicio);
        BtnIngresar->setObjectName(QString::fromUtf8("BtnIngresar"));
        BtnIngresar->setGeometry(QRect(180, 420, 181, 31));
        QPalette palette15;
        QBrush brush15(QColor(209, 193, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        BtnIngresar->setPalette(palette15);
        LEdirUser = new QLineEdit(Inicio);
        LEdirUser->setObjectName(QString::fromUtf8("LEdirUser"));
        LEdirUser->setGeometry(QRect(100, 210, 351, 31));
        label_2 = new QLabel(Inicio);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 190, 55, 16));
        LEditPass = new QLineEdit(Inicio);
        LEditPass->setObjectName(QString::fromUtf8("LEditPass"));
        LEditPass->setGeometry(QRect(100, 280, 351, 31));
        label_3 = new QLabel(Inicio);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 260, 81, 16));
        pushButton = new QPushButton(Inicio);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(140, 310, 281, 21));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush16(QColor(255, 255, 255, 0));
        brush16.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush16);
        QBrush brush17(QColor(255, 203, 204, 0));
        brush17.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush17);
        QBrush brush18(QColor(127, 75, 76, 0));
        brush18.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush18);
        QBrush brush19(QColor(170, 101, 102, 0));
        brush19.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush19);
        QBrush brush20(QColor(85, 0, 255, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush20);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush20);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush21(QColor(255, 151, 153, 0));
        brush21.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush21);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush22(QColor(255, 203, 204, 127));
        brush22.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush23);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush17);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush18);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush19);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush21);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush22);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush17);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush18);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush21);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush21);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        pushButton->setPalette(palette16);
        pushButton->setAutoFillBackground(true);
        pushButton->setFlat(true);
        ErrorM = new QLineEdit(Inicio);
        ErrorM->setObjectName(QString::fromUtf8("ErrorM"));
        ErrorM->setGeometry(QRect(100, 350, 351, 24));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush24(QColor(255, 255, 255, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush24);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush25(QColor(255, 255, 255, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush26(QColor(255, 255, 255, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        ErrorM->setPalette(palette17);
        stackedWidget->addWidget(Inicio);
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 552, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QApplication::translate("cframe", "cframe", nullptr));
        label_4->setText(QApplication::translate("cframe", "Registra tu cuenta aqui", nullptr));
        label_5->setText(QApplication::translate("cframe", "Full Name", nullptr));
        label_6->setText(QApplication::translate("cframe", "Username", nullptr));
        label_7->setText(QApplication::translate("cframe", "Password", nullptr));
        label_8->setText(QApplication::translate("cframe", "Phone Number", nullptr));
        label_9->setText(QApplication::translate("cframe", "Check Password", nullptr));
        pushButton_2->setText(QApplication::translate("cframe", "Back", nullptr));
        pushButton_3->setText(QApplication::translate("cframe", "Registrarse", nullptr));
        bienvenido->setText(QString());
        pushButton_4->setText(QApplication::translate("cframe", "LogOut", nullptr));
        label->setText(QApplication::translate("cframe", "WELCOME!!", nullptr));
        BtnIngresar->setText(QApplication::translate("cframe", "Ingresar", nullptr));
        label_2->setText(QApplication::translate("cframe", "User", nullptr));
        label_3->setText(QApplication::translate("cframe", "Password", nullptr));
        pushButton->setText(QApplication::translate("cframe", "No tienes cuenta? Click Aqui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
