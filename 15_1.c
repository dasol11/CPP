#include <stdio.h>
#include <string.h>

int input_name(char(* name)[20]);
int dup_check(char(*name)[20], char* temp, int cnt);
void print_name(char(*name)[20], int cnt);

int main(void)
{
	char name[10][20];
	int cnt;

	cnt = input_name(name);
	print_name(name, cnt);

	return 0;
}

int input_name(char(*name)[20])//name[][]
{
	int cnt = 0;
	char temp[20];
	char test = 'ww';
	char test2[] = {'1','2'};

	while (1)
	{
		if (cnt == 10)
		{
			printf("10명 모두 입력했습니다.\n");
			break;
		}
		printf("이름 : ");
		scanf("%s", temp);
		
		if (strcmp(temp, "end") == 0) break; //temp가 end인지 확인
		if (dup_check(name, temp, cnt)) // 중복 확인
		{
			printf("이미 등록되엇습니다. \n");
			continue; // 이후 코드 진행 안하고 while문을 다시 시작

		}
		strcpy(name[cnt], temp); //name의 cnt행에 temp 저장
		cnt++;
	}

	return cnt;

}

int dup_check(char(*name)[20], char* temp, int cnt) 
{	
	int i;
	for (i = 0; i < cnt; i++) // name[0]부터 name[cnt]까지 temp와 같은지 확인
	{
		if (strcmp(name[i], temp) == 0) return 1; // 중복이 있으면 1을 리턴해서 if문 활성화
	}
	return 0; 
}	

void print_name(char(*name)[20], int cnt)
{	
	int i;
	printf("총 %d명이 입력되었습니다.\n", cnt);
	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", name[i]);
	}
	
}