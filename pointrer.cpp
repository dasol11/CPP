#include <stdio.h>

int main(void)
{

	int arr[] = { 11,22,33 };
	int* ptr = arr;
	// *ptr + 1�̸� 11 + 1 ����� ���� 11 �� �ҷ����� 1 ���ϱ�
	// *(ptr+1)�̸� �ּ�+4
	printf("%d %d %d", *ptr, *(ptr + 1), *ptr + 1);

}