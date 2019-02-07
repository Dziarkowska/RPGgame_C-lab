#pragma once
#include <iostream>
#include "person.h"
#include "patient.h"


class Dog :public Animal{
public:

	Dog(std::string n = "Reksio",int p=3, int x=0, int y=0, bool f = true);
	~Dog(){};
	virtual void help();

};