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
	cout << "���� ��� �̸��� �Է����ּ��� >>";
	cin >> username;

	strcpy(userName, username);
	cout << "�ȳ��ϼ���" << userName << "��" << endl;
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
