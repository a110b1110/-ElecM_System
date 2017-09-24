#pragma once
#ifndef __PTRTEMPLATE_H__
#define __PTRTEMPLATE_H__

template <typename T>
class Ptr
{
	T ptr;
public:
	inline T GetPtr() { return ptr; }
};
#endif // !__PTRTEMPLATE_H__
