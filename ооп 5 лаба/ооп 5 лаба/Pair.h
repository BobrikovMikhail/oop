#pragma once
#include "object.h"
#include <iostream>
using namespace std;
class Pair :
    public object
{
public:
    Pair(void);
    virtual ~Pair(void);
    void Show();
    Pair(int, int);
    Pair(const Pair&);
    int get_first();
    void set_first(int);
    int get_second();
    void set_second(int);
    Pair& operator=(const Pair&);
    friend istream& operator>>(istream& in, Pair& t);
    friend ostream& operator<<(ostream& out, const Pair& t);
    void proizv();
protected:
    int first;
    int second;
};

