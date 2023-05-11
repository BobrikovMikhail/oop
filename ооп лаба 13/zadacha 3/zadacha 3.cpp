// zadacha 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map> 
#include "Time.h"
#include <algorithm>
using namespace std;
typedef map<int, Time> mp;
istream& operator>>(istream& in, pair<int, Time>& p)
{
    cout << "Введите ключ словаря: "; in >> p.first;
    cout << "\tВведите значение словаря:\n"; in >> p.second;
    return in;
}

mp make_deque(int kol) {
    mp v;
    for (int i = 0; i < kol; i++) {
        Time a;
        cin >> a;
        v.emplace(i, a);
    }
    return v;
}
void print_deque(mp q) {
    for (auto& p : q) {
        cout << p.first << " " << p.second << endl;
    }
}
void find_el2(mp& lst, Time p)
{
    if (find_if(lst.begin(), lst.end(), [&p](const pair<int, Time>& p2) { return (p == p2.second); }) != lst.end())
        cout << "Элемент найден" << endl;
    else
        cout << "Элемент не найден" << endl;
}

void add_el(mp& lst, Time p, int pos)
{
    if (find_if(lst.begin(), lst.end(), [&p](const pair<int, Time>& p2) { return (p == p2.second); }) != lst.end()) {
        cout << "Элемент найден" << endl;
        lst.emplace(pos, p);
    }
    else
        cout << "Элемент не найден" << endl;
}
void del_el(mp& d, int pos)
{
    d.erase(pos);
}

void min_max_mp(mp& d) {
    auto maxIt = max_element(d.begin(), d.end(),
        [](const auto& p1, const auto& p2) { return p1.second < p2.second; });
    auto minIt = min_element(d.begin(), d.end(),
        [](const auto& p1, const auto& p2) { return p1.second < p2.second; });
    Time maxVal = maxIt->second;
    Time minVal = minIt->second;
    for (auto& p : d) {
        p.second = p.second - (maxVal - minVal);
    }
}

int main()
{
    setlocale(0, "ru");
    mp d;
    int kol;
    Time s;
    cout << "Введите количество элементов: ";
    cin >> kol;
    d = make_deque(kol);
    cout << "Созданный словарь: ключ (значение)" << endl;
    print_deque(d);
    cout << "Введите существующее значение элемента для добавления:" << endl;
    cin >> s;
    cout << "Введите номер позиции для добавления: ";
    cin >> kol;
    add_el(d, s, kol);
    print_deque(d);
    cout << "Введите ключ элемента для удаления: ";
    cin >> kol;
    del_el(d, kol);
    print_deque(d);
    cout << "Введите ключ элемента для поиска: ";
    cin >> s;
    find_el2(d, s);
    cout << "Из каждого элемента вычтена разница максимального и минимального элементов" << endl;
    min_max_mp(d);
    print_deque(d);
}

