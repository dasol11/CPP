#include <stdio.h>
#include <string.h>

int main(void)
{
	wchar_t str[] = L"ABC"; // �����ڵ� ���ڿ�
	int size = sizeof(str);
	int len = wcslen(str); // strlen�� ����ϸ� �����ڵ����� ���ڿ��̱� ������ �����Ͽ��� �߻�  
	
	printf("�迭�� ũ��: %d \n", size);
	printf("���ڿ� ũ��: %d \n", len);
	
	return 0;

}