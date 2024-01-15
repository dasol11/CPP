#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	int num;
	char name[20];
	double weight;

}Fitness;

int input_member(Fitness** pary); // ��ü ��� ȸ�� �� ��ȯ
double average_weight(Fitness** pary, int cnt); // ��� ü�� ��ȯ

int max_wight(Fitness** pary, int cnt); // �ִ� ü�� ȸ���� �迭 index ��ȯ
void print_info(Fitness** pary, int index); // ȸ�� ���� ���
void free_ary(Fitness** pary, int cnt); // ���� �Ҵ� ���� ����


int main(void)
{
	Fitness *ps[100];
	int cnt, idx;
	double avr;


	cnt = input_member(ps);
	avr = average_weight(ps, cnt);
	idx =  max_wight(ps , cnt); // �ִ� ü�� ȸ���� �迭 index ��ȯ
	printf("# �� ȸ�� �� : %d\n", cnt);

	printf("# ��� ü�� : %.1lf\n", avr);

	printf("# ü���� ���� ���ſ� ȸ����?\n");
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
		printf("ȸ�� ��ȣ : ");
		scanf("%d", &n);
		if (n <0) break;
		printf("�̸� �Է� : ");
		scanf("%s", name);
		printf("ü�� �Է� : ");
		scanf("%lf", &weight);
		tp = (Fitness*)malloc(sizeof(Fitness));
		tp->num = n;
		strcpy(tp->name, name); // ���� strcpy ���ϰ� �����ϴ� ���?
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
	printf("ȸ�� ��ȣ : %d\n", pary[index]->num);

	printf("�̸� : %s\n", pary[index]->name);

	printf("ü�� : %.1lf\n", pary[index]->weight);

}
void free_ary(Fitness** pary, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		free(pary[i]);

	}
}