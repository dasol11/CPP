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
			printf("10�� ��� �Է��߽��ϴ�.\n");
			break;
		}
		printf("�̸� : ");
		scanf("%s", temp);
		
		if (strcmp(temp, "end") == 0) break; //temp�� end���� Ȯ��
		if (dup_check(name, temp, cnt)) // �ߺ� Ȯ��
		{
			printf("�̹� ��ϵǾ����ϴ�. \n");
			continue; // ���� �ڵ� ���� ���ϰ� while���� �ٽ� ����

		}
		strcpy(name[cnt], temp); //name�� cnt�࿡ temp ����
		cnt++;
	}

	return cnt;

}

int dup_check(char(*name)[20], char* temp, int cnt) 
{	
	int i;
	for (i = 0; i < cnt; i++) // name[0]���� name[cnt]���� temp�� ������ Ȯ��
	{
		if (strcmp(name[i], temp) == 0) return 1; // �ߺ��� ������ 1�� �����ؼ� if�� Ȱ��ȭ
	}
	return 0; 
}	

void print_name(char(*name)[20], int cnt)
{	
	int i;
	printf("�� %d���� �ԷµǾ����ϴ�.\n", cnt);
	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", name[i]);
	}
	
}