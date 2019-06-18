#ifndef QTDRAW_H
#define QTDRAW_H

#include "qtdraw_global.h"

#include <QPainter>

class QTDRAW_EXPORT QtDraw {
public:
	QtDraw();
	~QtDraw();

	// 绘制文字
	void DrawText(QPainter* painter, QStringList textList, int x, int y);

private:

};

#endif // QTDRAW_H
