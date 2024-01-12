#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *low, *high;

	low = (double*)malloc(sizeof(double));
	high = (double*)malloc(sizeof(double));
	if (low == 0 || high == 0)
	{
		printf("메모리 공간이 부족합니다.\n");
		exit(1);
	}
	printf("최고기온을 입력하세요 : ");
	scanf("%lf %lf", low, high);
	printf("일교차는 %.1lf도입니다. \n", (*low + *high) / 2);

	free(low);
	free(high);

	return 0;
	
}