#include "./QtDraw/Include/qtDraw.h"

QtDraw::QtDraw() {

}

QtDraw::~QtDraw() {

}

void QtDraw::DrawText(QPainter* painter, QStringList textList, int x, int y) {
	int index = 0;
	for (auto& l : textList) {
		painter->drawText(x, y + 20 * index++, l);
	}
}
