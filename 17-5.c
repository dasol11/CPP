#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	int num;
	char name[20];
	double weight;

}Fitness;

int input_member(Fitness** pary); // 전체 등록 회원 수 반환
double average_weight(Fitness** pary, int cnt); // 평균 체중 반환

int max_wight(Fitness** pary, int cnt); // 최대 체중 회원의 배열 index 반환
void print_info(Fitness** pary, int index); // 회원 정보 출력
void free_ary(Fitness** pary, int cnt); // 동적 할당 영역 해제


int main(void)
{
	Fitness *ps[100];
	int cnt, idx;
	double avr;


	cnt = input_member(ps);
	avr = average_weight(ps, cnt);
	idx =  max_wight(ps , cnt); // 최대 체중 회원의 배열 index 반환
	printf("# 총 회원 수 : %d\n", cnt);

	printf("# 평균 체중 : %.1lf\n", avr);

	printf("# 체중이 가장 무거운 회원은?\n");
	average_weight(ps, idx);
	print_info(ps , idx);
	free_ary(ps,  cnt);

	return 0;

}


int input_member(Fitness** pary)
{	
	Fitness* tp;
	char name[20];
	double weight;
	int n;
	int cnt ;

	for(cnt = 0;;cnt++)
	{
		printf("회원 번호 : ");
		scanf("%d", &n);
		if (n <0) break;
		printf("이름 입력 : ");
		scanf("%s", name);
		printf("체중 입력 : ");
		scanf("%lf", &weight);
		tp = (Fitness*)malloc(sizeof(Fitness));
		tp->num = n;
		strcpy(tp->name, name); // 여기 strcpy 안하고 접근하는 방법?
		tp->weight = weight;
		pary[cnt] = tp;
		

	}
	return cnt;
}

double average_weight(Fitness** pary, int cnt)
{
	double total = 0;
	int i;

	for (i = 0; i < cnt; i++)
	{
		total += (*pary)->weight;
	}

	return total / 3.0;

}


int max_wight(Fitness** pary, int cnt)
{	
	double max =0;
	int i;
	int save_idx = 0;

	for (i = 0; i < cnt; i++)
	{
		if (pary[i]->weight > max)
		{
			max = pary[i]->weight;
			save_idx = i;
		}
	}
	return save_idx;



}

void print_info(Fitness** pary, int index)
{
	printf("회원 번호 : %d\n", pary[index]->num);

	printf("이름 : %s\n", pary[index]->name);

	printf("체중 : %.1lf\n", pary[index]->weight);

}
void free_ary(Fitness** pary, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		free(pary[i]);

	}
}