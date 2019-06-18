#ifndef TESTME_H
#define TESTME_H

#include <QtWidgets/QWidget>
#include "ui_testMe.h"

#include "./ExecuteQtDraw/executeQtDraw.h"

class TestMe : public QWidget
{
	Q_OBJECT

public:
	TestMe(QWidget *parent = 0);
	~TestMe();


protected:
	void paintEvent(QPaintEvent *event);


private:
	void SlotTest();


private:
	Ui::TestMeClass ui;

	ExecuteQtDraw _executeQtDraw;
};

#endif // TESTME_H
