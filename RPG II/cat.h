#pragma once
#include <iostream>

class Cat :public Animal{
public:

	Cat(std::string n = "Filemon",int p=7, int x=0, int y=0, bool f = false);
	~Cat(){};
	virtual void help();

};