#include "rightAngled.h"
#include <iostream>
#include <math.h>
using namespace std;
rightAngled::rightAngled() :Pair()
{
}
rightAngled::~rightAngled() {

}
rightAngled::rightAngled(int a, int b) :Pair(a, b) {
}
rightAngled::rightAngled(const rightAngled& l) {
	first = l.first;
	second = l.second;
}
rightAngled& rightAngled::operator=(const rightAngled& l) {
	if (&l == this)return *this;
	first = l.first;
	second = l.second;
	return *this;
}
istream& operator>>(istream& in, rightAngled& l) {
	cout << "?katet1 "; in >> l.first;
	cout << "?katet2 "; in >> l.second;
	return in;
}
ostream& operator<<(ostream& out, const rightAngled& l) {
	out << "\nfirst: " << l.first;
	out << "\nsecond: " << l.second<<endl;
	return out;
}
void rightAngled::gipo() {
	int gip = sqrt(first * first + second * second);
	cout << "гипотенуза = "<<gip<<endl;
}


