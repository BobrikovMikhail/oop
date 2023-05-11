// zadacha 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <queue> 
#include "Time.h"
#include <algorithm>
using namespace std;
typedef priority_queue<Time> deq;

deq make_deque(int kol) {
    deq v;
    for (int i = 0; i < kol; i++) {
        Time a;
        cin >> a;
        v.emplace(a);
    }
    return v;
}
void print_deque(deq q) {
    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
}
void find_key(deq d, Time key) {
    int size = d.size();
    for (int i = 0; i < size; i++) {
        if (d.top() == key) {
            cout << "Элемент найден" << endl;
            return;
        }
        else {
            d.pop();
        }
    }
    cout << "Элемент не найден" << endl;
}

deq add_deque(deq d, Time key) {
    deq temp;
    for (int i = 0; i < d.size(); ) {
        if (!(d.top() == key)) {
            temp.push(d.top());
        }
        else {
            temp.push(d.top());
            temp.push(d.top());
        }
        d.pop();
    }
    return temp;
}

deq del_deque(deq d, Time key) {
    deq temp;
    for (int i = 0; i < d.size(); ) {
        if (!(d.top() == key)) {
            temp.push(d.top());
        }
        d.pop();
    }
    return temp;
}
deq min_max_deque(deq d) {
    deq temp;
    Time cur;
    Time max = d.top();
    for (int i = 0; i < d.size() - 1; ) {
        cur = d.top();
        d.pop();
        temp.push(cur);
    }
    Time min = d.top();
    cur = d.top();
    d.pop();
    temp.push(cur);
    for (int i = 0; i < temp.size(); ) {
        cur = temp.top();
        temp.pop();
        cur = cur - (max - min);
        d.push(cur);
    }
    return d;
}

int main()
{
    setlocale(0, "ru");
    deq d;
    int kol;
    Time s;
    cout << "Введите количество элементов: ";
    cin >> kol;
    d = make_deque(kol);
    cout << "Созданная очередь:" << endl;
    print_deque(d);
    cout << "Введите ключ элемента для поиска: ";
    cin >> s;
    find_key(d, s);
    cout << "Введите существующий ключ элемента для добавления: ";
    cin >> s;
    d = add_deque(d, s);
    print_deque(d);
    cout << "Введите ключ элемента для удаления: ";
    cin >> s;
    d = del_deque(d, s);
    print_deque(d);
    cout << "Из каждого элемента вычтена разница максимального и минимального элементов" << endl;
    d = min_max_deque(d);
    print_deque(d);
}