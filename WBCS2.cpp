#include <stdio.h>
#include <string.h>

int main(void)
{
	wchar_t str[] = L"ABC"; // �����ڵ� ���ڿ�
	int size = sizeof(str);
	int len = wcslen(str); // strlen�� ����ϸ� �����ڵ����� ���ڿ��̱� ������ �����Ͽ��� �߻�  

	wprintf(L"Array Size : %d \n", size);
	wprintf(L"String Length : %d \n", len);

	return 0;

}