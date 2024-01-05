#include <stdio.h>


int main(void)
{

	int arr[5];
	int num ;

	for (num = 0; num < 5; num++)
	{
		printf("%d 번째 정수를 입력해주세요 ", num);
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

	printf("최댓값: %d \n", max);

	printf("최솟값: %d \n", min);

	printf("총 합: %d \n", sum);



		


}