// udp_server.h

#ifndef UDP_SERVER_H
#define UDP_SERVER_H

#include <QObject>
#include <QUdpSocket>

class UDPServer: public QObject
{
    Q_OBJECT
public:
    explicit UDPServer(QObject *parent = 0);
    void HelloUDP();
signals:
    
public slots:
    void readyRead();

private:
    QUdpSocket *socket;
    
};

#endif // UDP_SERVER_H
