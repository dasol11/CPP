#include <stdio.h>

int main(void)
{
	int n;
	int num;
	int answer = 1;
	printf("������ �Է����ּ��� : ");
	scanf("%d", &n);

	for (num = 1; num <= n; num++)
	{
		answer *= num;

	}
	printf("%d !�� %d �Դϴ�",n,answer);
	return 0;
}



	