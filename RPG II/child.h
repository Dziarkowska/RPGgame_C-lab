#pragma once
#include <iostream>
#include <fstream>
#include "patient.h"
#include "mother.h"

class Child :public Mother
{
public:

    Child(std::string n = "sister", int x=0, int y=0, int p=10, char s='f');
	~Child();
	virtual void talk();
	virtual void punish(Parent *point);


};