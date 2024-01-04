#include <stdio.h>

int main(void)
{
	int n;
	int num;
	int answer = 1;
	printf("정수를 입력해주세여 : ");
	scanf("%d", &n);

	for (num = 1; num <= n; num++)
	{
		answer *= num;

	}
	printf("%d !은 %d 입니다",n,answer);
	return 0;
}



	