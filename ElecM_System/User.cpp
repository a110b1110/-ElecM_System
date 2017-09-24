#define _CRT_SECURE_NO_WARNINGS
#include "User.h"

void User::is_InitUser(void)
{
	User user;
	char name[20];
	int len;

	std::cout << "유저 등록 이름을 입력해주세요 >>";
	std::cin >> name;
	len = (int)strlen(name);
	user.userName = new char[len + 1];
	strcpy((user.userName), name);
	std::cout << "안녕하세요" << user.userName << "님" << std::endl;

	return;
}

bool User::is_UserName(void)
{
	if (GetUser()->userName != 0) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

User::User()
{
	userName = 0;
}

User::~User()
{
}
