#include "Daily.h"

Daily *head, *tail;

Daily* Daily::is_Initialization(int _day)	
{
	Daily* day = new Daily;
	if (head->next != NULL)
	{
		day->today = _day;
		day->prev = NULL;
		day->next = NULL;
	}
	return day;
}

void Daily::is_PushDay(int _day)
{
	Daily* newDay = is_Initialization(_day);
	Daily* _p;
	_p = tail;
	_p->prev->next = newDay;
	newDay->prev = _p->prev;
	_p->prev = newDay;
	newDay->next = _p;
	return;	//제대로 실행 됐다면 return 0;
}

void Daily::is_Remove(int _day)
{
	Daily* _p = head->next;
	while (_p->next != tail)	// 날짜가 비어있지 않다면
	{
		if (_p->today == _day)	// 날짜가 같을 시
		{
			_p->next->prev = _p->prev;
			_p->prev->next = _p->next;
			free(_p);			// 삭제
			return ;
		}
		_p = _p->next;
	}
	cout << " 삭제 실패 " << endl;
	return ;	//제대로 실행 됐다면 return 0;
}

void Daily::is_Print(void)
{
	Daily* _p;
	_p = tail;
	while (_p->prev != head)
	{
		/*
		출력 할 내용

		전체 출력 시에는
		_p = _p->next; 
		코드를 추가시켜주면 된다.
		*/
		cout << "출력 멤버 함수가 실행 되었습니다." << endl;
		return;
		
	}
}

Daily::Daily()
{
	head = new Daily;
	tail = new Daily;
	
	head->next = tail;
	head->prev = head;
	tail->prev = head;
	tail->next = tail;
}


Daily::~Daily()
{
}
