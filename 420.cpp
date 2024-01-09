#include <stdio.h>


int main(void)
{
	
	int arr[3][4] = { 0, };
	int low = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("%d\n", low);
	printf("%d\n", col);



}