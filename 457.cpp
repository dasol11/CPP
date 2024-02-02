#include <iostream>
#include <cstring>
using namespace std;


class BoundCheckIntarray
{
private:
	int* arr;
	int arrlen;

public:
	BoundCheckIntarray(int len) : arrlen(len)
	{
		arr = new int[len];
	
	}
	int& operator[] (int idx)
	{

		if(idx < 0 || idx >= arrlen)
		{
			cout << "Array" << endl;
			exit(1);
		}
		return arr[idx];

	}
	~BoundCheckIntarray()
	{
		delete[] arr;
	}
};


int main(void)
{
	BoundCheckIntarray arr(5);
	for(int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;
	BoundCheckIntarray cpy1(5);
	cpy1 = arr;


	for(int i = 0; i <6; i++)
		cout << arr[i] << endl;
	return 0;
}