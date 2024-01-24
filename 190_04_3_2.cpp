#include <iostream>
#include <cstring>
using namespace std;

namespace COM_POS
{

	enum {
		CLERK, SENIOR, ASSIST, MANAGER
	};

	void Showpoision(int pos)
	{
		switch(pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "팀장" << endl;
			
		}
	}

}



class NameCard
{
private:
	char* name;
	char* company;
	char* callphone;
	int position;
	
public:
	NameCard(char* Myname, char* Mycom, char* Mycall, int pos)
		:position(pos) // 이니셜라이져를 사용하여 position을 pos로 초기화 하겠다
	{
		name = new char[strlen(Myname) + 1]; // 동적할당
		company = new char[strlen(Mycom) + 1];
		callphone = new char[strlen(Mycall) + 1];
		strcpy(name, Myname);
		strcpy(company, Mycom);
		strcpy(callphone, Mycall);

	
	
	}
	void ShowNameCardInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << callphone << endl;
		cout << "직급: ";
		COM_POS::Showpoision(position); // 범위 지정 연산자 COM_POS 내부의 함수 실행!
		cout<< endl;
	}
	~NameCard()
	{
		delete[]name;
		delete[]company;
		delete[]callphone;
	}

};



int main(void)
{

	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COM_POS::CLERK); // enum :: 열거자 == 정수값
	NameCard manSENIOR("Hong", "ORANGEeNG", "010-3333-4444", COM_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COM_POS::ASSIST);
	
	manClerk.ShowNameCardInfo() ;
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();


}