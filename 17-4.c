#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct money_box
{
	int w500;
	int w100;
	int w50;
	int w10;

};
typedef struct money_box MoneyBox;

void init(MoneyBox* s);
void save(MoneyBox* s, int unit, int cnt);
int total(MoneyBox* s);


int main(void)
{
	MoneyBox s;
	int unit, cnt, tot;

	init(&s);

	while (1)
	{
		printf("동전의 금액과 개수 : ");
		scanf("%d %d", &unit, &cnt);
		if (unit < 0) break;
		
		save(&s, unit, cnt);

	}
	tot = total(&s);
	printf("총 저금액 : %d", tot);

}

void init(MoneyBox* s)
{
	s->w500 = s->w100 = s->w50 = s->w10 = 0;
}

void save(MoneyBox* s, int unit, int cnt)
{
	if (unit == 500) s->w500 += cnt;
	else if (unit == 100) s->w100 += cnt;
	else if (unit == 50) s->w50 += cnt;
	else if (unit == 10) s->w10 += cnt;

}


int total(MoneyBox* s)
{	
	int tot = 0;
	tot += s->w500 * 500;
	tot += s->w100 * 100;
	tot += s->w50 * 50;
	tot += s->w10 * 10;

	return tot;

}