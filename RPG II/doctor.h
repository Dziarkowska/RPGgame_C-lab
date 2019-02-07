#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "patient.h"

using namespace std;
class Patient;
class Doctor : public Person
{
public:
	int evilness;
	Doctor(std::string n = "Dokte", int p=10, int m=10, int s=8, int w=15, int e=10, int x=0, int y=0) :Person(n, p, m, s, w, x, y){
        evilness=e;
	};
	void poison(Patient* p1);
    void fight();
    void heal(Patient* p1);
};
