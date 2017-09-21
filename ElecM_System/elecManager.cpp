#include "elecManager.h"

ElecManager ElectMgr;
void ElecManager::is_ShowMenu (void) const
{
	cout << "------------M E N U----------------" << endl;
	cout << " 1. 사용량 입력" << endl;
	cout << " 2. 검       색" << endl;
	cout << " 3. 삭       제" << endl;
	cout << " 4. 출       력" << endl;
	cout << " 5. 종       료" << endl;
	cout << " 0. 유 저 등 록" << endl;
	cout << "-----------------------------------" << endl;
	return;
}

void ElecManager::is_MakeUser(void)
{
}

void ElecManager::is_DailyDelete(void)
{
	int _Dday;
	if (head != NULL)
	{
		Daily* p = head->next;

		cout << "삭제 할 날짜 입력 >> ";
		cin >> _Dday;
		p->is_Remove(_Dday);	// 날짜를 보내 탐색 후 삭제

		return;	//제대로 실행 됐다면 return 0;
	}
	cout << "삭제 할 날짜가 없음" << endl;
	return; 
}

ElecManager::ElecManager()
{
}

ElecManager::~ElecManager()
{
}
