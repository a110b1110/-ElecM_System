#include "elecManager.h"

void ElecManager::is_MakeUser(void) const
{
	Ptr<User*>	user;

	if (user.GetPtr()->is_UserName() == false)
	{
		user.GetPtr()->is_InitUser();

	}
	else
	{
		std::cout << "�̹� ��� �Ǿ��ֽ��ϴ�" << std::endl;
	}
	return;
}

void ElecManager::is_ShowMenu (void) const
{
	std::cout << "------------M E N U----------------" << std::endl;
	std::cout << " 1. ��뷮 �Է�" << std::endl;
	std::cout << " 2. ��       ��" << std::endl;
	std::cout << " 3. ��       ��" << std::endl;
	std::cout << " 4. ��       ��" << std::endl;
	std::cout << " 5. ��       ��" << std::endl;
	std::cout << " 0. �� �� �� ��" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	return;
}



ElecManager::ElecManager()
{
}

ElecManager::~ElecManager()
{
}
