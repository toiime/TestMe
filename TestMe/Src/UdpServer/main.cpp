#include "udpServer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UdpServer w;
	w.show();
	return a.exec();
}
