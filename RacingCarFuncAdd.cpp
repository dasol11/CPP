#include <iostream>
using namespace std;


struct Car
{	
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10

	};
	// 변수선언
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
	
	// 함수 선언	
	void ShowCarState();
	void Accel();
	void Break();
	
};

void Car::Break()
{
	if (curSpeed < BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= BRK_STEP;

}
void Car::ShowCarState()
{
	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s\n" << endl;
}


void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= FUEL_STEP;

	if (curSpeed + ACC_STEP >= MAX_SPD)
	{
		curSpeed = MAX_SPD;
		return;
	}
	curSpeed += ACC_STEP;
}


int main(void)
{
	Car run99 = { "run99",100,0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77",100,0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();

	return 0;
}