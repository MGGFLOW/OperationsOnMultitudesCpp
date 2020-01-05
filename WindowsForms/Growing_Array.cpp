#include "stdafx.h"
#include "Growing_Array.h"


Growing_Array::Growing_Array(int len) : length(len) {
	arr = gcnew array<Item^>(length);
}

void Growing_Array::grow() {
	array<Item^>^ temp;
	int i;
	temp = gcnew array<Item^>(length);

	for (i = 0; i < length; i++) {
		temp[i] = arr[i];
	}

	delete[] arr;

	arr = gcnew array<Item^>(length*2);
	for (i = 0; i < length; i++) {
		arr[i] = temp[i];
	}
	delete[] temp;

	length *= 2;
}

void Growing_Array::setItem(int pos, Item^ it) {
	if (pos >= length) {
		grow();
	}

	arr[pos] = it;
}

Item^ Growing_Array::getItem(int pos) {
	return arr[pos];
}

Growing_Array::~Growing_Array() {
	delete[] arr;
}
