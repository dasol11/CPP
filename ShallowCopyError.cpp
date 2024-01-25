#include <iostream>
#include <cstring>
using namespace std;

class Person
{

private :
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	/*
	복사생성자가 정의되어 있지 않으면 디폴트 복사 생성자가 생성되어서 객체 멤버를 그대로 가져옴
	더 자세히 이야기하면 객체 멤버 변수의 주소값을 참조하여 새로운 객체의 멤버 변수를 가져옴
	반면, 복사 생성자를 정의하면 새로운 메모리에 변수를 복사 후 포인터로 참조함
	*/
	Person(const Person& copy) :age(copy.age) 
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이" << age << endl;

	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;

	}
};


int main(void)
{
	Person man1("Kim da sol", 29);
	Person man2=man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0; 
}