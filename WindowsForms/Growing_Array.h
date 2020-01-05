#pragma once
#include "Item.h"

ref class Growing_Array{
private:
	array<Item^>^ arr;
	void grow();
public:
	int length;
	Growing_Array(int);
	void setItem(int, Item^);
	Item^ getItem(int);
	~Growing_Array();
};

