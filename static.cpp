#include <stdio.h>



int AddToTotal(int num)
{
	int static total = 0;
	total += num;
	return total;

}

int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);
		printf("����: %d \n" ,AddToTotal(num));

	}
	return 0;
}