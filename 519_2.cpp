#include <stdio.h>


struct cracker 
{
	int price;
	int cal;

};

int main(void)
{
	struct cracker basasac;

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d%d", &basasac.price, &basasac.cal);

	printf("�ٻ���� ���� : %d ��\n", basasac.price);
	printf("�ٻ���� ���� : %d kcal\n", basasac.cal);
	return 0;
}