#include "Daily.h"


DailyNode::DailyNode(int val)
{
//	prev = next = NULL;
	today = val;

}
DailyNode::DailyNode(DailyNode* n, DailyNode* p, int val)
{
	next = n;
	prev = p;
	today = val;
}
void DailyNode::is_Print()
{
	std::cout << today << std::endl;
}

DailyNode::DailyNode()
{
	prev = next = NULL;
}


DailyNode::~DailyNode()
{
}
