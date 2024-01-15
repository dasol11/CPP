#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student
{
	int num;
	char name[20];
	int s1, s2, s3, s4, s5;
	double avg;
};

void input_avg(struct student list);
void cal_avg(struct student list);
void print_avg(struct student list);

int main(void)
{
	struct student list;

	
	input_avg(list);
	cal_avg(list);
	print_avg(list);





}

void input_avg(struct student list)
{
	int i;
	printf("학번 : ");
	scanf("%d", &list.num);
	printf("이름 : ");
	scanf("%s", &list.name);
	printf("점수 : ");
	scanf("%d %d %d %d %d ", &list.s1, &list.s2, &list.s3, &list.s4, &list.s5);
	
	}
	

void cal_avg(struct student list)
{
	int sum;
	sum = list.s1 + list.s2 + list.s3 + list.s4 + list.s5;
	
	list.avg = sum / 5.0;

}
void print_avg(struct student list)
{	
	int i;
	printf("학번 : %d", list.num);
	printf("이름 : %s", list.name);
	printf("점수 : %d %d %d %d %d ", list.s1, list.s2, list.s3, list.s4, list.s5);
	
	printf("평균 : %d", list.avg);

}