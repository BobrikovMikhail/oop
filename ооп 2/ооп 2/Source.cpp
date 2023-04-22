#include "Header.h"
#include <iostream>
using namespace std;
road::road() {
	start = "Perm";
	finish = "Penza";
	time = 12;
}
road::road(const road &p) 
{
	start = p.start;
	finish = p.finish;
	time = p.time;
}
road::road(string a, string b, float c) {
	start = a;
	finish = b;
	time = c;
}
road::~road() {
	cout << "Destructor" << endl;
}
string road::get_start() {
	return start;
}
void road::set_start(string N) {
	start = N;
}
string road::get_finish() {
	return finish;
}
void road::set_finish(string M) {
	finish = M;
}
float road::get_time() {
	return time;
}
void road::set_time(float K) {
	time = K;
}
void road::show() {
	cout << start<<' ';
	cout << finish<<' ';
	cout << time;
}



