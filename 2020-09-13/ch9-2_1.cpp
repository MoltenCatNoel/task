#include <iostream>

// ���� 9-2�� 1�� ����
// �θ� Ŭ���� CParent�� ����� m_Value�� ���� ���

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