#include <iostream>

// 20200959 최길훈
// 1번 과제

class CFamily
{
protected :
	const char* m_FamilyName;

public :
	void SetFamilyName(const char* arg)
	{
		m_FamilyName = arg;
	}
};

class CName : public CFamily
{
private :
	const char* m_Name;

public :
	void SetName(const char* arg);

	void ShowName()
	{
		std::cout << m_FamilyName << " " << m_Name << std::endl;
	}
};

void CName::SetName(const char* arg)
{
	m_Name = arg;
}

void main()
{
	CName name;
	name.SetFamilyName("Kim");
	name.SetName("Do Hyung");
	name.ShowName();
}