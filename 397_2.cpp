#include <stdio.h>

void func(void);


int a = 10;

int main(void)
{
	printf("지역변수 a입력 전의 메모리 주소 : %p\n", &a);
	a = 20;
	printf("지역변수 a의 메모리 주소 : %p\n", &a);

	func();
	printf("%d\n", a);
	printf("출력된 a의 메모리주소 : %p\n", &a);

	return 0;

}


void func(void)
{
	a = 30;
}
