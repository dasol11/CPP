#include <stdio.h>

void func(void);


int a = 10;

int main(void)
{
	printf("�������� a�Է� ���� �޸� �ּ� : %p\n", &a);
	a = 20;
	printf("�������� a�� �޸� �ּ� : %p\n", &a);

	func();
	printf("%d\n", a);
	printf("��µ� a�� �޸��ּ� : %p\n", &a);

	return 0;

}


void func(void)
{
	a = 30;
}
