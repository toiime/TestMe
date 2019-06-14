#include "udpReceiver.h"

UdpReceiver::UdpReceiver(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	_qUdpSocket = new QUdpSocket;
	_qHostAddress = "127.0.0.1";
	_port = 5400;

	// _qUdpSocket->bind(_qHostAddress, _port); // 绑定 IP
	_qUdpSocket->bind(_port, QUdpSocket::ShareAddress); // 广播

	connect(_qUdpSocket, &QUdpSocket::readyRead, this, &UdpReceiver::SlotReceive);
}

UdpReceiver::~UdpReceiver()
{
	if (_qUdpSocket) {
		delete _qUdpSocket;
		_qUdpSocket = nullptr;
	}
}

void UdpReceiver::SlotReceive() {
	QByteArray ba;
	while (_qUdpSocket->hasPendingDatagrams()) {
		ba.resize(_qUdpSocket->pendingDatagramSize());
		_qUdpSocket->readDatagram(ba.data(), ba.size());

		QString textEditText = ui.textEdit->toPlainText();
		textEditText += ba;
		textEditText += "\n";
		ui.textEdit->setPlainText(textEditText);
	}
}
