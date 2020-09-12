#include <iostream>

// 과제 9-2의 1번 과제
// 부모 클래스 CParent의 멤버인 m_Value의 값을 출력

class CParent
{
public :
	int m_Value = 1;
};

class CTest : public CParent
{
public :
	int m_Value = 2;
};

int main()
{
	CTest t;

	std::cout << t.m_Value << std::endl;

	return 0;
}