#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
public:
	std::string name;
	int php; //physicalhealthpoints
	int mhp; //mentalhealthpoints
	int strength;
	int wisdom;
	int posX;
	int posY;

	Person(std::string n = "Jozek", int p=10, int m=10, int s=10, int w=10, int x=0, int y=0);
	~Person();
	int getPhp();
    void setPhp(int );
    int getMhp();
    void setMhp(int );
    int getStrength();
    void setStrength(int );
    int getWisdom();
    void setWisdom(int );
    int getPosX();
    void setPosX(int);
    int getPosY();
    void setPosY(int);
    //friend ostream& operator<< (ostream&, Person const&);
	void show();
	void fight();
};
