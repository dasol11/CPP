#include <stdio.h>


int main(void)
{

	int arr[5];
	int num ;

	for (num = 0; num < 5; num++)
	{
		printf("%d ��° ������ �Է����ּ��� ", num);
		scanf("%d", &arr[num]);
	}

	int max, min, sum;
	max = min=sum = arr[0];

	for (num = 1; num < 5; num++)
	{
		if (arr[num] > max)
			max = arr[num];
		if (arr[num] < min)
			min = arr[num];
		sum += arr[num];
	}

	printf("�ִ�: %d \n", max);

	printf("�ּڰ�: %d \n", min);

	printf("�� ��: %d \n", sum);



		


}