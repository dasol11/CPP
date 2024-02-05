#include <iostream>
#include <string>
using namespace std;


class String
{
private:
	int len;
	char* str;
public:
	String();
	String(const char* s);
	String(const String& s);
	~String();
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);

	friend ostream& operator<<(ostream& os, const String& s);
	friend istream& operator>>(istream& os, String& s);

};


String::String()
{
	len = 0;
	str = NULL;
}

String::String(const char* s)
{
	len = strlen(s) + 1;
	str = new char[len];
	strcpy(str, s);
}

String::String(const String& s)
{
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
}

String :: ~String()
{
	if(str != NULL)
		delete[] str;
}
String& String :: operator= (const String& s)
{
	if(str != NULL)
		delete[] str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+= (const String& s)
{
	len += (s.len - 1);
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);
	if(str != NULL)
		delete[] str;
	return *this;
}

bool String::operator== (const String& s)
{
	return strcmp(str, s.str) ? false : true;
}

String String::operator+ (const String& s)
{
	char* tempstr = new char[s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);
	String temp(tempstr);
	delete[] tempstr;
	return temp;

}

ostream& operator<< (ostream & os, const String & s)
{
	os << s.str;
	return os;
}

/*
istream& operator>> (istream & is, const String & s)
{
	char str[100];
	is >> str;
	s=String(str);
	return is;

}*/


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