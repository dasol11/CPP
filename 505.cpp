#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student //����ü ����
{
	char name[10];
	int age;
	double high;
	char* selfintro;
}; // �����ݷ� ���

int main(void)
{

	struct student s1; // ����ü ���� ����
	strcpy(s1.name, "Dasol");
	s1.age = 30;
	s1.high = 178.2;
	s1.selfintro = (char*)malloc(200);
	printf("�ڱ�Ұ� : ");
	gets_s(s1.selfintro, sizeof(s1.selfintro));

	printf("�̸� : %s\n", s1.name);
	printf("���� : %d\n", s1.age);
	printf("Ű : %.1lf\n", s1.high);
	printf("�ڱ�Ұ� : %s\n", s1.selfintro);
	return 0;
	free(s1.selfintro);

}