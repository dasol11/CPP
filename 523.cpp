#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int mat;
};

int main(void)
{
	// ����ü �迭
	struct score dasol[2] = {
		{10,20,30},
		{40,50,60}
	};


	struct score* ps = &dasol[0]; // ����ü �����Ϳ� �ּ� �Ҵ�
	printf("���� : %d\n", (*ps).kor); // ����ü �����ͷ� ����
	printf("���� : %d\n", ps->eng); //-> �����ڷ� ����ü ����
	printf("���� : %d\n", dasol[1].mat); //����ü �迭�� ����
}