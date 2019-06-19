#include "./QtDraw/Include/qtDraw.h"

#include <QDebug>

QtDraw::QtDraw() {

}

QtDraw::~QtDraw() {

}

void QtDraw::DrawText(QPainter* painter, QStringList textList, int x, int y) {

	painter->save();

	QPen pen;
	pen.setStyle(Qt::DotLine);                // 线型
	pen.setWidth(2);                          // 线色
	pen.setColor(QColor(0, 0, 255, 30));      // 线宽
	painter->setPen(pen);

	// 绘制基准点
	painter->drawEllipse(QPoint(x, y), 5, 5);

	QFont font(QStringLiteral("楷体"), 20);
	painter->setFont(font);

	// 文字宽高
	QFontMetrics fm(font);
	int pixelsWide = 0;
	int pixelsHigh = fm.height();
	for (auto& l : textList) {
		if (fm.width(l) > pixelsWide) {
			pixelsWide = fm.width(l);
		}
	}

	// 绘制文字
	int index = 0;
	for (auto& l : textList) {
		painter->drawText(x, y + pixelsHigh * index++, pixelsWide, pixelsHigh, 0, l);
	}
	// 绘制边框
	painter->drawRect(x, y, pixelsWide, pixelsHigh * textList.size());

	painter->restore();
}
