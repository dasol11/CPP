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
		cout << "계좌ID : "<< accID<<endl;
		cout << "이 름 :" << cusname << endl;
		cout << "잔 액 : "<< accmoney << endl;
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
		cout << "선택 : ";
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
	cout << "1. 계좌개설 " << endl;
	cout << "2. 입 금 " << endl;
	cout << "3. 출 금 " << endl;
	cout << "4. 계좌정보 전체 출력 " << endl;
	cout << "5. 프로그램 종료 " << endl;
}
void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[개좌개설]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << "이 름 : ";
	cin >> name;
	cout << "입금액 : ";
	cin >> balance;
	accArr[accNum++] = new Account(id, balance, name);

}

	
void DepositMonet(void)
{

	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << "입금액 : ";
	cin >> money;

	for(int i = 0; i < accNum; i++)
	{
		if(accArr[i]->GetAccId() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
	return;
}


void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[출 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for(int i = 0; i < accNum; i++)
	{
		if(accArr[i]->GetAccId() == id)
		{
			if(accArr[i]->Withdraw(money) == 0)
			{
				cout<<"잔액부족"<<endl<<endl;
				return;
			}
			cout << "출금완료" << endl << endl;
			return;
		
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
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

