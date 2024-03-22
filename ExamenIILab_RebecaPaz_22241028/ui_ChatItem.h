/********************************************************************************
** Form generated from reading UI file 'ChatItem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATITEM_H
#define UI_CHATITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatItem
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblMensaje;
    QLabel *lblTiempo;

    void setupUi(QWidget *ChatItem)
    {
        if (ChatItem->objectName().isEmpty())
            ChatItem->setObjectName(QString::fromUtf8("ChatItem"));
        ChatItem->resize(384, 77);
        verticalLayout_2 = new QVBoxLayout(ChatItem);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblMensaje = new QLabel(ChatItem);
        lblMensaje->setObjectName(QString::fromUtf8("lblMensaje"));

        verticalLayout->addWidget(lblMensaje);

        lblTiempo = new QLabel(ChatItem);
        lblTiempo->setObjectName(QString::fromUtf8("lblTiempo"));

        verticalLayout->addWidget(lblTiempo, 0, Qt::AlignRight);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ChatItem);

        QMetaObject::connectSlotsByName(ChatItem);
    } // setupUi

    void retranslateUi(QWidget *ChatItem)
    {
        ChatItem->setWindowTitle(QApplication::translate("ChatItem", "Form", nullptr));
        lblMensaje->setText(QApplication::translate("ChatItem", "Mensaje: ", nullptr));
        lblTiempo->setText(QApplication::translate("ChatItem", "Tiempo: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatItem: public Ui_ChatItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATITEM_H
