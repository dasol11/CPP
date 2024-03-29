#ifndef __CAR_H__
#define __CAR_H__


namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10

	};
}

class Car
{
private:
	// 변수선언
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:
	// 함수 선언	
	void InitMembers(char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

};

#endif