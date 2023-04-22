// ооп лаба4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"
#include "rightAngled.h"
using namespace std;
void f1(Pair& e) {
    e.proizv();
}
Pair f2() {
    rightAngled l(5, 9);
    return l;
}
int main()
{
    setlocale(0,"");
    Pair a;
    cin >> a;
    cout << a;
    a.proizv();
    Pair b(2, 4);
    cout << b;
    a = b;
    cout << a;
    rightAngled d;
    cin >> d;
    cout << d;
    d.gipo();
    cout << "передаём объект класса rightAngled"<<endl;
    f1(d);
    a = f2();
    cout << a;
}

