#pragma once
#include <iostream>
#include "person.h"
#include "patient.h"
class Animal{
public:

	std::string name;
	int php;
	int posX;
	int posY;	
	bool friendly;
	Animal(){};
	virtual ~Animal(){};
	virtual void help()=0; 
	int getPosX();
    void setPosX(int);
    int getPosY();
    void setPosY(int);
    int getPhp();
    void setPhp(int );

};
