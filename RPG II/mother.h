#pragma once
#include <iostream>
#include <fstream>
#include "parent.h"
#include "person.h"
#include "patient.h"

class Mother :public Parent
{
public:
    char sex;
    Mother(std::string n = "Mama", int x=0, int y=0, int p=10, char s='f');
	~Mother();
	virtual void talk();
	virtual void punish(Parent *point);


};