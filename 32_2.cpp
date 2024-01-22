#include <iostream>

int sf(int a = 10)
{
	return a + 1;
}


int main(void)
{
	std::cout << sf(11) << std::endl;
	std::cout << sf() << std::endl;

}