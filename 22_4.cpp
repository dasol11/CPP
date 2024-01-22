#include <iostream>


int main(void)
{
	int result;
	int num = 0;
	while (1)
	{
		std::cout << "판매 금액을 만원 단위로 입력( -1 to end): ";
		std::cin >> num;
		if (num < 0) break;

		result = 50 + num * 0.12;
		std::cout << "이번 달 급여 : " << result << "만원\n";

	}
}