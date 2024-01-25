#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum{CLERK, SENIOR, ASSIST, MANAGER};

	void ShowPositionInfo(int pos)
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
	char* com;
	char* cell;
	int rank;

public:
	NameCard(char *myname, char *mycom, char *mycell, int num) 
		: rank(num) 
	{
		name = new char[strlen(myname) + 1];
		com = new char[strlen(mycom) + 1];
		cell = new char[strlen(mycell) + 1];
		name = strcpy(name, myname);
		com = strcpy(com, mycom);
		cell = strcpy(cell, mycell);
		
	}
	NameCard(const NameCard& ref):rank(ref.rank)
	{
		name = new char[strlen(ref.name) + 1];
		com = new char[strlen(ref.com) + 1];
		cell = new char[strlen(ref.cell) + 1];
		name = strcpy(name, ref.name);
		com = strcpy(com, ref.com);
		cell = strcpy(cell, ref.cell);

	}
	void ShowNameCardInfo()
	{
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << com << endl;
		cout << "��ȭ��ȣ : " << cell << endl;
		cout << "���� : "; COMP_POS::ShowPositionInfo(rank);
	}
	~NameCard()
	{
		delete[]name;
		delete[]com;
		delete[]cell;
		cout << "call distrucktor!" << endl;


	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Lee", "ABCEng", "010-1111-2222", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}
