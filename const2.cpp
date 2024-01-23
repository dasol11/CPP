#include <iostream>
using namespace std;



class SimpeClass
{
private:
	int num1;
	int num2;

public:
	
	SimpeClass(int n1= 0, int n2=0)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpeClass sc1(); // 함수 원형 선언
	SimpeClass mysc = sc1();
	mysc.ShowData();
	return 0;
}

SimpeClass sc1()
{
	SimpeClass sc(20, 30);
	return sc;
	}