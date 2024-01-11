#include <stdio.h>

int input_data(void);
double average(void);
void print_data(double);

int count = 0;
static int total = 0; // 정적변수 선언으로 main.c 안에서만 사용 가능함

int main(void)
{
	double avg;
	total = input_data(); // input.c 에서 계산된 total을 반환 받아서 저장
	avg = average();
	print_data(avg);

	return 0;
}

void print_data(double avg)
{
	printf(" 입력한 양수의 개수 : %d\n", count);
	printf(" 전체 합과 평균: %d, %.1lf\n", total, avg);
}