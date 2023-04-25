#pragma once
#include"Event.h"
class object
{
public:
	object();
	virtual void Show() = 0;
	virtual void Input() = 0;
	virtual ~object();
	virtual void HandleEvent(const TEvent& e) = 0;
	virtual int get_age()=0;
};

