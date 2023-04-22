#pragma once
#include "Pair.h"

class rightAngled : public Pair
{
public:
	rightAngled(void);
	~rightAngled(void);
	void Show();
	rightAngled(int, int);
	rightAngled(const rightAngled&);
	rightAngled& operator=(const rightAngled&);
	friend istream& operator>>(istream& in, rightAngled& l);
	friend ostream& operator<<(ostream& out, const rightAngled& l);
	void gipo();

};

