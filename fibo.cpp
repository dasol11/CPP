
#include <stdio.h>

void fibo(int n)
{
	int f1 = 0, f2 = 1, f3, i;
	if (n == 1)
		printf("%d", f1);
	else
		printf("%d %d ", f1, f2);
	for (i = 0; i < n - 2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;

		
	}
}
int main(void)
{

	int n;
	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ���� : ");
	scanf("%d", &n);
	if (n < 1)
	{
		printf("1�̻��� ������ �Է��ϼ���. \n");
		return -1;

	}
	fibo(n);
	return 0;

	}