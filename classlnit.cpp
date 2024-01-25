#include <iostream>
using namespace std;

class Test
{
private:
	int n1;
	int n2;

public:

	Test(int num1, int num2) : n1(num1), n2(num2)
	{
	}
	Test(const Test& obj) : n1(obj.n1), n2(obj.n2)
	{
	}
	void Showdata()
	{
		cout << n1 << endl;
		cout << n2 << endl;
	}
};
int main(void)
{
	Test test1(15, 30);
	Test test2 = test1;
	test2.Showdata();
}