#include <stdio.h>


int main(void)
{
	int arr[5][6] = {0,};
	int i, j;
	int n = 1;
	// 조건에 맞는 배열 만들기
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = n;
			n++;

		}
	}
	// 첫행의 합 구하기
	int low_sum=0;
	for (i = 0; i < 5; i++)
	{
		low_sum += arr[0][i];

	}
	// 첫열의 합 구하기
	int col_sum = 0;
	for (i = 0; i < 4; i++)
	{
		col_sum += arr[i][0];

	}
	
	// 1~20까지의합
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			sum += arr[i][j];
		}
	}

	printf("행의합 : %d \n", low_sum);

	printf("열의합 : %d \n", col_sum);

	printf("전체의합 : %d \n", sum);


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}