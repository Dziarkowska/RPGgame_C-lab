#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "patient.h"
#include "doctor.h"


class Psychiatrist :public Doctor
{
public:
	Psychiatrist(std::string n = "Korbin", int p=10, int m=10, int s=8, int w=16, int e=15, int x=0, int y=0) : Doctor(n, p, m, s, w, e, x, y){};
	~Psychiatrist();
	void giveMedicine(Patient* p1);
	void drug(Patient* p1);


};