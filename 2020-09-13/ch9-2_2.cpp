#include <iostream>

// 2�� ����
// ���� ��� s_Value ���

class CTest
{
public:
	static int s_Value;
};

int CTest::s_Value = 1;

int main()
{
	CTest t;

	std::cout << t.s_Value << std::endl;

	return 0;
}