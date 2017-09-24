#pragma once
#ifndef  __ELECMANAGER_H__
#define __ELECMANAGER_H__
#include <iostream>
#include "List.h"
#include "User.h"
#include "Define.h"


class ElecManager
{
private:
//	bool is_existUser(void);
public:

public:
	void is_ShowMenu (void) const;		// 메뉴 보기
	void is_MakeUser(void) const;
public :
	ElecManager();
	~ElecManager();
};
#endif // ! __ELECMANAGER_H__
