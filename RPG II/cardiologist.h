#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "patient.h"
#include "doctor.h"

class Cardiologist :public Doctor
{
	public:
	Cardiologist(std::string n = "Krejzol", int p=10, int m=10, int s=8, int w=16, int e=15, int x=0, int y=0) : Doctor(n, p, m, s, w, e, x, y){};
	~Cardiologist();
	void respiration(Patient* p1);
	void suplement(Patient* p1);


};