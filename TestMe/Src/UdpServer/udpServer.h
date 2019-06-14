#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QtWidgets/QWidget>
#include "ui_udpServer.h"

#include <QUdpSocket>

class UdpServer : public QWidget
{
	Q_OBJECT

public:
	UdpServer(QWidget *parent = 0);
	~UdpServer();

protected:
	void keyPressEvent(QKeyEvent *event);

private:
	void SlotSendText();

private:
	Ui::UdpServerClass ui;

	QUdpSocket* _qUdpSocket;
	QHostAddress _qHostAddress;  // IP
	quint16 _port;               // 端口
};

#endif // UDPSERVER_H
