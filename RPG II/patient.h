#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "doctor.h"
#include "guard.h"
using namespace std;
class Doctor;
class Patient : public Person
{
public:
	Patient(std::string n = "Jozek", int p=10, int m=10, int s=10, int w=10, int x=0, int y=0) :Person(n, p, m, s, w, x, y) {
    };
	~Patient();
	void escape(Patient* p1);
	void escape(Patient* p1, Doctor* dd);
	void fight(Patient* p1);
	void fight(Patient* p1, Guard* zg);
    void fight(Patient* p1, Doctor* zd);
	void heal(Patient* p1);
};
