#include <iostream>
using namespace std;



class SimpeClass
{
private:
	int num1;
	int num2;

public:
	// �⺻������
	SimpeClass()
	{
		num1 = 0;
		num2 = 0;
	}
	// �Ű������� Ȱ���� ������
	SimpeClass(int n)
	{
		num1 = n;
		num2 = 0;
	}

	SimpeClass(int n , int m)
	{
		num1 = n;
		num2 = m;
	}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpeClass sc1;
	sc1.ShowData();

	SimpeClass sc2(100);
	sc2.ShowData();
	
	SimpeClass sc3(100, 200);
	sc3.ShowData();

}