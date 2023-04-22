#include "Products.h";
#include <iostream>
using namespace std;

void Products::cost() {
    int price = first * second;
    cout << "—умма: " << price << '\n';
}
void Products::Init(int f, int s) {
    first = f;
    second = s;
}
void Products::Read() {
   cout << "¬ведите цену на товар: ";
   cin >> first;
   cout << "¬ведите количество товаров: ";
   cin >> second;
}
void Products::Show() {
    cout << "цена: " << first << '\n';
    cout << "кол-во товара: " << second << '\n';
}