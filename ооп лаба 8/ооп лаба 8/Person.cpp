#include "Person.h"
#include"Event.h"
Person::Person() {
	age = 0;
	name = "";
}
Person::~Person(){}
Person::Person(string n, int a) {
	age = a;
	name = n;
}
Person::Person(const Person& peo) {
	age = peo.age;
	name = peo.name;
}
void Person::set_name (string c) {
	name = c;
}
void Person::set_age(int a) {
	age = a;
}
Person& Person::operator=(const Person& b) {
	if (&b == this) return*this;
	name = b.name;
	age = b.age;
	return *this;
}
void Person::Show() {
	cout << "\nname: " << name;
	cout << "\nage: " << age;
	cout << "\n";
}
void Person::Input() {
	cout << "\nname?"; cin >> name;
	cout << "\nage?"; cin >> age;
}
void Person::HandleEvent(const TEvent& e) {

}


