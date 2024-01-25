#include <cstring>
#include <iostream>

using namespace std;
const int NAME_LEN = 20;


void ShowMenu(void);
void MakeAccount(void);
void DepositMonet(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum {	MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};


class Account
{

private:
	int accID;
	int accmoney;
	char* cusname;
public:
	Account(int ID, int money, char* name)
		:accID(ID), accmoney(money)
	{
		cusname = new char[strlen(name) + 1];
		strcpy(cusname, name);
	}

	int GetAccId() {
		return accID;
	}
	void Deposit(int money)
	{
		accmoney += money;

	}

	int Withdraw(int money)
	{
		if(accmoney < money)
			return 0;
		accmoney -= money;
		return money;

	}
	void ShowAccInfoe()
	{
		cout << "����ID : "<< accID<<endl;
		cout << "�� �� :" << cusname << endl;
		cout << "�� �� : "<< accmoney << endl;
	}
	~Account()
	{
		delete[]cusname;
	};
};

Account* accArr[100];
int accNum = 0;

int main(void)
{

	int choice;

	while(1)
	{
		ShowMenu();
		cout << "���� : ";
		cin >> choice;
		cout<<endl;

		switch(choice)
		{
		case MAKE:
			MakeAccount();	
			break;
		case DEPOSIT:
			DepositMonet();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			for(int i = 0; i < accNum; i++)
				delete accArr[i];
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}

void ShowMenu(void)
{
	cout << "------Menu-----" << endl;
	cout << "1. ���°��� " << endl;
	cout << "2. �� �� " << endl;
	cout << "3. �� �� " << endl;
	cout << "4. �������� ��ü ��� " << endl;
	cout << "5. ���α׷� ���� " << endl;
}
void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << "�� �� : ";
	cin >> name;
	cout << "�Աݾ� : ";
	cin >> balance;
	accArr[accNum++] = new Account(id, balance, name);

}

	
void DepositMonet(void)
{

	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << "�Աݾ� : ";
	cin >> money;

	for(int i = 0; i < accNum; i++)
	{
		if(accArr[i]->GetAccId() == id)
		{
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
	return;
}


void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "��ݾ�: "; cin >> money;

	for(int i = 0; i < accNum; i++)
	{
		if(accArr[i]->GetAccId() == id)
		{
			if(accArr[i]->Withdraw(money) == 0)
			{
				cout<<"�ܾ׺���"<<endl<<endl;
				return;
			}
			cout << "��ݿϷ�" << endl << endl;
			return;
		
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
	return;
}
void ShowAllAccInfo(void)
{
	for(int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfoe();
		cout << endl;
	}
}

