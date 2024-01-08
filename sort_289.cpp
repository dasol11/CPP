#include <stdio.h>
void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);


int main(void)
{

	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);

	printf("정렬된 값 출력 : %.1lf , %.1lf , %.1lf \n", max ,mid, min);
	
	int a = 10;

	int* pa = &a;

	//printf("%d \n", a);
	//printf("%#x \n", pa);
	//printf("%#x \n", &a);


	return 0;


}


void swap(double *pa, double *pb)

{

	double temp;
	

	temp = *pa;
	*pa = *pb;
	*pb = temp;


}

void line_up(double *maxp, double *midp, double *minp)
{	// *maxp mxap 가 가르키는 변수의 값을 비교
	// 함수에 넣을 때는 포인터 그대로 넣어서 swap이 주소값을 받음
	if (*maxp < *midp) swap(maxp, midp);

	if (*maxp < *minp) swap(maxp, minp);

	if (*midp < *minp) swap(midp, minp);
	
}


