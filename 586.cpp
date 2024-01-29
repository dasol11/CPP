#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;
	cout << "두 개의 숫자 입력 : ";
	cin >> num1 >> num2;
	try
	{
		if(num2 == 0)
			throw num2; // 예외발생시  catch 문으로 바로 넘어감
		cout << "나눗셈의 몫 : " << num1 / num2 << endl;
		cout << "나눗셈의 나머지 : " << num1 % num2 << endl;
	}
	catch(int expn)
	{

		cout << "제수는 "<<expn<<"이 불가능" << endl;
		cout << "프로그램을 다시 시작하세요" << endl;
	}

	cout << "end of main" << endl;
	return 0;
}