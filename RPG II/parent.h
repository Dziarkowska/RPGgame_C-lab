#pragma once
#include <iostream>


class Parent
{
public:
    int php;
	int posX;
	int posY;
	std::string name;

     
    Parent();
    ~Parent();
    virtual void talk()=0;
    virtual void punish(Parent *pointer)=0; 
	int getPosX();
    void setPosX(int);
    int getPosY();
    void setPosY(int);
    int getPhp();
    void setPhp(int );
};