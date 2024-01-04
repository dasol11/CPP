#include <stdio.h>

int main(void)
{
	int num = 1;
	
	for (num = 1; num < 10; num++)
	{	
		printf("여기는 첫번째 %d \n", num);
		for (num = 1; num < 5; num++)
		{
			printf("여기는 2번째 for %d \n", num);

		}
	}
	return 0;
}