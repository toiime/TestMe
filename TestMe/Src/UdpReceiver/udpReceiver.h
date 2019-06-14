#ifndef UDPRECEIVER_H
#define UDPRECEIVER_H

#include <QtWidgets/QWidget>
#include "ui_udpReceiver.h"

class UdpReceiver : public QWidget
{
	Q_OBJECT

public:
	UdpReceiver(QWidget *parent = 0);
	~UdpReceiver();

private:
	Ui::UdpReceiverClass ui;
};

#endif // UDPRECEIVER_H
