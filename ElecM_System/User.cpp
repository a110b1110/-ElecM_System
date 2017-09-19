#include "User.h"

char* User::GetName(void)
{
	return userName;
}

void User::is_Init(void)
{
	if (head->next != NULL)
	{
		head->next = new User();
	}
	else {
		cout << " error !" << endl;
	}
}

User::User()
{
	userName = new char[20];
	head = new User();
	tail = new User();

	head->next = tail;
	tail->prev = head;
}

User::~User()
{
	delete[] userName;
}
