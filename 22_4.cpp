#include <iostream>


int main(void)
{
	int result;
	int num = 0;
	while (1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�( -1 to end): ";
		std::cin >> num;
		if (num < 0) break;

		result = 50 + num * 0.12;
		std::cout << "�̹� �� �޿� : " << result << "����\n";

	}
}