#include "testMe.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestMe w;
	w.show();
	return a.exec();
}
