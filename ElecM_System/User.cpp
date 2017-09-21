#define _CRT_SECURE_NO_WARNINGS
#include "User.h"

User user;

char* User::GetName(void)
{
	return userName;
}

void User::is_InitUser(void)
{
	char* username;
	username = new char[20];
	cout << "유저 등록 이름을 입력해주세요 >>";
	cin >> username;

	strcpy(userName, username);
	cout << "안녕하세요" << userName << "님" << endl;
	delete[] username;

	return;
}

User::User()
{
	userName = new char[20];
}

User::~User()
{
	delete[] userName;
}
