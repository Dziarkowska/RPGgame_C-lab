#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "patient.h"

using namespace std;
class Patient;
class Savetotxt
{
public:
    string filename;
	Savetotxt();
	~Savetotxt();
	void save(Patient* p1);
	void save(Guard* zg);
	
};