#include <stdio.h>

void input_chr(char(*)[80]);
void print_chr(char(*)[80]);

int main(void)
{

	char text[5][80];

	input_chr(text);
	print_chr(text);

}


void input_chr(char(*p)[80])
{	
	int i; 
	printf("�ټ� ���� ������ �Է��ϼ���.\n");
	for (i = 0; i < 5; i++)
	{
		gets_s(p[i],sizeof(p[i]));
		
	}
	
	
}

void print_chr(char(*p)[80])
{

	int i;
	printf("�Էµ� ������ ...");

	for (i = 0; i < 5; i++)
	{
		printf("%s \n", p[i]);
	}
}