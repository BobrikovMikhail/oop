#include "Products.h";
#include <iostream>
using namespace std;

void Products::cost() {
    int price = first * second;
    cout << "�����: " << price << '\n';
}
void Products::Init(int f, int s) {
    first = f;
    second = s;
}
void Products::Read() {
   cout << "������� ���� �� �����: ";
   cin >> first;
   cout << "������� ���������� �������: ";
   cin >> second;
}
void Products::Show() {
    cout << "����: " << first << '\n';
    cout << "���-�� ������: " << second << '\n';
}