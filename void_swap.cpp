#include <stdio.h>
#include <string.h>


// swap(���ڿ� ������ , ���� ������, ���� ������)
void swap(char* type, void* ap, void* ab);


int main(void)
{
	int age1, age2;
	double  h1, h2;

	printf("ù ��° ����� ���̿� Ű �Է� : ");
	scanf("%d%lf", &age1, &h1);
	printf("�� ��° ����� ���̿� Ű �Է� : ");
	scanf("%d%lf", &age2, &h2);
	
	swap("int", &age1, &age2);
	swap("double", &h1, &h2);

	printf("ù ��° ����� ���̿� Ű : %d, %.1f \n",age1,h1);
	printf("�� ��° ����� ���̿� Ű : %d, %.1f \n", age2, h2);

	return 0;
}


void swap(char *type, void* ap, void *bp)
{
	int temp;
	double dtemp;
	// strcmp(a, b) --> a,b�� ������ 0 ������ִ� �Լ�
	if (strcmp(type, "int")==0)
	{	//void �����ʹ� �ڷ����� ���� ������ �ڷ����� �־������
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

