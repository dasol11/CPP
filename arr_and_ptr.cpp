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
		// 포인터가 가르키는 값을 변경한 케이스
		printf("%5d \n", (*pa2)++);

		// 포인터의 주소값을 변경한 케이스
		printf("%5d \n", *(pa++));
		


	}
}