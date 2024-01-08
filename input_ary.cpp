#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);


int main(void) {

	double arr[5];
	double max;
	int size = sizeof(arr) / sizeof(arr[0]);

	input_ary(arr, size);
	max = find_max(arr, size);
	printf("%.1lf \n",max);
	return 0;

}


void input_ary(double* pa, int size) {
	int i;
	printf("%d개의 실수 입력: ", size );
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", pa + i);

	}
	
}

double find_max(double* pa, int size) {

	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++) {
		if (pa[i] > max)max = pa[i];

	}
	return max;
}