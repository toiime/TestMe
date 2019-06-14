#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QtWidgets/QWidget>
#include "ui_udpServer.h"

class UdpServer : public QWidget
{
	Q_OBJECT

public:
	UdpServer(QWidget *parent = 0);
	~UdpServer();

private:
	Ui::UdpServerClass ui;
};

#endif // UDPSERVER_H
