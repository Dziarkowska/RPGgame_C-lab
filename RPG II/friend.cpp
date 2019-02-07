#include <iostream>
#include <string>
#include "person.h"
#include "friend.h"

using namespace std;

void Friend::help(Person* p1)
{
	(*p1).setStrength((*p1).getStrength()+1);
	(*p1).setWisdom((*p1).getWisdom()+1);
}