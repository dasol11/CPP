
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
	printf("출력하고자 하는 피보나치 수열의 갯수 : ");
	scanf("%d", &n);
	if (n < 1)
	{
		printf("1이상의 정수를 입력하세요. \n");
		return -1;

	}
	fibo(n);
	return 0;

	}