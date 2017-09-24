#include "List.h"

//ListMgr* listMgr;
ListMgr::ListMgr()
{
	std::cout << "������" << std::endl;
	//listMgr = new ListMgr;
	DailyNode* head = new DailyNode;
	DailyNode* tail = new DailyNode;

	this->head = NULL;
	this->tail = NULL;
}

ListMgr::~ListMgr()
{
	DailyNode* cur = this->head->next;
	if (cur != nullptr)
	{
		DailyNode* remove = head;
		this->head = this->head->next;
		this->head->prev = nullptr;
		delete[] remove;
	}
}

bool ListMgr::is_InsertDayHead(int _day)
{
	DailyNode* newday = new DailyNode(_day);

	this->head = newday;
	this->tail = newday;
	newday->next = tail;
	head->next = newday;
//	newday->prev = head;
	return true;	//head ���� �Ϸ�
}

void ListMgr::is_InputNode(int _day)	//tail �ʿ� ������ ���.
{
	DailyNode* newday = new DailyNode(_day);
	
	newday->prev = this->tail;
	tail = newday;
	newday->next = tail;
	newday->prev->next = newday;
	tail->next = nullptr;

}

void ListMgr::is_Init(void)
{
}

void ListMgr::is_Delete(void)
{
	DailyNode* cur = new DailyNode();
	int _day;
	std::cout << "���� �� ��¥ �Է�" << std::endl;
	std::cin >> _day;
	cur = head ;
	while (cur != nullptr)	// ��¥�� ������� �ʴٸ�
	{
		if (cur->is_Today() == _day)	// ��¥�� ���� ��
		{
			if (cur == head)			//cur�� ����� ��
			{
				head = head->next;
				head->prev = NULL;
				std::cout << cur->is_Today() << "�� ���� �Ǿ����ϴ�." << std::endl;
				free(cur);
				return;
			}
			else if (cur == tail)		//cur�� tail �� ��
			{
				tail = tail->prev;
				tail->next = nullptr;
				std::cout << cur->is_Today() << "�� ���� �Ǿ����ϴ�." << std::endl;
				free(cur);
				return;
			}
			else{						//�߰� �� ��
				cur->next->prev = cur->prev;
				cur->prev->next = cur->next;
				free(cur);
				std::cout << cur->is_Today() << "�� ���� �Ǿ����ϴ�." << std::endl;
				std::cout << "���� �Ϸ�" << std::endl;
				return;
			}
		}
		cur = cur->next;
		std::cout << " in " << std::endl;
	}
	std::cout << " ���� ���� " << std::endl;
	return;	//����� ���� �ƴٸ� return 0;
}

void ListMgr::is_Print(DailyNode* _dayptr)
{
	std::cout << _dayptr->is_Today() << std::endl;
}

void ListMgr::is_Print(void)
{
	DailyNode* cur = new DailyNode;
	cur = this->head;
	
	do 
	{
		std::cout << cur->is_Today() << std::endl;
		cur = cur->next;
	} while (cur != nullptr);
	return;
	
}

void ListMgr::is_Insert(void)
{
	int _day;
	std::cout << "��¥�� �Է��ϼ���" << std::endl;
	std::cin >> _day;
if (this->head == NULL)
	{
		is_InsertDayHead(_day);
		std::cout << "��忡 ��" << std::endl;
	}
	else
	{
		is_InputNode(_day);
		std::cout << "�ڿ� ��" << std::endl;
	}
}

void ListMgr::is_Search(void)
{
	DailyNode* cur = head;
	int _day;
	std::cout << "�˻� �� ��¥ �Է�" << std::endl;
	std::cin >> _day;
	while (cur != this->tail)
	{
		if (cur->is_Today() ==_day)
		{
			cur->is_Print();
		}
		cur = cur->next;
	}

}
