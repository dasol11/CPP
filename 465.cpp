#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int* pa = &a, * pb = &b;
	int** ppa = &pa, ** ppb = &pb;
	int* pt;
	
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
	printf("%d, %d\n", a, b);
	printf("%d, %d\n", *pa, *pb);
	return 0;

}