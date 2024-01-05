#include <stdio.h>


int main(void)
{
	int num1 = 10 ,num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int temp;
	num1 += 10;
	num2 -= 10;
	
	//스왑을 위한 과정
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;


	
	printf("%d, %d \n", *ptr1, *ptr2);

	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };

	*arr1 += 100;
	*arr2 += 20;

	printf("%d, %g \n", arr1[1], arr2[2]);



	
	return 0;
}