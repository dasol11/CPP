#include <iostream>
using namespace std;


class Car
{
private:
	int gasolineGauge;

public:
	Car(int gas) : gasolineGauge(gas) {}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;

public:
	HybridCar(int gas, int ele) : Car(gas), electricGauge(ele) {}

	int GetElecGauge()
	{
		return electricGauge;
	}
};


class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int ele, int water) :  HybridCar(gas, ele), waterGauge(water) {}

	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸° : " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â¾ç : " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ¾ç : " << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar hwc(11, 45, 67);
	hwc.ShowCurrentGauge();

	return 0;

}