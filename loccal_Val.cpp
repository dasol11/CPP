#include <stdio.h>

int main(void)
{
	int num = 1;
	
	for (num = 1; num < 10; num++)
	{	
		printf("����� ù��° %d \n", num);
		for (num = 1; num < 5; num++)
		{
			printf("����� 2��° for %d \n", num);

		}
	}
	return 0;
}