#include <iostream>
#include <fstream>
#include "patient.h"
#include "guard.h"

using namespace std;

Guard::~Guard()
{
  std::remove("statystyki_guard.txt"); 
}

void Guard::paralyse(Patient* p1)
{
	(*p1).setPhp((*p1).getPhp() - 1);
	(*p1).setStrength((*p1).getStrength() - 1);
}
void Guard::fight(Patient* p1)
{
   (*p1).setPhp((*p1).getPhp()-3);
}
void Guard::help(Patient* p1)
{
	(*p1).setMhp((*p1).getMhp()+1);
}