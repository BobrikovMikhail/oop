#pragma once
#include <iostream>
#include <string>
using namespace std;
class error
{
public:
	virtual void what(){};
};
class Indexerror :public error {
protected:
	string msg;
public:
	Indexerror() { msg = "Index Error\n"; }
	virtual void what() { cout << msg; }
};
class SizeError :public error
{
protected:
	string msg;
public:
	SizeError() { msg = "SizeError\n"; }
	virtual void what() { cout << msg; }
};
class MaxSizeError :public SizeError
{
protected:
	string msg_;
public:
	MaxSizeError() { SizeError(); msg_ = "size>MaxSize\n"; }
	virtual void what() { cout << msg<<msg_; }
};
class EmptySizeError :public SizeError
{
protected:
	string msg_;
public:
	EmptySizeError() { SizeError(); msg_ = "Vector is empty\n"; }
	virtual void what() { cout << msg << msg_; }
};
class IndexError1 :public Indexerror {
protected:
	string msg_;
public:
	IndexError1() { Indexerror(); msg_ = "Index<0\n"; }
	virtual void what() { cout << msg << msg_; }
};
class IndexError2 :public Indexerror {
protected:
	string msg_;
public:
	IndexError2() { Indexerror(); msg_ = "index>size\n"; }
	virtual void what() { cout << msg << msg_; }
};

