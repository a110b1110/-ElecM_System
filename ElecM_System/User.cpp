#define _CRT_SECURE_NO_WARNINGS
#include "User.h"

void User::is_InitUser(void)
{
	User user;
	char name[20];
	int len;

	std::cout << "���� ��� �̸��� �Է����ּ��� >>";
	std::cin >> name;
	len = (int)strlen(name);
	user.userName = new char[len + 1];
	strcpy((user.userName), name);
	std::cout << "�ȳ��ϼ���" << user.userName << "��" << std::endl;

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
