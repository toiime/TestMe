#include "executeQtDraw.h"


ExecuteQtDraw::ExecuteQtDraw() {

}

ExecuteQtDraw::~ExecuteQtDraw() {

}

void ExecuteQtDraw::Execute(QPainter* painter) {
	QStringList stringList;
	stringList << QStringLiteral("阳关万里道，");
	stringList << QStringLiteral("不见一人归。");
	stringList << QStringLiteral("惟有河边雁，测试文字");
	stringList << QStringLiteral("秋来南向飞。");

	int x = 20;
	int y = 20;

	_qtDraw.DrawText(painter, stringList, x, y);
}