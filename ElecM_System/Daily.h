#pragma once
#ifndef __DAILY_H__
#define __DAILY_H__

#include "User.h"
#include "Define.h"

class Daily
{
private:
	int today;			//��¥

public:
	AMOUNT		amount;		//���ⷮ

public:			//����� ���� ���
	Daily*		prev;
	Daily*		next;

public:
	Daily*	is_Initialization(int _day);		//��¥ ����
	void	is_PushDay(int _day);				//��¥ ����
	void	is_Remove(int _day);				//��¥ ����
	void	is_Print(void);						//��¥ ���
public:
	Daily();
	~Daily();
};
extern Daily *head, *tail;
#endif // !__DAILY_H__
