#define _CRT_SECURE_NO_WARNINGS

#define __attribute__(...)

#ifdef _MSC_VER
#ifndef PATH_MAX
#include <windows.h>
#define PATH_MAX MAX_PATH
#endif
#endif

#include <stdio.h>

void usleep(__int64 usec);