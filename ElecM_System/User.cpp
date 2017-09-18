#include "User.h"

char* User::GetName(void)
{
	return userName;
}

User::User()
{
	userName = new char[20];
}

User::~User()
{
	delete[] userName;
}
