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
	printf("�й� : ");
	scanf("%d", &list.num);
	printf("�̸� : ");
	scanf("%s", &list.name);
	printf("���� : ");
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
	printf("�й� : %d", list.num);
	printf("�̸� : %s", list.name);
	printf("���� : %d %d %d %d %d ", list.s1, list.s2, list.s3, list.s4, list.s5);
	
	printf("��� : %d", list.avg);

}