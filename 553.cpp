#include <stdio.h>

int main(void)
{

	FILE* fp; //���� ������
	int i;
	char str[] = "banana";

	fp = fopen("b.txt", "w");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.");
		return 1;

	}
	i = 0;

	while (str[i] != '\0')
	{
		fputc(str[i], fp); // ���ڸ� ���Ͽ� ���
		i++;
	}
	fputc('\n', fp);
	fclose(fp);
	return 0;

}