#include <stdio.h>


struct cracker 
{
	int price;
	int cal;

};

int main(void)
{
	struct cracker basasac;

	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf("%d%d", &basasac.price, &basasac.cal);

	printf("바사삭의 가격 : %d 원\n", basasac.price);
	printf("바사삭의 열량 : %d kcal\n", basasac.cal);
	return 0;
}