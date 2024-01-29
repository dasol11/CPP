#include <iostream>
#include <cstring>
using namespace std;

class Employee // 1�� �̻��� ���� �����Լ��� ������ �ֱ� ������ �߻� Ŭ�����̴�.
{
private:
	char name[100];
public:
	Employee(char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
	virtual int GetPay() const = 0; //���� �����Լ� 
	// ������ �ǹ̰� �ƴ϶� ��������� ��ü�� ���ٴ� ���� �����Ϸ����� �˸��� ����! 
	virtual void ShowSalaryInfo() const = 0; // ���� �����Լ�

};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(char* name, int money)
		: Employee(name), salary(money)
	{}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{}
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowSalaryInfo() const
	{

		for(int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();

		// �ּ��� ��ü�ϸ� ������ ���� ������ �����Լ��� ����
	}
	void ShowTotalSalaty() const
	{
		int sum = 0;

		for(int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();

		cout << "Salary sum: " << sum << endl;

	}
	~EmployeeHandler()
	{
		for(int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(char* name, int pay)
		:Employee(name), workTime(0), payPerHour(pay)
	{}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}

};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{}
	void AddSalesRecult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}

};

namespace RISK_LEVEL
{
	enum {RISK_A = 30, RISK_B = 20,RISK_C=10};
}
class ForeignSalesWorker : public SalesWorker
{
private:
	int risk_Level;
public:
	ForeignSalesWorker(char* name, int money, double ratio, int risk)
		: SalesWorker(name, money, ratio), risk_Level(risk)
	{}
	int GetRiskPay() const
	{
		return (int)(SalesWorker::GetPay() * (risk_Level / 100.0));
	}
	int GetPay()const
	{
		return SalesWorker::GetPay() + GetRiskPay();
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << SalesWorker::GetPay() << endl;
		cout << "risk pay : " << GetRiskPay() << endl;
		cout << "sum : " << GetPay() << endl << endl;
	}
};

int main(void)
{
	EmployeeHandler handlar;
	

	// �ؿ� ������ ���
	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A); //RISK_LEVEL::RISK_A = 30  
	fseller1->AddSalesRecult(7000);
	handlar.AddEmployee(fseller1);

	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesRecult(7000);
	handlar.AddEmployee(fseller2);

	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesRecult(7000);
	handlar.AddEmployee(fseller3);

	// �����ؾ��� �޿�
	handlar.ShowSalaryInfo();
	

	return 0;
}