#ifndef UDPRECEIVER_H
#define UDPRECEIVER_H

#include <QtWidgets/QWidget>
#include "ui_udpReceiver.h"

#include <QUdpSocket>

class UdpReceiver : public QWidget
{
	Q_OBJECT

public:
	UdpReceiver(QWidget *parent = 0);
	~UdpReceiver();

private:
	void SlotReceive();

private:
	Ui::UdpReceiverClass ui;

	QUdpSocket* _qUdpSocket;
	QHostAddress _qHostAddress;  // IP
	quint16 _port;               // 端口
};

#endif // UDPRECEIVER_H
