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
		printf("섭씨를 입력해주세요 : ");
		scanf("%lf", &num);
		printf("변환된 화씨는 : %d \n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("화씨를 입력해주세요 : ");
		scanf("%lf", &num);
		printf("변환된 섭씨는 : %d \n", FahToCel(num));
	}
	else
		printf("오류 \n");


		return 0;

	

}