#pragma once
#include "Growing_Array.h"

using namespace System;

ref class Set{
private:
	Growing_Array ^storage;
public:
	int counter;

	Set();
	~Set();
	int countItem(Item^ desired);
	void addItem(Item^ it);
	void delItem(Item^ it);
	Item^ getItem(int pos);
	void poolFromString(String^); // заполнение элементов множества из строки
	String^ getItemsString(); // получить элементы множества в виде строки
	Set^ operator+(Set^ right);
	Set^ operator*(Set^ right);
	Set^ operator-(Set^ right);
	Set^ operator/(Set^ right);
};

