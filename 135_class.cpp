#include "135.h"

void Calculator::Init() 
{ 
	Calculator::add = 0;
	Calculator::min = 0;
	Calculator::div = 0;
	Calculator::mul = 0;

}

double Calculator::Add(double a, double b) { Calculator::add++; return a + b; }

double Calculator::Min(double a, double b) { Calculator::min++; return a - b; }

double Calculator::Mul(double a, double b) { Calculator::mul++; return a * b; }

double Calculator::Div(double a, double b) { Calculator::div++; return a / b; }

void Calculator::ShowOpCount() 
{
	cout << "����: " << Calculator::add << " ";
	cout << "����: " << Calculator::min << " ";
	cout << "����: " << Calculator::mul << " ";
	cout << "������: " << Calculator::div<< endl;
}
