#include "compat.h"

int __builtin_parity(int n)
{
	int p = 0;
	while (n > 0) {
		p += n & 1;
		n >>= 1;
	}
	return p & 1;
}

#include <windows.h>

void usleep(__int64 usec)
{
	HANDLE timer;
	LARGE_INTEGER ft;

	ft.QuadPart = -(10 * usec); // Convert to 100 nanosecond interval, negative value indicates relative time

	timer = CreateWaitableTimer(NULL, TRUE, NULL);
	if (timer != NULL) {
		SetWaitableTimer(timer, &ft, 0, NULL, NULL, 0);
		WaitForSingleObject(timer, INFINITE);
		CloseHandle(timer);
	}
}