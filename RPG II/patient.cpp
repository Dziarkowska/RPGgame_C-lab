#include <iostream>
#include <fstream>
#include "person.h"
#include "patient.h"
#include <windows.h>

using namespace std;

Patient::~Patient()
{
    std::remove("statystyki_patient.txt"); 
}

void Patient::escape(Patient* p1)
{
	(*p1).setPhp((*p1).getPhp() + 1); 
}
void Patient::escape(Patient* p1, Doctor* dd)
{
	(*p1).setMhp((*p1).getMhp() + 1); 
}

void Patient::fight(Patient* p1)
{
	(*p1).setPhp((*p1).getPhp() - 1);
	(*p1).setMhp((*p1).getMhp() - 1);
	(*p1).setStrength((*p1).getStrength() - 1);
	(*p1).setWisdom((*p1).getWisdom() - 1);

}
void Patient::fight(Patient* p1, Guard* zg)
{
	if ((*p1).getStrength() < (*zg).getStrength() || (*p1).getWisdom() < (*zg).getWisdom() )
  {
	(*p1).setPhp((*p1).getPhp() - 3);
	(*p1).setStrength((*p1).getStrength() - 1);
	(*zg).setPhp((*zg).getPhp() - 1);
	(*zg).setWisdom((*zg).getWisdom() + 1);
	(*zg).setStrength((*zg).getStrength() + 1);

  }
  else 
  {
  	(*zg).setPhp((*zg).getPhp() - 3);
	(*zg).setStrength((*zg).getStrength() - 1);
	(*p1).setPhp((*p1).getPhp() - 1);
	(*p1).setWisdom((*p1).getWisdom() + 1);
	(*p1).setStrength((*p1).getStrength() + 1);
  	
  }

}

void Patient::fight(Patient* p1, Doctor* zd)
{
if ((*p1).getStrength() < (*zd).getStrength() || (*p1).getWisdom() < (*zd).getWisdom() )
{
	(*p1).setPhp((*p1).getPhp() - 2);
	(*p1).setMhp((*p1).getMhp() - 1);
	(*zd).setPhp((*zd).getPhp() - 1);
	(*zd).setWisdom((*zd).getWisdom() + 1);
}
else
{
	(*zd).setPhp((*zd).getPhp() - 2);
	(*zd).setMhp((*zd).getMhp() - 1);
	(*p1).setPhp((*p1).getPhp() - 1);
	(*p1).setWisdom((*p1).getWisdom() + 1);
}


}


void Patient::heal(Patient* p1)
{   
	(*p1).setPhp((*p1).getPhp() + 1);
	(*p1).setMhp((*p1).getMhp() + 1);
}