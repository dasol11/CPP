#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1 = "I like "; // 문자열을 인자로 전달 받는 생성자
	string str2 = "string class"; // string str2("string class") 와 동일함 
	string str3 = str1 + str2; // + 대입 연산자 오버로딩
// 문자열에 크기가 일정하지 않기 때문에 문자열의 저장을 위한 메모리 공간을 동적할당 해야함

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2; // +=연산자 오버로딩
	if(str1 == str3) // == 연산자 오버로딩
		cout << "동일 문자열! " << endl;
	else
		cout << "동일하지 않은 문자열! " << endl;

	string str4;
	cout << "문자열 입력 : ";
	cin >> str4; // <<, >>연산자 오버로딩
	cout << "입력한 문자열: " << str4;
	return 0;
}