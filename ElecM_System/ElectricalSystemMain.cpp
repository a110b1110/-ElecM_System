#include "main.h"

int main(void)
{	
	Ptr<ElecManager*> elecMgr;
	elecMgr.GetPtr()->is_MakeUser();
	ListMgr* listMgr = new ListMgr;
	/*------------------------------------------------------

	is_UserInfo();
	����� ������ �Է��ϰ� ��ܿ��� ����Ʈ �׸��� ����� ��
	ex) ������ǰ W �� ��� ���꼼

	------------------------------------------------------*/
	
	while (true)
	{

		elecMgr.GetPtr()->is_ShowMenu();

		int menu = 0;
		std::cin >> menu;

		switch (menu)
		{
		case 1:				//��뷮 �Է�
		{
			std::cout << "��뷮 �Է��� �����ϼ̽��ϴ�" << std::endl;
			listMgr->is_Insert();
			break;
			//is_ElectReq();

		}
		case 2:			// Ư�� ��¥ ��뷮 �˻� total�� ���꼼 ���� ��½��� �� ��
		{
			std::cout << "��¥ �˻��� �����ϼ̽��ϴ�" << std::endl;
			break;
			//is_ElectSearch();
		}
		case 3:			// Ư�� ��¥�� �߸� �Է� ���� �� ������ �� �� �ֵ���, ������ϵ� ǥ������ ��
		{
			std::cout << "��¥ ������ �����ϼ̽��ϴ�" << std::endl;
			listMgr->is_Delete();
			break;
			//is_ElectDelete();
		}
		case 4:			// �Ѵ� ��� ������ ��ü print ���� �� �� total�� ���꼼 ���� ��� + ����ȭ�� �Բ�
		{
			std::cout << "��ü ����� �����ϼ̽��ϴ�" << std::endl;
			break;
			//is_ElectPrint();
		}
		}
	}
	return 0;
}