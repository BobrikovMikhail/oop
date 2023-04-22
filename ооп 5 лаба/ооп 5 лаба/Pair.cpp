#include "Pair.h"

Pair::Pair() {
	first = 0;
	second = 0;
}
Pair::~Pair() {

}
Pair::Pair(int a, int b) {
	first = a;
	second = b;
}
Pair::Pair(const Pair& p) {
	first = p.first;
	second = p.second;
}
int Pair::get_first() {
	return first;
}
void Pair::set_first(int c) {
	first = c;
}
int Pair::get_second() {
	return first;
}
void Pair::set_second(int b) {
	second = b;
}
Pair& Pair::operator=(const Pair& t) {
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}
istream& operator>>(istream& in, Pair& t) {
	cout << "?first: "; in >> t.first;
	cout << "?second: "; in >> t.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& t) {
	out << "\nout first: " << t.first;
	out << "\nout second: " << t.second;
	out << "\n";
	return out;
}
void Pair::Show() {
	cout << "\nshow first: " << first;
	cout << "\nshow second: " << second;
	cout << "\n";
}
void Pair::proizv() {
	int pr = first * second;
	cout <<"Произведение=" << pr<<endl;
}
