#pragma once
#ifndef __DAILY_H__
#define __DAILY_H__
#include "User.h"

class DailyNode
{
private:
	int				today;				//��¥

public:
//	AMOUNT		amount;				//���ⷮ

public:			//����� ���� ���
	DailyNode*		prev;
	DailyNode*		next;
	
public:
	void is_Print();
	inline int is_Today() {int _day = today; return _day; }
public:
	DailyNode();
	DailyNode(int val);
	DailyNode(DailyNode* n, DailyNode* p, int val);
	~DailyNode();
};
#endif // !__DAILY_H__
