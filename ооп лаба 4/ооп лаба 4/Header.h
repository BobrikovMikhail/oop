#pragma once
#include <iostream>
using namespace std;
class Pair {
public:
	int first;
	int second;
public:
	Pair();
	Pair(int, int);
	Pair(const Pair&);
	~Pair();
	Pair& operator = (const Pair&);
	friend istream& operator >> (istream& in, Pair& t);
	friend ostream& operator << (ostream& out, const Pair& t);
	void proizv();
};