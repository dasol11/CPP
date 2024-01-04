
#include <stdio.h>


int main(void)
{
	int n, m, answer;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n == m)
				continue;
			answer = (n * 10 + m) + (m * 10 + n);
			if (answer == 99)
				printf("%d%d+%d%d=%d \n", n, m, m, n, answer);

		}

	}

}