#include "List.h"

//ListMgr* listMgr;
ListMgr::ListMgr()
{
	std::cout << "생성자" << std::endl;
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
	return true;	//head 삽입 완료
}

void ListMgr::is_InputNode(int _day)	//tail 쪽에 삽입을 사용.
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
	std::cout << "삭제 할 날짜 입력" << std::endl;
	std::cin >> _day;
	cur = head ;
	while (cur != nullptr)	// 날짜가 비어있지 않다면
	{
		if (cur->is_Today() == _day)	// 날짜가 같을 시
		{
			if (cur == head)			//cur이 헤드일 떄
			{
				head = head->next;
				head->prev = NULL;
				std::cout << cur->is_Today() << "이 삭제 되었습니다." << std::endl;
				free(cur);
				return;
			}
			else if (cur == tail)		//cur이 tail 일 때
			{
				tail = tail->prev;
				tail->next = nullptr;
				std::cout << cur->is_Today() << "이 삭제 되었습니다." << std::endl;
				free(cur);
				return;
			}
			else{						//중간 일 때
				cur->next->prev = cur->prev;
				cur->prev->next = cur->next;
				free(cur);
				std::cout << cur->is_Today() << "이 삭제 되었습니다." << std::endl;
				std::cout << "삭제 완료" << std::endl;
				return;
			}
		}
		cur = cur->next;
		std::cout << " in " << std::endl;
	}
	std::cout << " 삭제 실패 " << std::endl;
	return;	//제대로 실행 됐다면 return 0;
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
	std::cout << "날짜를 입력하세요" << std::endl;
	std::cin >> _day;
if (this->head == NULL)
	{
		is_InsertDayHead(_day);
		std::cout << "헤드에 들어감" << std::endl;
	}
	else
	{
		is_InputNode(_day);
		std::cout << "뒤에 들어감" << std::endl;
	}
}

void ListMgr::is_Search(void)
{
	DailyNode* cur = head;
	int _day;
	std::cout << "검색 할 날짜 입력" << std::endl;
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
