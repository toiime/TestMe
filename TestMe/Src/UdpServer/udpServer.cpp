#include "udpServer.h"

#include <QMessageBox>
#include <QKeyEvent>


UdpServer::UdpServer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	_qUdpSocket = new QUdpSocket;
	// _qHostAddress = "127.0.0.1"; // 通过 IP 通信
	_qHostAddress = QHostAddress::Broadcast; // 广播
	_port = 5400;

	// 绑定信号槽
	connect(ui.pushButtonSend, &QPushButton::clicked, this, &UdpServer::SlotSendText);

	// 设置鼠标焦点
	ui.lineEditSendText->setFocus();
}

UdpServer::~UdpServer()
{
	if (_qUdpSocket) {
		delete _qUdpSocket;
		_qUdpSocket = nullptr;
	}
}

void UdpServer::SlotSendText() {
	QString sendText = ui.lineEditSendText->text();
	ui.lineEditSendText->clear();

	if (sendText.isEmpty()) {
		return;
	}

	QString textEditText = ui.textEditText->toPlainText();
	textEditText += sendText;
	textEditText += "\n";
	ui.textEditText->setPlainText(textEditText);

	QByteArray msg = sendText.toUtf8();
	_qUdpSocket->writeDatagram(msg, _qHostAddress, _port);
}

void UdpServer::keyPressEvent(QKeyEvent *event) {
	if (event->key() == Qt::Key_Return // 大键盘回车键
		|| event->key() == Qt::Key_Enter) { // 小键盘 Enter 键
		SlotSendText();
	}
}
