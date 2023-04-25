#pragma once
#include"Event.h"
#include"Vector.h"
#include<iostream>
class Dialog:
	public Vector
{
public:
	Dialog();
	virtual ~Dialog();
	virtual void getEvent(TEvent& event);
	virtual int Execute();
	virtual void HandleEvent(TEvent& event);
	virtual void ClearEvent(TEvent& event);
	int Valid();
	void EndExec();
protected:
	int EndState;
};

