#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *low, *high;

	low = (double*)malloc(sizeof(double));
	high = (double*)malloc(sizeof(double));
	if (low == 0 || high == 0)
	{
		printf("�޸� ������ �����մϴ�.\n");
		exit(1);
	}
	printf("�ְ����� �Է��ϼ��� : ");
	scanf("%lf %lf", low, high);
	printf("�ϱ����� %.1lf���Դϴ�. \n", (*low + *high) / 2);

	free(low);
	free(high);

	return 0;
	
}