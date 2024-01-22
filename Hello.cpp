#include <iostream>

int main(void)
{	
	// 기본적인 출력 예제
	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello "<<"world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	
	//기본적인 입력
	int val1;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;
	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "덧셈결과 : " << result << std::endl;


	//지역변수
	int val3, val4;
	int result2 = 0;
	std::cout << "두 정수 입력 : ";
	std::cin >> val3>>val4;
	if (val3 < val4)
	{
		for (int i = val3 + 1; i < val4; i++)
		{
			result2 += i;

		}
	}
	else
	{
		for (int i = val4 + 1; i < val3; i++)
		{
			result2 += i;
		}
	}
	
	std::cout << "두 정수 사이의 정수 합 : ";
	std::cout << result2 << std::endl;

	return 0;
}