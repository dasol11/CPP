#include <stdio.h>
#include <tchar.h>
#include <windows.h>

#define NUM_THREADS 16

UINT count = 0;

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	for (UINT i = 0; i < 10000; ++i)
	{
		++count;
	}
	return 0;
}

int _tmain(int argc, TCHAR* argv[])
{
	DWORD dwThreadId[NUM_THREADS];
	HANDLE hThread[NUM_THREADS];

	for (UINT i = 0; i < NUM_THREADS; ++i)
	{
		hThread[i] = CreateThread(
			nullptr,		// 기본 보안 속성
			0,				// 기본 스택 사이즈 (1MB : 최소 사이즈)
			ThreadProc,		// 쓰레드 함수
			nullptr,		// 쓰레드 함수의 매개변수를 위한 인자
			0,				// 디폴트 생성 flag
			&dwThreadId[i]  // 쓰레드 ID를 전달받기 위한 인자
		);

	}

	// 모든 쓰레드 실행이 완료될 때까지 대기한다.
	WaitForMultipleObjects(NUM_THREADS, hThread, TRUE, INFINITE);

	_tprintf(_T("Count : %d\n"), count);

	for (UINT i = 0; i < NUM_THREADS; ++i)
	{
		CloseHandle(hThread[i]);
	}
	return 0;
}