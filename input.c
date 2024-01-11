#include <stdio.h>
// input.c의 컴파일러는 main.c의 전역 변수를 모름
// 따라서 extern을 사용하여 변수를 연결해줌
extern int count;
int total = 0;// main.c의 total 과는 다른 변수임

int input_data(void)
{
	int pos;
	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0)break;
		count++;
		total += pos;
	}
	return total;

}

