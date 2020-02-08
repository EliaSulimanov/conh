#ifndef CONH_LIBRARY_H
#define CONH_LIBRARY_H

#define EXPORT __declspec(dllexport)

#ifndef _TIME_H
#include <time.h>
#endif
#ifndef _WINDOWS_H
#include <windows.h>
#endif

EXPORT void delay(int milli);

EXPORT void clear(void);

EXPORT void gotoxy(int x, int y);

EXPORT int execnoutput(char *cmd);

#endif //CONH_LIBRARY_H