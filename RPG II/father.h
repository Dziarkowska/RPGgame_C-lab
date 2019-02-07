#pragma once
#include <iostream>
#include <fstream>
#include "parent.h"

class Father :public Parent
{
public:
	char sex;
	int evilness;
	Father(std::string n = "Tata", int x=0, int y=0, int p=10, char s='m', int e=0);
	~Father();
	virtual void talk();
	virtual void punish(Parent *point);
};