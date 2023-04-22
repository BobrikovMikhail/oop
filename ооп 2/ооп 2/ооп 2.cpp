// ооп 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "ru");
    cout << "Конструктор без параметров: ";
    road T1;
    T1.show();
    cout << endl;
    road t2("Chernushka","Gornozavosk",7);
    cout << "Конструктор с параметрами: ";
    t2.show();
    cout << endl;
    road t3 = t2;
    cout << "Конструктор копирования: ";
    t3.show();
    cout << endl;
    t3.set_start("Perm");
    string s=t3.get_start();
    cout << "Селекторы + модификаторы: ";
    cout << s<<' ';
    t3.set_finish("Sochi");
    string s1=t3.get_finish();
    cout << s1<<' ';
    t3.set_time(90);
   float s2= t3.get_time();
   cout << s2;
   cout << endl;
    

    return 0;
}

