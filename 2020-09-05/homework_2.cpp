#include <iostream>

#define MAX_ROBOT 4

class CRobot
{
private :
	const char* m_Name;
	int m_Height;
	int m_Weight;
	int m_HPower;

public:
	void Set(const char* name, int height, int weight, int hpower)
	{
		m_Name = name;
		m_Height = height;
		m_Weight = weight;
		m_HPower = hpower;
	}

	void Print()
	{
		std::cout << "--------------------" << std::endl;
		std::cout << "�̸� : " << m_Name << std::endl;
		std::cout << "���� : " << m_Height << std::endl;
		std::cout << "���� : " << m_Weight << std::endl;
		std::cout << "���� : " << m_HPower << std::endl;
	}
};

int main()
{
	CRobot robot[4];

	robot[0].Set("�±Ǻ���", 18, 80, 3000);
	robot[1].Set("��¡��", 17, 70, 2500);
	robot[2].Set("��ĭ������", 20, 90, 3500);
	robot[3].Set("�׷�������", 22, 100, 5000);

	for (int n = 0; n < MAX_ROBOT; n++)
	{
		robot[n].Print();
	}

	return 0;
}