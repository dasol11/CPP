#ifndef __cal_h__
#define __cal_h__
#include <iostream>
using namespace std;

class Calculator
{

private:
	int add, min, mul, div;

public:
	void Init();
	double Add(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
	void ShowOpCount();

};
#endif