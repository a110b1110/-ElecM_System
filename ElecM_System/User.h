#pragma once
#ifndef  __USER_H__
#define __USER_H__
#include <iostream>
using namespace std;

class User
{
private:
	char*	userName;		// 유저이름
public :
	User*	prev;
	User*	next;
	
public:
	char*	GetName(void);
	void	is_Init(void);
public:
	User();
	~User();
};

User* head;
User* tail;
#endif // ! __USER_H__
