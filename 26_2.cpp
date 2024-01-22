#include <iostream>

void swap(int* a, int* b);
void swap(char* a, char* b);

void swap(double* a, double* b);

int main(void)
{

	int num1 = 20, num2 = 30;
	int *pn = &num1;


	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char c1 = 'A', c2 = 'Z';
	swap(&c1, &c2);
	std::cout << c1 << ' ' << c2 << std::endl;


	double db1 = 1.111, db2 = 5.555;
	swap(&db1, &db2);
	std::cout << db1 << ' ' << db2 << std::endl;
	return 0;


}


void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	

}
void swap(char* a, char* b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
void swap(double* a, double* b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}