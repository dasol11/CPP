#include <stdio.h>


int main(void)
{
	int arr[5][6] = {0,};
	int i, j;
	int n = 1;
	// ���ǿ� �´� �迭 �����
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = n;
			n++;

		}
	}
	// ù���� �� ���ϱ�
	int low_sum=0;
	for (i = 0; i < 5; i++)
	{
		low_sum += arr[0][i];

	}
	// ù���� �� ���ϱ�
	int col_sum = 0;
	for (i = 0; i < 4; i++)
	{
		col_sum += arr[i][0];

	}
	
	// 1~20��������
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			sum += arr[i][j];
		}
	}

	printf("������ : %d \n", low_sum);

	printf("������ : %d \n", col_sum);

	printf("��ü���� : %d \n", sum);


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}