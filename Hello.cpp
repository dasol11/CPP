#include <stdio.h>

int main(void)

{	
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("�Ǽ� �Է� (���� �Է½� ���ä���) : ");
		scanf("%lf", &input);
		num++;
		
	}
	printf("��� : %f \n", (total / (num - 1)));
	printf("��� : %f \n", total );

	return 0;

}