﻿// ооп лаба 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"
using namespace std;

void main()
{
	Vector a(5);
	cout << a << endl;
	cin >> a;
	cout << a<<endl;
	a[2] = 100;
	cout << a << endl;
	Vector b(5);
	cout << b << endl;
	b = a;
	cout << b << endl;
	Vector c(5);
	c = a + b;
	cout << c << endl;
	cout << "lentgh of Vector a=" << a() << endl;
	cout << *(a.first()) << endl;
	Iterator i = a.last();
	--i;
	cout << *i << endl;
	for (i = a.first(); i != a.last();++i)cout << *i << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
