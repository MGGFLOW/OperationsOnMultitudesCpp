#include "pch.h"
#include <iostream>

using namespace std;

class item { // класс объекта множества, который при желании можно изменить
private:
	int value; // значение, в данном случае целого типа
public:

	void inputValue() { // ввод знаения из консоли
		cin >> this->value;
	}

	void viewValue() { // вывод значения в консоль
		cout << this->value;
	}

	void setValue(int val) { // установить значение
		this->value = val;
	}

	int getValue() { // получить значение
		return this->value;
	}

	friend bool operator==(const item& left, const item& right); // перегрузка оператора сравнения для сравнения величин
};

bool operator==(const item& left, const item& right) {
	return left.value == right.value;
}

class growing_array { // класс реализующий увеличивающийся одномерный массив
private:
	item *arr;

	void grow() { // функция увеличения размера массива
		item *temp;
		int i;
		temp = new item[length];

		for (i = 0; i < length; i++) {
			temp[i] = arr[i];
		}

		delete[] arr;

		arr = new item[length * 2];
		for (i = 0; i < length; i++) {
			arr[i] = temp[i];
		}
		delete[] temp;

		length *= 2;
	}
public:
	int length; // текущая длина массива

	growing_array(int len=1) : length(len) { // выделение памяти в конструкторе
		arr = new item[length];
	}

	void setItem(int pos, item it) { // добавление элемента в определённую позицию
		if (pos >= length) {
			grow();
		}

		arr[pos] = it;
	}

	item getItem(int pos) { // получить элемент определённой позиции
		return arr[pos];
	}

	~growing_array() { // очищение памяти
		delete[] arr;
	}
};

class set { // класс, реализующий функционал множества
private:
	growing_array *storage; // самоувеличивающийся массив для хранения элементов множества
public:
	int counter; // счётчик количества элементов

	set() { // выделение памяти для массива элементов и обнуление счётчика количества элементов
		storage = new growing_array();
		counter = 0;
	}
	~set() { // очищение памяти
		delete storage;
	}

	int countItem(item desired) { // подсчёт количества элемента в множестве (поиск)
		int c = 0;
		for (int i = 0; i < counter; i++) {
			if (storage->getItem(i) == desired) {
				c++;
			}
		}

		return c;
	}

	void addItem(item it) { // добавление элемента в множество
		storage->setItem(counter, it);
		counter++;
	}

	void delItem(item it) { // удаление элемента из множества
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

	item getItem(int pos) { // получение элемента по номеру его позиции
		return storage->getItem(pos);
	}

	void viewElements() { // отображение элементов множества
		item temp;
		cout << "\nView items:" << endl;
		for (int i = 0; i < counter; i++) {
			temp = storage->getItem(i);
			temp.viewValue();
			cout << endl;
		}
	}

	void newElement() { // обёртка создания нового элемента множества
		item temp;
		cout << "Input new element value: ";
		temp.inputValue();
		if (countItem(temp) == 0) {
			addItem(temp);
		}
	}

	void delElement() {  // обёртка удаление элемента множества
		item temp;
		cout << "\nInput element value: ";
		temp.inputValue();
		
		delItem(temp);
	}

	void count() { // обёртка подсчёта элемента в множестве ( поиск)
		int cnt;
		item temp;
		cout << "\nInput value for count: ";
		temp.inputValue();
		cnt = countItem(temp);

		cout << "Counted " << cnt << "elements" << endl;
	}


	set& operator+(set& right) { // перегрузка оператора сложения для множеств (объединение)
		set *temp = new set();
		item bet;

		for (int i = 0; i < this->counter; i++) {
			bet = this->getItem(i);
			if (temp->countItem(bet) == 0) {
				temp->addItem(bet);
			}
		}

		for (int i = 0; i < right.counter; i++) {
			bet = right.getItem(i);
			if (temp->countItem(bet) == 0) {
				temp->addItem(bet);
			}
		}

		return *temp;
	}

	set& operator*(set& right) { // перегрузка оператора умножения для множеств (пересечение)
		set *temp = new set();
		item bet;

		for (int i = 0; i < this->counter; i++) {
			bet = this->getItem(i);
			if (right.countItem(bet) > 0) {
				temp->addItem(bet);
			}
		}

		return *temp;
	}

	set& operator-(set& right) { // перегрузка оператора вычитания для множеств (разность)
		set *temp = new set();
		item bet;

		for (int i = 0; i < this->counter; i++) {
			bet = this->getItem(i);
			if (right.countItem(bet) == 0) {
				temp->addItem(bet);
			}
		}

		return *temp;
	}

	set& operator/(set& right) { // перегрузка оператора деления для множеств (симметричная разность)
		set *temp = new set();
		item bet;

		for (int i = 0; i < this->counter; i++) {
			bet = this->getItem(i);
			if (right.countItem(bet) == 0) {
				temp->addItem(bet);
			}
		}

		for (int i = 0; i < right.counter; i++) {
			bet = right.getItem(i);
			if (this->countItem(bet) == 0) {
				temp->addItem(bet);
			}
		}

		return *temp;
	}

};

int main(){
	set a, b, c;

	cout << "a" << endl; // ввод элементов множества А
	a.newElement();
	a.newElement();
	a.newElement();

	cout << "b" << endl; // ввод элементов множества B
	b.newElement();
	b.newElement();
	b.newElement();

	c = a + b; // Объединение A и B 
	c.viewElements();

	c = a - b; // Разность A и B 
	c.viewElements();

	c = a * b; // Пересечение A и B 
	c.viewElements();

	c = a / b; // Симметричная разность A и B 
	c.viewElements();
	
}