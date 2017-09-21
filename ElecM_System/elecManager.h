#pragma once
#ifndef  __ELECMANAGER_H__
#define __ELECMANAGER_H__
#include "Daily.h"
class ElecManager
{

public:
	void is_ShowMenu (void) const;
	void is_MakeUser(void);
	void is_DailyDelete(void);
public :
	ElecManager();
	~ElecManager();
};

extern ElecManager ElectMgr;
#endif // ! __ELECMANAGER_H__
