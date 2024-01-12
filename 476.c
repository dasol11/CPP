#include <stdio.h>
#include <string.h>

//(strcmp(type, "int") == 0)

void swap(char* type, void* pa, void* pb);


int main(void)
{
	int age1, age2;
	double h1, h2;

	printf("첫 번째 사람의 나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age1, &h1);
	printf("두 번째 사람의 나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age2, &h2);

	swap("int", &age1, &age2);
	swap("double", &h1, &h2);


	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, h1);
	printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", age2, h2);
	return 0; 
}
	
void swap(char* type, void* pa, void* pb)
{
	int temp;
	double d_temp;


	if (strcmp(type, "int") == 0)
	{
		temp = *(int*)pa;
		*(int*)pa = *(int*)pb;
		*(int*)pb = temp;

	}
	if (strcmp(type, "double") == 0)
	{
		d_temp = *(double*)pa;
		*(double*)pa = *(double*)pb;
		*(double*)pb = d_temp;

	}

}