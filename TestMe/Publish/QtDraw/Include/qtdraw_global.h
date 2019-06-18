#ifndef QTDRAW_GLOBAL_H
#define QTDRAW_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef QTDRAW_LIB
# define QTDRAW_EXPORT Q_DECL_EXPORT
#else
# define QTDRAW_EXPORT Q_DECL_IMPORT
#endif

#endif // QTDRAW_GLOBAL_H
