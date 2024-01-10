#include <stdio.h>

void exchange(double*, double*);
void func(void(*fp)(double*, double*), double, double);

int main(void)
{
	double a = 10, b = 20;

	func(exchange, a, b);

	return 0;

}



void func(void pf(double*, double*), double a, double b)
{

	printf(" a : %.1lf, b: %.1lf \n", a, b);
	pf(&a, &b);
	printf(" a : %.1lf, b: %.1lf", a, b);
}

void exchange(double* a, double* b)
{
	double temp;

	temp = *a;
	*a = *b;
	*b = temp;



}
