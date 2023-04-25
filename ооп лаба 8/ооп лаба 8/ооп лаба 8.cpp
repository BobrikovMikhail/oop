// ооп лаба 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "object.h"
#include "Person.h"
#include "Abiturient.h"
#include"Vector.h"
#include"Dialog.h"
using namespace std;
int main()
{
	setlocale(0, "ru");
	/*Person* a = new Person;
	a->Input();
	a->Show();
	Abiturient* b = new Abiturient;
	b->Input();
	b->Show();
	Vector v(10);
	v.add();
	v.add();
	v.Show();
	cout << "\nVector size=" << v();
	v.del();
	cout << "\nVector size=" << v();*/
	Dialog D;
	D.Execute();

}