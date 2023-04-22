#include "object.h"
#include "Pair.h"
#include "rightAngled.h"
#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "ru");
	vector v(5);
	Pair a;
	cin >> a;
	cout << a << endl;
	rightAngled b;
	cin >> b;
	cout << b << endl;
	a.proizv();
	object* p = &a;//ставим указатель на объект класса Pair
	v.add(p);//добавляем объект в вектор
	p = &b;//ставим указатель на объект класса rightAngled
	v.add(p); //добавляем объект в вектор
	b.gipo();
	cout << v;
}