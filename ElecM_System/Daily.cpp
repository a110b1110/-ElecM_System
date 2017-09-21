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
	return;	//����� ���� �ƴٸ� return 0;
}

void Daily::is_Remove(int _day)
{
	Daily* _p = head->next;
	while (_p->next != tail)	// ��¥�� ������� �ʴٸ�
	{
		if (_p->today == _day)	// ��¥�� ���� ��
		{
			_p->next->prev = _p->prev;
			_p->prev->next = _p->next;
			free(_p);			// ����
			return ;
		}
		_p = _p->next;
	}
	cout << " ���� ���� " << endl;
	return ;	//����� ���� �ƴٸ� return 0;
}

void Daily::is_Print(void)
{
	Daily* _p;
	_p = tail;
	while (_p->prev != head)
	{
		/*
		��� �� ����

		��ü ��� �ÿ���
		_p = _p->next; 
		�ڵ带 �߰������ָ� �ȴ�.
		*/
		cout << "��� ��� �Լ��� ���� �Ǿ����ϴ�." << endl;
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
