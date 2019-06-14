#ifndef TESTME_H
#define TESTME_H

#include <QtWidgets/QWidget>
#include "ui_testMe.h"

class TestMe : public QWidget
{
	Q_OBJECT

public:
	TestMe(QWidget *parent = 0);
	~TestMe();

private:
	void SlotTest();

private:
	Ui::TestMeClass ui;
};

#endif // TESTME_H
