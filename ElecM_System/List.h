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
	bool is_InsertDayHead(int _day);	//head �� �� ����
	void is_InputNode(int _day);		//head�� �ƴ� �� ����

public:

public:
		void is_Init(void);
		void is_Delete(void);						//����
		void is_Print(void);						//��ü ���
		void is_Print(DailyNode* _dayptr);			//�Ϸ� ���
		void is_Insert(void);						//����
		void is_Search(void);						//�˻�

public:
		ListMgr();
		~ListMgr();

};
//extern ListMgr* listMgr;
#endif // !__LIST_H__
