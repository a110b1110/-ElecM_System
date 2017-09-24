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
		std::cout << "이미 등록 되어있습니다" << std::endl;
	}
	return;
}

void ElecManager::is_ShowMenu (void) const
{
	std::cout << "------------M E N U----------------" << std::endl;
	std::cout << " 1. 사용량 입력" << std::endl;
	std::cout << " 2. 검       색" << std::endl;
	std::cout << " 3. 삭       제" << std::endl;
	std::cout << " 4. 출       력" << std::endl;
	std::cout << " 5. 종       료" << std::endl;
	std::cout << " 0. 유 저 등 록" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	return;
}



ElecManager::ElecManager()
{
}

ElecManager::~ElecManager()
{
}
