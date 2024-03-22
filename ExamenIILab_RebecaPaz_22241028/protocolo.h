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
        RejectRequest,
        ClientName,
        ConexionCCS, // mensaje enviado al servidor cuando el cliente se conecta y el servidor le ontesta con este tipo de mensaje
        newClient, // cuando se conecte un cliente nuevo
        ClienteDesc // cliente desconectado
    };

    enum Status{
        None,
        Available,
        Away,
        Busy
    };

    Protocolo();

    QByteArray mensajeTexto(QString mensaje, QString reciever);
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

    Status reciever() const;

    const QString &clientName() const;

    const QString &prevName() const;

    const QStringList &clientsName() const;

    const QString &myName() const;

private:
    QByteArray getData(TipoMensaje tipo, QString data);

    TipoMensaje _tipo;
    QString mensaje;
    QString nombre;
    Status status;
    QString _reciever;
    QString _clientName;
    QString _prevName;
    QStringList _clientsName;
    QString _myName;
    Status rec;
};

#endif // PROTOCOLO_H
