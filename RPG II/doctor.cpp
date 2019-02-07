#include <iostream>
#include <string>
#include "person.h"
#include "doctor.h"
#include "patient.h"

using namespace std;

void Doctor::poison(Patient* p1)
{
	if((*p1).getWisdom() > this->getWisdom())
	{
		(*p1).setWisdom((*p1).getWisdom()+1);
		(*p1).setMhp((*p1).getMhp()+2);
	}
	else
	{
		(*p1).setWisdom((*p1).getWisdom()-1);
		(*p1).setStrength((*p1).getStrength()-2);
		(*p1).setPhp((*p1).getPhp()-1);
		(*p1).setMhp((*p1).getMhp()-1);
	}
}

void Doctor::heal(Patient* p1)
{
	(*p1).setMhp((*p1).getMhp()+1);
	(*p1).setPhp((*p1).getPhp()+2);
}
void Doctor::fight(){
	
}