#pragma once
#ifndef  __USER_H__
#define __USER_H__
#include <iostream>
#include <string>
#include "Daily.h"

class User
{
private:
	char*	userName;		// 유저이름
//	Daily*	date;
private:
	inline User* GetUser(void) { User* user=new User ; return user; }
public:
//	char*	GetName(void);
	void	is_InitUser(void);
public :
	bool is_UserName(void);
public:
	User();
	~User();
};
#endif // ! __USER_H__
