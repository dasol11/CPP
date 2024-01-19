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
			nullptr,		// �⺻ ���� �Ӽ�
			0,				// �⺻ ���� ������ (1MB : �ּ� ������)
			ThreadProc,		// ������ �Լ�
			nullptr,		// ������ �Լ��� �Ű������� ���� ����
			0,				// ����Ʈ ���� flag
			&dwThreadId[i]  // ������ ID�� ���޹ޱ� ���� ����
		);

	}

	// ��� ������ ������ �Ϸ�� ������ ����Ѵ�.
	WaitForMultipleObjects(NUM_THREADS, hThread, TRUE, INFINITE);

	_tprintf(_T("Count : %d\n"), count);

	for (UINT i = 0; i < NUM_THREADS; ++i)
	{
		CloseHandle(hThread[i]);
	}
	return 0;
}