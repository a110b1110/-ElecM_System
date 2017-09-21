#pragma once
#ifndef  __USER_H__
#define __USER_H__
#include <iostream>
#include "Daily.h"
using namespace std;

class User
{
private:
	char*	userName;		// 유저이름
//	Daily*	date;
public:
	char*	GetName(void);
	void	is_InitUser(void);
public:
	User();
	~User();
};

extern User user;
#endif // ! __USER_H__
