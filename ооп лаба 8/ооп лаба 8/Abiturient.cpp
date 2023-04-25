#include "Abiturient.h"
Abiturient::Abiturient() {
	scores = 0;
	spec = "";
}
Abiturient::Abiturient(string n,int a,int b, string s):Person(n,a) 
{
	name = s;
	spec = a;
}
Abiturient::Abiturient(const Abiturient& l) {
	name = l.name;
	spec = l.spec;
}
void Abiturient::set_scores(int a) {
	scores = a;
}
void Abiturient::set_spec(string g) {
	spec = g;
}
Abiturient& Abiturient::operator=(const Abiturient& t) 
{
	if (&t == this)return *this;
	scores = t.scores;
	spec = t.spec;
	return *this;
}
void Abiturient::Show() {
	cout << "\nname:" << name;
	cout << "\nage:" << age;
	cout << "\nscores: " << scores;
	cout << "\nspec: " << spec;
	cout << "\n";
}
void Abiturient::Input() {
	cout << "name?"; cin >> name;
	cout << "age?"; cin >> age;
	cout << "scores?"; cin >> scores;
	cout << "spec?"; cin >> spec;
}