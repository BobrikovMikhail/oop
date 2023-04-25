#include "Vector.h"
#include "object.h"
#include "Person.h"
#include "Abiturient.h"
#include<iostream>
using namespace std;
Vector::~Vector() {
	if (beg != 0)delete[]beg;
	beg = 0;
}
Vector::Vector(int n) {
	beg = new object * [n];
	cur = 0;
	size = n;
}
void Vector::add() {
	object* p;
	cout << "1.Person" << endl;
	cout << "2.Abiturient" << endl;
	int y;
	cin >> y;
	if (y == 1) {
		Person* a = new (Person);
		a->Input();
		p = a;

		if (cur < size) {
			beg[cur] = p;
			cur++;
		}
	}
	else
		if (y == 2) {
			Abiturient* b = new Abiturient;
			b->Input();
			p = b;
			if (cur < size) {
				beg[cur] = p;
				cur++;
			}
		}
		else return;
}
void Vector::Show() {
	if (cur == 0) cout << "Empty" << endl;
		object** p = beg;
		for (int i = 0; i < cur; i++) {
			(*p)->Show();
			p++;
		}
	}
int Vector::operator()() {
	return cur;
}
void Vector::del() {
	if (cur == 0)return;
	cur--;
}
Vector::Vector() {
	beg = 0;
	size = 0;
	cur = 0;
}
void Vector::ger_age_sr() {
	int age = 0, age_sr = 0;
	if (cur == 0) cout << "Empty" << endl;
	object** p = beg;
	for (int i = 0; i < cur; i++) 
	{
		age = (*p)->get_age();
		cout << age << endl;
		age_sr += age;
		p++;
	}
	cout << "sr age" << age_sr / cur << endl;
}
//int Vector::srage() {
//	int count, srage;
//	if (cur == 0) cout << "Empty" << endl;
//	Person** p = beg;
//	for (int i = 0; i < cur; i++) {
//		srage += (*p)->get_age();
//	}
//}
