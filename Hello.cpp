#include <iostream>

int main(void)
{	
	// �⺻���� ��� ����
	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello "<<"world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	
	//�⺻���� �Է�
	int val1;
	std::cout << "ù ��° ���� �Է� : ";
	std::cin >> val1;
	int val2;
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "������� : " << result << std::endl;


	//��������
	int val3, val4;
	int result2 = 0;
	std::cout << "�� ���� �Է� : ";
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
	
	std::cout << "�� ���� ������ ���� �� : ";
	std::cout << result2 << std::endl;

	return 0;
}