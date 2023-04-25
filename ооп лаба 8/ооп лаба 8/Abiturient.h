#pragma once
#include "Person.h"
class Abiturient :
    public Person
{
public:
    Abiturient();
    ~Abiturient() {};
    void Show();
    void Input();
    Abiturient(string,int,int, string);
    Abiturient(const Abiturient&);
    int get_scores() { return scores; }
    string get_spec() { return spec; }
    void set_scores(int);
    void set_spec(string);
    Abiturient& operator=(const Abiturient&);
    int get_age() { return age; }
protected:
    int scores;
    string spec;
};

