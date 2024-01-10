#include <stdio.h>
#include <string.h>


// swap(문자열 포인터 , 변수 포인터, 변수 포인터)
void swap(char* type, void* ap, void* ab);


int main(void)
{
	int age1, age2;
	double  h1, h2;

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age1, &h1);
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age2, &h2);
	
	swap("int", &age1, &age2);
	swap("double", &h1, &h2);

	printf("첫 번째 사람의 나이와 키 : %d, %.1f \n",age1,h1);
	printf("두 번째 사람의 나이와 키 : %d, %.1f \n", age2, h2);

	return 0;
}


void swap(char *type, void* ap, void *bp)
{
	int temp;
	double dtemp;
	// strcmp(a, b) --> a,b가 같으면 0 출력해주는 함수
	if (strcmp(type, "int")==0)
	{	//void 포인터는 자료형이 없기 때문에 자료형을 넣어줘야함
		temp = *(int*)ap;
		*(int*)ap = *(int*)bp;
		*(int*)bp = temp;
	}

	if (strcmp(type, "double")==0)
	{
		dtemp = *(double*)ap;
		*(double*)ap = *(double*)bp;
		*(double*)bp = dtemp;

	}
}

