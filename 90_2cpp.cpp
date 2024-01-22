#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int(*ret) = ptr;

	cout << *ptr << endl;
	cout << *ret << endl;

	cout << ptr << endl;
	cout << ret << endl;

}