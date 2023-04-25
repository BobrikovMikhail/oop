#pragma once
#include <iostream>
#include <string>
#include "object.h"
#include"Event.h"
using namespace std;
class Person :
	public object
{
public:
	Person();
public:
	virtual ~Person();
	void Show();
	void Input();
	Person(string,int);
	Person(const Person&);
	string get_name() { return name; }
	int get_age() { return age; }
	void set_name(string);
	void set_age(int);
	Person& operator=(const Person&);
	void HandleEvent(const TEvent& e);
protected:
	string name;
	int age;
};

