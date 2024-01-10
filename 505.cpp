#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student //구조체 선언
{
	char name[10];
	int age;
	double high;
	char* selfintro;
}; // 세미콜론 사용

int main(void)
{

	struct student s1; // 구조체 변수 선언
	strcpy(s1.name, "Dasol");
	s1.age = 30;
	s1.high = 178.2;
	s1.selfintro = (char*)malloc(200);
	printf("자기소개 : ");
	gets_s(s1.selfintro, sizeof(s1.selfintro));

	printf("이름 : %s\n", s1.name);
	printf("나이 : %d\n", s1.age);
	printf("키 : %.1lf\n", s1.high);
	printf("자기소개 : %s\n", s1.selfintro);
	return 0;
	free(s1.selfintro);

}