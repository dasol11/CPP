#include <stdio.h>

int main(void)
{	
	int dan, num;

	for (dan = 2; dan < 10; dan += 2)
	{
		for (num = 1; num <= dan; num++)
		{
			printf("%d x %d = %d \n", dan, num, dan * num);
		}
	}


}