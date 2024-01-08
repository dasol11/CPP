#include <stdio.h>

void swap(int *pa, int *pb);


int main(void)

{
	int a = 10, b = 20;
	
	int *pa = &a;
	int *pb = &b;


	swap(pa, pb);
	printf("%d, %d \n", a, b);
	return 0;

}

void swap(int *pa, int *pb)
{
	int temp;

	temp = *pa;

	*pa = *pb;
	*pb = temp;

	
}