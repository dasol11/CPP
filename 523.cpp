#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int mat;
};

int main(void)
{
	// 구조체 배열
	struct score dasol[2] = {
		{10,20,30},
		{40,50,60}
	};


	struct score* ps = &dasol[0]; // 구조체 포인터에 주소 할당
	printf("국어 : %d\n", (*ps).kor); // 구조체 포인터로 접근
	printf("영어 : %d\n", ps->eng); //-> 연산자로 구조체 접근
	printf("수학 : %d\n", dasol[1].mat); //구조체 배열로 접근
}