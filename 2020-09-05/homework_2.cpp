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
		std::cout << "이름 : " << m_Name << std::endl;
		std::cout << "신장 : " << m_Height << std::endl;
		std::cout << "무게 : " << m_Weight << std::endl;
		std::cout << "마력 : " << m_HPower << std::endl;
	}
};

int main()
{
	CRobot robot[4];

	robot[0].Set("태권브이", 18, 80, 3000);
	robot[1].Set("마징가", 17, 70, 2500);
	robot[2].Set("메칸더브이", 20, 90, 3500);
	robot[3].Set("그랜다이져", 22, 100, 5000);

	for (int n = 0; n < MAX_ROBOT; n++)
	{
		robot[n].Print();
	}

	return 0;
}