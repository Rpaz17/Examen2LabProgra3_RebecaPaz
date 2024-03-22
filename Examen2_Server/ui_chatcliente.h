/********************************************************************************
** Form generated from reading UI file 'chatcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATCLIENTE_H
#define UI_CHATCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatCliente
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstMessages;
    QWidget *wdgSend;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lnMessage;
    QPushButton *btnSend;

    void setupUi(QWidget *ChatCliente)
    {
        if (ChatCliente->objectName().isEmpty())
            ChatCliente->setObjectName(QString::fromUtf8("ChatCliente"));
        ChatCliente->resize(532, 400);
        verticalLayout = new QVBoxLayout(ChatCliente);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lstMessages = new QListWidget(ChatCliente);
        lstMessages->setObjectName(QString::fromUtf8("lstMessages"));

        verticalLayout->addWidget(lstMessages);

        wdgSend = new QWidget(ChatCliente);
        wdgSend->setObjectName(QString::fromUtf8("wdgSend"));
        horizontalLayout = new QHBoxLayout(wdgSend);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lnMessage = new QLineEdit(wdgSend);
        lnMessage->setObjectName(QString::fromUtf8("lnMessage"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        lnMessage->setPalette(palette);

        horizontalLayout->addWidget(lnMessage);

        btnSend = new QPushButton(wdgSend);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout->addWidget(btnSend);


        verticalLayout->addWidget(wdgSend);


        retranslateUi(ChatCliente);

        QMetaObject::connectSlotsByName(ChatCliente);
    } // setupUi

    void retranslateUi(QWidget *ChatCliente)
    {
        ChatCliente->setWindowTitle(QApplication::translate("ChatCliente", "Form", nullptr));
        btnSend->setText(QApplication::translate("ChatCliente", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatCliente: public Ui_ChatCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATCLIENTE_H
