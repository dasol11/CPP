#include <iostream>
#include <cstring>
using namespace std;

class Employee
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
		/*
		for (int i = 0;i<empNum;i++)
			empList[i]->ShowSalaryInfo();
		*/
		// 주석을 해체하면 컴파일 에러 이유는 가상함수와 관련
	}
	void ShowTotalSalaty() const 
	{
		int sum = 0;
		/*
		for(int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		*/
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
	void ShowSalatyInfo() const
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

int main(void)
{
	EmployeeHandler handlar;
	// 정규직 등록
	handlar.AddEmployee(new PermanentWorker("KIM", 1000));
	handlar.AddEmployee(new PermanentWorker("LEE", 1500));
	
	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handlar.AddEmployee(alba);

	//영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesRecult(7000);
	handlar.AddEmployee(seller);
	
	// 지불해야할 급여
	handlar.ShowSalaryInfo();
	// 지불해야할 급여 총합
	handlar.ShowTotalSalaty();
	return 0;
}