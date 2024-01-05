#include <stdio.h>

int SquareByValue(int n)
{
	n = n * n;

	printf("%d \n", n);
	return 0;

}
int SquareByReference(int* ptr)
{

	*ptr = *ptr * *ptr;
	return 0;
}
int main(void)
{
	int num = 5;

	printf("%d \n", num);

	SquareByValue(num);

	printf("%d \n", num);
	
	SquareByReference(&num);
	
	printf("%d \n", num);

}