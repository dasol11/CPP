




#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int _tmain(int argc, TCHAR* argv[])
{
	HANDLE hReadPipe, hWritePipe; // pipe handle

	TCHAR sendString[] = _t("anonymous pipe ");
	TCHAR recvString[100];
	
	DWORD bytesWritten;
	DWORD byteRead;

	// pipe ����
	CreatePipe(&hReadPipe, &hWritePipe, NULL, 0);

	// pipe�� ���� ���� �̿��� ������ �۽�
	WriteFile(
		hWritePipe, sendString,
		lstrlen(sendString) * sizeof(TCHAR), &bytesWritten,
		NULL);
	_tprintf(_T("string sned : %s\n"), sendString);


	// pipe �ٸ� ���� ���� �̿��� ������ ����
	ReadFile(
		hReadPipe, recvString,
		bytesWritten, &byteRead,
		NULL);
	recvString[byteRead / sizeof(TCHAR)] = 0;
	_tprintf(_T("string recv : %s \n"), recvString);
	CloseHandle(hReadPipe);
	CloseHandle(hWritePipe);
	return 0; 




}