#include "stdafx.h"
#include "Set.h"


Set::Set(){
	storage = gcnew Growing_Array(1);
	counter = 0;
}

Set::~Set() {
	delete storage;
}

int Set::countItem(Item^ desired) {
	int c = 0;
	for (int i = 0; i < counter; i++) {
		if (storage->getItem(i) == desired) {
			c++;
		}
	}

	return c;
}

void Set::addItem(Item^ it) {
	if (countItem(it) == 0) {
		storage->setItem(counter, it);
		counter++;
	}
}

void Set::delItem(Item^ it) {
	for (int i = 0; i < counter; i++) {
		if (storage->getItem(i) == it) {
			for (int j = i; j < counter - 1; j++) {
				storage->setItem(j, storage->getItem(j + 1));
			}
			counter--;
			break;
		}
	}
}

Item^ Set::getItem(int pos) {
	return storage->getItem(pos);
}

void Set::poolFromString(String^ str) {
	int len = str->Length;
	String^ buf = "";
	String^ delm = " ";
	Item^ temp;

	for (int i = 0; i < len; i++) {
		if (str[i] != delm[0]) {
			buf += str[i];
		}
		if((buf->Length != 0) && ((i==len-1) || (str[i] == delm[0]) )) {
			temp = gcnew Item;
			temp->setValue(Convert::ToInt32(buf));
			addItem(temp);
			buf = "";
		}
	}
}

String^ Set::getItemsString() {
	String^ temp = "";

	for (int i = 0; i < counter; i++) {
		temp += Convert::ToString(getItem(i)->getValue()) + " ";
	}

	return temp;
}

Set^ Set::operator+(Set^ right) {
	Set ^temp = gcnew Set();
	Item ^bet;

	for (int i = 0; i < this->counter; i++) {
		bet = this->getItem(i);
		if (temp->countItem(bet) == 0) {
			temp->addItem(bet);
		}
	}

	for (int i = 0; i < right->counter; i++) {
		bet = right->getItem(i);
		if (temp->countItem(bet) == 0) {
			temp->addItem(bet);
		}
	}

	return temp;
}

Set^ Set::operator*(Set^ right) {
	Set ^temp = gcnew Set();
	Item ^bet;

	for (int i = 0; i < this->counter; i++) {
		bet = this->getItem(i);
		if (right->countItem(bet) > 0) {
			temp->addItem(bet);
		}
	}

	return temp;
}

Set^ Set::operator-(Set^ right) {
	Set ^temp = gcnew Set();
	Item ^bet;

	for (int i = 0; i < this->counter; i++) {
		bet = this->getItem(i);
		if (right->countItem(bet) == 0) {
			temp->addItem(bet);
		}
	}

	return temp;
}

Set^ Set::operator/(Set^ right) {
	Set ^temp = gcnew Set();
	Item ^bet;

	for (int i = 0; i < this->counter; i++) {
		bet = this->getItem(i);
		if (right->countItem(bet) == 0) {
			temp->addItem(bet);
		}
	}

	for (int i = 0; i < right->counter; i++) {
		bet = right->getItem(i);
		if (this->countItem(bet) == 0) {
			temp->addItem(bet);
		}
	}

	return temp;
}
