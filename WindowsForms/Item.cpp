#include "stdafx.h"
#include "Item.h"


void Item::setValue(int val) {
	this->value = val;
}

int Item::getValue() {
	return this->value;
}


bool Item::operator==(Item^ right) {
	return this->value == right->value;
}

