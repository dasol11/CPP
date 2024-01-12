#include <stdio.h>
#include <string.h>


void init_intro(char(*intro)[80], char** pint); 
int input_intro(char(*intro)[80]);
void sort_intro(char** pint, int cnt);
void print_intro(int mode, void* vp, int cnt);


int main(void)
{
	char intro[10][80];
	char* pint[10];
	int cnt;

	init_intro(intro, pint);
	cnt = input_intro(intro);
	sort_intro(pint, cnt);
	print_intro(1, pint, cnt);
	print_intro(0, intro, cnt);

	return 0;

}

void init_intro(char(*intro)[80], char** pint)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		pint[i] = intro[i];

	}
}

int input_intro(char(*intro)[80])
{
	int cnt = 0;
	char temp[80];

	while (1)
	{
		printf("인사말 입력 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		strcpy(intro[cnt], temp);
		cnt++;
	}
	return cnt;
}

void sort_intro(char** pint, int cnt) 
{
	int i, j;
	char *temp_c;
	// intro의 값은 그대로 있고
	// pint가 가르키는 주소값을 변경함
	// 따라서 정렬된 순서대로 pint에 저장되는 구조

	for (i = 0; i < cnt - 1; i++)
	{
		for (j = i + 1; j < cnt; j++);
		{
			if (strcmp(pint[i], pint[j]) > 0)
				// strcmpe(str1,str2)
				// str1>str2  return 1
				// str1<str2  return -1
			{
				temp_c = pint[i];
				pint[i] = pint[j];
				pint[j] = temp_c;
			}

		}
	}


}

void print_intro(int mode, void* vp, int cnt)
{
	int i;

	if (mode == 0)
	{
		char(*intro)[80] = vp;
		printf("\n입력순으로 출력...\n");
		for (i = 0; i < cnt; i++)
		{
			printf("%s\n", intro[i]);

		}
	}
	else if (mode == 1)
	{	
		char**pint = vp;
		printf("\n사전순으로 출력...\n");
		for (i = 0; i < cnt; i++)
		{
			printf("%s\n", pint[i]);

		}
	}
}