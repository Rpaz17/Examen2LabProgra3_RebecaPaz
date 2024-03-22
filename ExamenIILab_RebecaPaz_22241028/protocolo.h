#ifndef PROTOCOLO_H
#define PROTOCOLO_H
#include <QByteArray>
#include <QString>
#include <QStringList>


class Protocolo
{
public:
    enum TipoMensaje{
        isTyping,
        Text,
        SetName,
        SetStatus,
        SendRequest,
        AcceptRequest,
        RejectRequest
    };

    enum Status{
        None,
        Available,
        Away,
        Busy
    };

    Protocolo();

    QByteArray mensajeTexto(QString mensaje);
    QByteArray isTypingMensaje();
    QByteArray setName(QString name);
    QByteArray setStatus(Status status);
    // se recibe el bytearray y se intenta hacer un parse
    void loadData(QByteArray data);
    QByteArray setSendRequest(QString sender, QString receiver); // enviar solicitud de amistad
    QByteArray setAcceptRequest();
    QByteArray setRejectRequest();
    const QString &getMensaje() const;

    Status getStatus() const;

    TipoMensaje tipo() const;

    const QString &getNombre() const;

private:
    QByteArray getData(TipoMensaje tipo, QString data);

    TipoMensaje _tipo;
    QString mensaje;
    QString nombre;
    Status status;

};

#endif // PROTOCOLO_H
