#include "rightAngled.h"
#include <math.h>
rightAngled::rightAngled(void) :Pair() {

}
rightAngled::~rightAngled() {

}
rightAngled::rightAngled(int a, int b): Pair(a,b) {

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
	cout << "catet 1: "; in >> l.first;
	cout << "catet 2: "; in >> l.second;
	return in;
}
ostream& operator<<(ostream& out, const rightAngled& l) {
	out << "\nout catet 1: " << l.first;
	out << "\nout catet 2: " << l.second;
	out << "\n";
	return out;
}
void rightAngled::Show() {
	cout << "\nshow catet 1: " << first;
	cout << "\nshow catet 2: " << second;
	cout << "\n";
}
	void rightAngled::gipo()
	{
		int gip = sqrt(first * first + second * second);
		cout << "гипотенуза = " << gip << endl;
	}

