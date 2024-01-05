#include <stdio.h>

int main(void)

{
	int arr[6] = { 1,2,3,4,5,6 };

	int* ptr = arr;
	int i, temp ;

	for (i = 0; i < 3; i++)
	{
		temp = arr[i];
		arr[i] = arr[(6 - i) - 1];
		arr[(6 - i) - 1] = temp;

	}

	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);

	printf("\n");

}