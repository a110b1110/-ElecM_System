#include "elecManager.h"

ElecManager ElectMgr;
void ElecManager::is_ShowMenu (void) const
{
	cout << "------------M E N U----------------" << endl;
	cout << " 1. ��뷮 �Է�" << endl;
	cout << " 2. ��       ��" << endl;
	cout << " 3. ��       ��" << endl;
	cout << " 4. ��       ��" << endl;
	cout << " 5. ��       ��" << endl;
	cout << " 0. �� �� �� ��" << endl;
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

		cout << "���� �� ��¥ �Է� >> ";
		cin >> _Dday;
		p->is_Remove(_Dday);	// ��¥�� ���� Ž�� �� ����

		return;	//����� ���� �ƴٸ� return 0;
	}
	cout << "���� �� ��¥�� ����" << endl;
	return; 
}

ElecManager::ElecManager()
{
}

ElecManager::~ElecManager()
{
}
