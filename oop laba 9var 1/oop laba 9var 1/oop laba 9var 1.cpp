// oop laba 9var 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"Vector.h"
using namespace std;

int main()
{
	try {
		Vector x(7);
		Vector y;
		cout << x;
		cout << "Index? ";
		int i;
		cin >> i;
		cout << x[i] << endl;
		y = x + 3;
		cout << y;
		cout << x;
		++x;
		cout << x;
}
	catch (exception& e) {
		cout << e.what();
	}
	catch(int)
	{
		cout << "Error!!!" << endl;
	}
	return 0;
}

