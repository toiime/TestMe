#ifndef LIB_EXPORT_H_
#define LIB_EXPORT_H_

#ifdef WINDOWSCMD_EXPORTS
#define WINDOWSCMD_EXPORTS_ __declspec(dllexport)
#else
#define WINDOWSCMD_EXPORTS_ __declspec(dllimport)
#endif

#endif // !LIB_EXPORT_H_