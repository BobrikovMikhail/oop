#pragma once
#include <string>
using namespace std;
class road {
	string start;
	string finish;
	float time;
public:
	road();
	road(string, string,float);
	road(const road&);
	~road();
	string get_start();
	void set_start(string);
	string get_finish();
	void set_finish(string);
	float get_time();
	void set_time(float);
	void show();
};