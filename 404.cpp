#include <stdio.h>

int* sum(int a, int b);
int* get_num(void);


int main(void)
{
	int *resp;

	resp = sum(10, 20);
	printf("두 정수의 합 : %d \n", *resp);

	int *n;
	n = get_num();
	printf("%d,\n", n);
	return 0;
}

int* sum(int a, int b)
{
	int res;
	res = a + b;

	return &res;
}

int* get_num(void)
{
	static int n;
	scanf("%d", &n);
	return &n;

}