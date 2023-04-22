#pragma once
#include "Header.h"
class rightAngled :
    public Pair
{
public:
    rightAngled(void);
public:
    ~rightAngled(void);
    rightAngled(int, int);
    rightAngled(const rightAngled&);
    rightAngled& operator=(const rightAngled&);
    friend istream& operator >>(istream& in, rightAngled& l);
    friend ostream& operator <<(ostream& out, const rightAngled& l);
    void gipo();
//protected:
//    int first;
//    int second;
};

