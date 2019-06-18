#ifndef EXECUTE_QT_DRAW_H_
#define EXECUTE_QT_DRAW_H_

#include "QtDraw/Include/qtDraw.h"

class ExecuteQtDraw {
public:
	ExecuteQtDraw();
	~ExecuteQtDraw();

	void Execute(QPainter* painter);

	QtDraw _qtDraw;
};

#endif // !EXECUTE_QT_DRAW_H_