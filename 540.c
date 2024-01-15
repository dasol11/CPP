#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct struct_student
{
	int id;
	char name[20];
	int kor, mat, eng;
	int total;
	double avr;
	char rank;
}student;

void input_list(struct student* list);
void set_rank(struct student* list);
void sort_rank(struct student* list);
void print_list(struct student* list);

int main(void)
{

	student list[5];

	input_list(list);
	set_rank(list);
	printf("# 정렬 전 데이터 ... \n");
	print_list(list);
	sort_rank(list);
	printf("# 정렬 후 데이터 ... \n");
	print_list(list);

}


void input_list(student* list)
{	
	int i ;
	for (i = 0; i < 5; i++)
	{
		printf("학번 : ");
		scanf("%d", &list->id);
		printf("이름 : ");
		scanf("%s", list->name);
		printf("국어, 영어, 수학: ");
		scanf("%d %d %d", &(*list).kor, &list ->eng, &list->mat);
		// (*list).kor == list -> kor
		list++;
	}

}

void set_rank(student* list)
{
	int i;
	for (i = 0; i < 5; i++)
	{	
		list->total = list->kor + list->eng + list->mat;
		list->avr = list->total / 3.0;

		if (list->avr >= 90.0)
		{
			list->rank = 'A';
		}
		else if (list->avr >= 80.0)
		{
			list->rank = 'B';
		}
		else if (list->avr >= 70.0)
		{
			list->rank = 'C';
		}
		else
		{
			list->rank = 'F';
		}
		list++;
	}	
}

void print_list( student* list)
{

	int i;

	for (i = 0; i < 5; i++)
	{
		
		printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n",
			list->id, list->name, list->kor, list->mat,
			list->eng, list->total, list->avr, list->rank);
		list++;
		


	}
}

void sort_rank( student* list)
{
	student temp;
	int i, j;
	int max;

	for (i = 0; i < 4; i++)
	{
		max = i;
		for (j = i + 1; j < 5; j++)
		{
			if (list[max].total < list[j].total)
			{
				max = j;
			}

		}
		if (max != i)
		{
			temp = list[max];
			list[max] = list[i];
			list[i] = temp;
		}
	}
}