#include <iostream>
using namespace std;

void SimpleFunc1(void);
void SimpleFunc2(void);
void SimpleFunc3(void);



int main(void)
{

	try
	{
		SimpleFunc1();
	}
	catch (int expn)
	{
		cout << "예외코드 : " << expn << endl;
	}
	return 0;
}

void SimpleFunc1(void)
{
	cout << "SimpleFunc1(void)" << endl;
	SimpleFunc2();
}


void SimpleFunc2(void)
{
	cout << "SimpleFunc2(void)" << endl;
	SimpleFunc3();
}

void SimpleFunc3(void)
{
	cout << "SimpleFunc3(void)" << endl;
	throw - 1;
}