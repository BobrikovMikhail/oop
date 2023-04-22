#include "Header.h"
#include <iostream>
using namespace std;
Pair::Pair() {
	first = 0;
	second = 0;
}
Pair::Pair(int a, int b) {
	first = a;
	second = b;
}
Pair::Pair(const Pair& p) {
	first = p.first;
	second = p.second;
}
Pair::~Pair(){}
Pair& Pair::operator=(const Pair& t) {
	if (&t == this) return *this;
	first = t.first;
	second = t.second;
	return *this;
}
istream& operator>>(istream& in, Pair& t) {
	cout << "?first "; in >> t.first;
	cout << "?second "; in >> t.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& t) {
	return (out << t.first << " " << t.second << endl);
}
void Pair::proizv(){
	int pr = first * second;
	cout << "Произведение= " << pr<<endl;
}