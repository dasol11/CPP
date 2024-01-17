




#include <stdio.h>
#include <tchar.h>
#include <windows.h>

#define DIR_LEN MAX_PATH+1

int _tmain(int argc, TCHAR* argv[])
{
	STARTUPINFO si = { 0, }; // 구조체 선언
	PROCESS_INFORMATION pi;
	
	si.cb = sizeof(si); 
	si.dwFlags = STARTF_USEPOSITION | STARTF_USESIZE; // dwX와 dwY를 참조하여 윈도우의 위치와 크기 설정
	si.dwX = 100;
	si.dwY = 200;
	si.dwXSize = 300;
	si.dwYSize = 200;
	si.lpTitle = _T("I am a boy!"); // 구조체 멤버 변수 초기화

	TCHAR command[] = _T("AdderProcess.exe 10 20");
	TCHAR cDir[DIR_LEN];
	BOOL state;
	
	GetCurrentDirectory(DIR_LEN, cDir);//현재 디렉터리의 주소 반환
	_fputts(cDir, stdout); //C:\Users\user\source\repos\Project1 
	_fputts(_T("\n"), stdout);
	
	SetCurrentDirectory(_T("C:\\WinSystem")); 

	GetCurrentDirectory(DIR_LEN, cDir);//현재 디렉터리의 주소 반환
	_fputts(cDir, stdout);
	_fputts(_T("\n"), stdout);
	
	state = CreateProcess(
		NULL,
		command,
		NULL, NULL, TRUE,
		CREATE_NEW_CONSOLE,
		NULL, NULL, &si, &pi
		); // 프로세스 생성

	if (state != 0)
		_fputts(_T("Creation OK! \n"), stdout);
	else
		_fputts(_T("Creation Error! \n"), stdout);
	
	return 0;

}


