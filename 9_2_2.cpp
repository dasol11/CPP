#include <stdio.h>

double CelToFah(double Cel)
{
	double Fah = 1.8 * Cel + 32;
	return Fah;

}

double FahToCel(double Fah)
{
	double Cel = (Fah - 32) / 1.8;
	return Cel;

}

int main(void)
{
	int sel;
	double num;
	printf("1 or 2 \n");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("������ �Է����ּ��� : ");
		scanf("%lf", &num);
		printf("��ȯ�� ȭ���� : %d \n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("ȭ���� �Է����ּ��� : ");
		scanf("%lf", &num);
		printf("��ȯ�� ������ : %d \n", FahToCel(num));
	}
	else
		printf("���� \n");


		return 0;

	

}