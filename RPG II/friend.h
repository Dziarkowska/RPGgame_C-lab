#pragma once
#include <iostream>
#include <string>
#include "person.h"


using namespace std;

class Friend : public Person
{
public:
	Friend(std::string n = "Bolek", int p=10, int m=10, int s=10, int w=10, int x=0, int y=0) : Person(n, p, m, s, w, x, y) {};
	void help(Person* p1);
};
