#include "main.h"
using namespace std;

int main(void)
{	

	if (head == NULL)
	{
		user.is_InitUser();
		
	}
	/*------------------------------------------------------

	is_UserInfo();
	����� ������ �Է��ϰ� ��ܿ��� ����Ʈ �׸��� ����� ��
	ex) ������ǰ W �� ��� ���꼼

	------------------------------------------------------*/
	
	while (true)
	{
		ElectMgr.is_ShowMenu();	//�޴� ����

		int menu = 0;
		cin >> menu;

		switch (menu)
		{
		case 1:				//��뷮 �Է�
		{
			cout << "��뷮 �Է��� �����ϼ̽��ϴ�" << endl;
			//is_ElectReq();

		}
		case 2:			// Ư�� ��¥ ��뷮 �˻� total�� ���꼼 ���� ��½��� �� ��
		{
			cout << "��¥ �˻��� �����ϼ̽��ϴ�" << endl;
			//is_ElectSearch();
		}
		case 3:			// Ư�� ��¥�� �߸� �Է� ���� �� ������ �� �� �ֵ���, ������ϵ� ǥ������ ��
		{
			cout << "��¥ ������ �����ϼ̽��ϴ�" << endl;
			ElectMgr.is_DailyDelete();
			//is_ElectDelete();
		}
		case 4:			// �Ѵ� ��� ������ ��ü print ���� �� �� total�� ���꼼 ���� ��� + ����ȭ�� �Բ�
		{
			cout << "��ü ����� �����ϼ̽��ϴ�" << endl;
			//is_ElectPrint();
		}
		}
	}
	return 0;
}