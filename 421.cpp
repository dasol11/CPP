#include <stdio.h>


char main(void)
{

	const char *arr[5][5] = { };
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j) arr[i][j] = "x";

		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%s ", arr[i][j]);
		}
		printf("\n");
	}
}