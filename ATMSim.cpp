#include <iostream>
#include <cstring>
using namespace std;

class DepositException
{
private:
	int reqDep;
public:
	DepositException(int money) : reqDep(money)
	{}
	void ShowExceptionReason()
	{
		cout << "[���� �޼��� : " << reqDep << "�� �ԱݺҰ�]" << endl;
	}
};

class WithdraswException
{
private:
	int balance;
public:
	WithdraswException(int money) : balance(money)
	{}
	void ShowExceptionReason()
	{
		cout << "[���� �޼��� : �ܾ�" << balance << ", �ܾ׺���]" << endl;
	}
};

class Account
{
private:
	char accNum[50];
	int balance;
public:
	Account(char* acc, int money) : balance(money)
	{
		strcpy(accNum, acc);
	}
	void Deposit(int money) throw (DepositException)
	{
		if(money < 0)
		{
			DepositException expn(money);
			throw expn;
		}
		balance += money;
	}
	void Withdraw(int money) throw (WithdraswException)
	{
		if(money > balance)
			throw WithdraswException(balance);
		balance -= money;
	}
	void ShowMyMoney()
	{
		cout << "�ܰ� : " << balance << endl << endl;;
	}
};



int main(void)
{
	Account myAcc("56789-8702", 5000);


	try
	{
		myAcc.Deposit(2000);
		myAcc.Deposit(-300);
	}
	catch(DepositException& expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();
	try
	{
		myAcc.Withdraw(3500);
		myAcc.Withdraw(4500);
	}
	catch(WithdraswException& expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();
	return 0;
}