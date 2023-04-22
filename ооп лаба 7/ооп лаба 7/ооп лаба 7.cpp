// ооп лаба 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"
#include "Time.h"
using namespace std;
int main() {
	
	Vector<int>a(5, 0);
	cin >> a;
	cout << a << endl;
	Vector<int>B(10, 1);
	cout << B << endl;
	B = a;
	cout << B << endl;
	cout << a[2] << endl;
	cout << "size=" << a() << endl;
	B = a + 10;
	cout << B << endl;
	Time t;
	cin >> t;
	cout << t;
	Vector<Time>c(5, t);
	cin >> c;
	cout <<c << endl;
	Vector<Time>d(10, t);
	cout << d << endl;
	d = c;
	cout <<d << endl;
	cout << c[2] << endl;
	cout << "size=" << c() << endl;
	d = c + t;
	cout << d<< endl;
}
