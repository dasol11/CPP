#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1 = "I like "; // ���ڿ��� ���ڷ� ���� �޴� ������
	string str2 = "string class"; // string str2("string class") �� ������ 
	string str3 = str1 + str2; // + ���� ������ �����ε�
// ���ڿ��� ũ�Ⱑ �������� �ʱ� ������ ���ڿ��� ������ ���� �޸� ������ �����Ҵ� �ؾ���

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2; // +=������ �����ε�
	if(str1 == str3) // == ������ �����ε�
		cout << "���� ���ڿ�! " << endl;
	else
		cout << "�������� ���� ���ڿ�! " << endl;

	string str4;
	cout << "���ڿ� �Է� : ";
	cin >> str4; // <<, >>������ �����ε�
	cout << "�Է��� ���ڿ�: " << str4;
	return 0;
}