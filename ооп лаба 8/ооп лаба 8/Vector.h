#pragma once
#include "object.h"
class Vector
{
public:
	Vector(int);
	Vector();
	~Vector();
	void add();
	void del();
	void Show();
	int operator()();
	//int srage();
	void ger_age_sr();
protected:
	object** beg;
	int size;
	int cur;
};

