#include <stdio.h>

void add_ten(int* pa);

int main(void)
{

	int a = 10;
	add_ten(&a);

	printf("a : %d", a);

	return 0;

}

void add_ten(int* pa)
{
	*pa += 10;

}