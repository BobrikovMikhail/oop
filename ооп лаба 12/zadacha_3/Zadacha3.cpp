// Zadacha3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
#include "Vector.h"
#include "Time.h"
using namespace std;

int main()
{
	setlocale(0, "rus");
	bool pos = 0;
	int n, key, index;
	cout << "Введите количество элементов в множестве: "; cin >> n;
	Vector<int> v(n);
	cout << "Множество:" << endl;
	v.Print();
	cout << "Задание 3" << endl;
	cout << "Введите элемент для добавления: "; cin >> key;
	v.add(key);
	v.Print();
	cout << "Задание 4" << endl;
	cout << "Введите значение элемента для удаления: "; cin >> key;
	v.del(key);
	v.Print();
	cout << "Задание 5" << endl;
	v.min_max();
	v.Print();
}