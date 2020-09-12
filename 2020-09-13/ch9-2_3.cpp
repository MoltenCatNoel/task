#include <iostream>

// 3번 과제
// 초 -> 시분초 변환

class CTime
{
private :
	int m_Hour;
	int m_Minute;
	int m_Second;

public :
	void SetElapsed(int elapsed)
	{
		// 계산 (이건 좀 이상한 거 같아서 다른 방법 모색중..
		m_Hour = elapsed / 3600;
		m_Minute = elapsed / 60 - m_Hour * 60;
		m_Second = elapsed - (m_Hour * 3600 + m_Minute * 60);
	}

	void PrintTime()
	{
		// 출력
		std::cout << m_Hour << ":" << m_Minute << ":" << m_Second << std::endl;
	}
};

int main()
{
	// 5000 -> 1:23:20
	std::cout << "자정부터 지나간 초를 입력하세요 : ";

	// elapsed 입력
	int elapsed;
	std::cin >> elapsed;

	CTime t;
	t.SetElapsed(elapsed);	// 시간 계산
	t.PrintTime();			// 시간 출력

	return 0;
}