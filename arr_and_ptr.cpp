#include <stdio.h>


int main(void)
{
	int arr[3] = { 2, 1, 4 };
	int* pa = arr;
	int arr2[3] = { 10, 9, 8 };
	int* pa2 = arr2;

	int i;

	for (i = 0; i < 3; i++)
	{	
		// �����Ͱ� ����Ű�� ���� ������ ���̽�
		printf("%5d \n", (*pa2)++);

		// �������� �ּҰ��� ������ ���̽�
		printf("%5d \n", *(pa++));
		


	}
}