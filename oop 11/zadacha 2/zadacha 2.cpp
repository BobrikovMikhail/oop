// zadacha 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <deque>
#include <cstdlib>
#include "Time.h"
using namespace std;
typedef deque<Time> deq2;

deq2 make_deque(int kol) {
    deq2 v;
    int min, sec;
    for (int i = 0; i < kol; i++) {
        min = rand() % 60;
        sec = rand() % 60;
        Time a(min,sec);
        //a = rand()/1.1;
       // a.set_min() = 30;//rand() % 100 - 50;
        v.push_back(a);
    }
    return v;
}
void print_deque(deq2 v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
bool find_key(deq2 v, Time key) {
    for (int i = 0; i < v.size(); i++) {
        if (key == v[i]) {
            return 1;

            ////auto result = find(v.begin(), v.end(), key);
            //if (result != v.end()) {
            //    return 1;
        }
    }
    return 0;
}
void add_deque(deq2& v, Time key, int pos) {
    v.insert(v.begin() + pos, key);
}
void del_deque(deq2& v, int pos) {
    v.erase(v.begin() + pos);
}
void max_min_deque(deq2& v) {
    Time min = v[0];
    Time max = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < min) min = v[i];
        if (v[i] > max) max = v[i];
    }
    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i] - (max - min);
    }
}

int main()
{
    setlocale(0, "ru");
    try {
        deq2 v;
        //deq::iterator di = d.begin();
        int kol;
        cout << "Введите количество элементов: ";
        cin >> kol;
        v = make_deque(kol);
        print_deque(v);
        Time key; //значение элемента
        bool pos; //индекс элемента
        int index;
        cout << "Введите значение элемента для добавления: "; cin >> key;
        pos = find_key(v, key);
        if (pos == 0) throw 1;
        else {
            cout << "Введите индекс для добавления: "; cin >> index;
            add_deque(v, key, index);
        }
        print_deque(v);
        cout << "Введите значение элемента для удаления: "; cin >> key;
        pos = find_key(v, key);
        if (pos == -1) throw 1;
        else del_deque(v, pos);
        print_deque(v);
        max_min_deque(v);
        print_deque(v);
    }
    catch (int) {
        cout << "Error";

    }
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
