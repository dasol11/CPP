#include <stdio.h>
// input.c�� �����Ϸ��� main.c�� ���� ������ ��
// ���� extern�� ����Ͽ� ������ ��������
extern int count;
int total = 0;// main.c�� total ���� �ٸ� ������

int input_data(void)
{
	int pos;
	while (1)
	{
		printf("��� �Է� : ");
		scanf("%d", &pos);
		if (pos < 0)break;
		count++;
		total += pos;
	}
	return total;

}

