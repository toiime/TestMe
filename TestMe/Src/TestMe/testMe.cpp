#include "testMe.h"

#include <QMessageBox>
#include <QPainter>

#include "./ExecuteCmd/executeCmd.h"


TestMe::TestMe(QWidget *parent) : QWidget(parent) {
	ui.setupUi(this);

	connect(ui.pushButtonTest, &QPushButton::clicked, this, &TestMe::SlotTest);
}

TestMe::~TestMe() {

}

void TestMe::SlotTest() {
	ExecuteCmd executeCmd;
	executeCmd.Execute();
}

void TestMe::paintEvent(QPaintEvent *event) {

	QPainter painter(this);

	_executeQtDraw.Execute(&painter);
}
