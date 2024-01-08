#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);


int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int i,j;
	int num;
	for (i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &num);
		
		for (j = 0; j < i; j++)
		{
			if (num == lotto_nums[j])
			{	
				printf("���� ��ȣ�� �ֽ��ϴ�! \n");
				printf("��ȣ �Է� : ");
				scanf("%d", &num);
			}

		}
		
		lotto_nums[i] = num;
	}

}


void print_nums(int* lotto_nums)
{
	int i;
	printf("�ζ� ��ȣ : ");
	
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	
	}
	
}