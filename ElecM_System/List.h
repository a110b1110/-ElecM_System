#pragma once
#ifndef __LIST_H__
#define __LIST_H__
#include "Daily.h"
#include "Ptrtemplate.h"

class ListMgr
{
private :
	DailyNode* head;
	DailyNode* tail;

private:
	bool is_InsertDayHead(int _day);	//head 일 때 삽입
	void is_InputNode(int _day);		//head가 아닐 때 삽입

public:

public:
		void is_Init(void);
		void is_Delete(void);						//삭제
		void is_Print(void);						//전체 출력
		void is_Print(DailyNode* _dayptr);			//하루 출력
		void is_Insert(void);						//삽입
		void is_Search(void);						//검색

public:
		ListMgr();
		~ListMgr();

};
//extern ListMgr* listMgr;
#endif // !__LIST_H__
