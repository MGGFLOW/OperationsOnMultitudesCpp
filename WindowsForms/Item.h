#pragma once
ref class Item{
private:
	int value;
public:
	//void inputValue();
	//void viewValue();
	void setValue(int val);
	int getValue();
	bool operator==(Item^);
};

