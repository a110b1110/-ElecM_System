#pragma once
#ifndef __DAILY_H__
#define __DAILY_H__

#include "User.h"
#include "Define.h"

class Daily
{
private:
	int today;			//날짜

public:
	AMOUNT		amount;		//전기량

public:			//양방향 연결 노드
	Daily*		prev;
	Daily*		next;

public:
	Daily*	is_Initialization(int _day);		//날짜 생성
	void	is_PushDay(int _day);				//날짜 삽입
	void	is_Remove(int _day);				//날짜 삭제
	void	is_Print(void);						//날짜 출력
public:
	Daily();
	~Daily();
};
extern Daily *head, *tail;
#endif // !__DAILY_H__
