#pragma once
#ifndef  __USER_H__
#define __USER_H__
using namespace std;

class User
{
private:
	char*	userName;		// 유저이름

public:
	char* GetName(void);
public:
	User();
	~User();
};
#endif // ! __USER_H__
