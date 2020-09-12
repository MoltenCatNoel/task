#include <iostream>

// 2번 과제
// 정적 멤버 s_Value 출력

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