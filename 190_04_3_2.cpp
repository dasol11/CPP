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
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
			
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
		:position(pos) // �̴ϼȶ������� ����Ͽ� position�� pos�� �ʱ�ȭ �ϰڴ�
	{
		name = new char[strlen(Myname) + 1]; // �����Ҵ�
		company = new char[strlen(Mycom) + 1];
		callphone = new char[strlen(Mycall) + 1];
		strcpy(name, Myname);
		strcpy(company, Mycom);
		strcpy(callphone, Mycall);

	
	
	}
	void ShowNameCardInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << callphone << endl;
		cout << "����: ";
		COM_POS::Showpoision(position); // ���� ���� ������ COM_POS ������ �Լ� ����!
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

	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COM_POS::CLERK); // enum :: ������ == ������
	NameCard manSENIOR("Hong", "ORANGEeNG", "010-3333-4444", COM_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COM_POS::ASSIST);
	
	manClerk.ShowNameCardInfo() ;
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();


}