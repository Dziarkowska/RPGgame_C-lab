#include <iostream>
#include "person.h"
#include <string>
#include "patient.h"
#include "doctor.h"
#include "guard.h"

using namespace std;

Person::Person(string n, int p, int m, int s, int w, int x, int y)
{
 			name = n;
	        php = p;
	        mhp = m;
	        strength = s;
	        wisdom = w;
	        posX = x;
	        posY = y;
}
Person::~Person()
{

}
int Person::getPhp()
{
	return php;
}
void Person::setPhp(int newphp)
{
 	php=newphp;
}
int Person::getMhp()
{
	return mhp;
}
void Person::setMhp(int newmhp)
{
 	mhp=newmhp;
}
int Person::getStrength()
{
	return strength;
}
void Person::setStrength(int newstrength)
{
 	strength=newstrength;
}
int Person::getWisdom()
{
	return wisdom;
}
void Person::setWisdom(int newwisdom)
{
 	wisdom=newwisdom;
}
int Person::getPosX()
{
	return posX;
}
void Person::setPosX(int x)
{
	posX = x;
}
int Person::getPosY()
{
	return posY;
}
void Person::setPosY(int y)
{
	posY = y;
}

    //ostream& operator<< (ostream &stats, Person const& person)
//{
  //stats << person.name <<endl<< "physicalhealth " << person.php << endl << " mentalhealth  " << person.mhp << endl;
  //stats << "strength "<< person.strength <<endl<< "wisdom " << person.wisdom << endl;

  //return stats;
//}
void Person::show()
{
	cout << name << endl << "physicalhealth " << php << endl << "mentalhealth " << mhp << endl;
	cout << "strength " << strength << endl << "wisdom " << wisdom << endl;
	
}
