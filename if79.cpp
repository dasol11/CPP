
#include <stdio.h>


int main(void)
{	
	int n,num ;
	printf("1~100���� ���� �Է� : ");
	scanf("%d", &n);

	for (num = 1; num <= n; num++)
	{
		if ((num % 7) == 0)
			printf("%d \n", num);
		else if ((num % 9) == 0)
			printf("%d \n", num);

	}

}