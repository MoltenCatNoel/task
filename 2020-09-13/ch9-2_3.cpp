#include <iostream>

// 3�� ����
// �� -> �ú��� ��ȯ

class CTime
{
private :
	int m_Hour;
	int m_Minute;
	int m_Second;

public :
	void SetElapsed(int elapsed)
	{
		// ��� (�̰� �� �̻��� �� ���Ƽ� �ٸ� ��� �����..
		m_Hour = elapsed / 3600;
		m_Minute = elapsed / 60 - m_Hour * 60;
		m_Second = elapsed - (m_Hour * 3600 + m_Minute * 60);
	}

	void PrintTime()
	{
		// ���
		std::cout << m_Hour << ":" << m_Minute << ":" << m_Second << std::endl;
	}
};

int main()
{
	// 5000 -> 1:23:20
	std::cout << "�������� ������ �ʸ� �Է��ϼ��� : ";

	// elapsed �Է�
	int elapsed;
	std::cin >> elapsed;

	CTime t;
	t.SetElapsed(elapsed);	// �ð� ���
	t.PrintTime();			// �ð� ���

	return 0;
}