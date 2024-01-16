#define UNICODE
#define _UNICODE

#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int wmain(void)
{
	TCHAR str[] = _T("1234567");
	int size = sizeof(str);
	wprintf(L"string length : %d \n", size);
	printf("string length : %d \n", size);
	_tprintf(_T("string length : %d \n"), size);
	return 0;

}