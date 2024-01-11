#include <stdio.h>

int main(void)
{

	FILE* fp; //파일 포인터
	int i;
	char str[] = "banana";

	fp = fopen("b.txt", "w");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.");
		return 1;

	}
	i = 0;

	while (str[i] != '\0')
	{
		fputc(str[i], fp); // 문자를 파일에 출력
		i++;
	}
	fputc('\n', fp);
	fclose(fp);
	return 0;

}