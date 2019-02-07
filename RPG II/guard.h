#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "patient.h"


using namespace std;

class Patient;
class Guard : public Person
{
public:
	int evilness;
	Guard(std::string n="Olek", int p=10, int m=10, int s=12, int w=8, int e=10, int x=0, int y=0) :Person(n, p, m, s, w, x, y)
    {
    	evilness = e;
    };
    ~Guard();
	void paralyse(Patient* p1);
	void help(Patient* p1);
	void fight(Patient* p1);
};
