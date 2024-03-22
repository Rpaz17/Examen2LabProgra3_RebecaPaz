#ifndef CHATITEM_H
#define CHATITEM_H

#include <QWidget>
#include <QDateTime>

namespace Ui {
class ChatItem;
}

class ChatItem : public QWidget
{
    Q_OBJECT

public:
    explicit ChatItem(QWidget *parent = nullptr);
    ~ChatItem();
    void setMensaje(QString mensaje, bool esMiMensaje = false);

private:
    Ui::ChatItem *ui;
};

#endif // CHATITEM_H
