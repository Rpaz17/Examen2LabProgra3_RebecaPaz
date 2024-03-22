    #include "cframe.h"
    #include "ui_cframe.h"

    cframe::cframe(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::cframe)
    {
        ui->setupUi(this);
        setUpServer();
    }

    cframe::~cframe()
    {
        delete ui;
    }

    void cframe::nuevoClienteC(QTcpSocket *cliente)
    {
        auto id = cliente->property("id").toInt();
        ui->lstClients->addItem(QString("Nuevo Cliente agregado: %1").arg(id));
        auto chatWidget = new ChatCliente(cliente);
        ui->tbChats->addTab(chatWidget, QString("Cliente (%1").arg(id));

        connect(chatWidget, &ChatCliente::clienteCambioNombre, this, &cframe::setNombreCliente);
        connect(chatWidget, &ChatCliente::cambioStatus, this, &cframe::setStatusCliente);
        connect(chatWidget, &ChatCliente::isTyping, [this](QString name){
            this->statusBar()->showMessage(name, 750);
        });

    }

    void cframe::clienteDesC(QTcpSocket *cliente)
    {
        auto id = cliente->property("id").toInt();
        ui->lstClients->addItem(QString("Cliente desconectado: %1").arg(id));
    }

    void cframe::setNombreCliente(QString nombre)
    {
        auto widget = qobject_cast<QWidget *>(sender());
        auto index = ui->tbChats->indexOf(widget);
        ui->tbChats->setTabText(index, nombre);
    }

    void cframe::setStatusCliente(Protocolo::Status status)
    {

    }

    void cframe::setUpServer()
    {
        server = new ServidorM();
        //buscar nueva conexion y cuando se desconectan
        connect(server, &ServidorM::nuevoClienteConectado, this, &cframe::nuevoClienteC);
        connect(server, &ServidorM::clienteDesconectado, this, &cframe::clienteDesC);
    }


