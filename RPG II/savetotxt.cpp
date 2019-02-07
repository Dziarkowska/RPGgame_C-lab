#include "savetotxt.h"
#include "patient.h"
#include <iostream>
#include <fstream>

using namespace std;
ofstream file1("statystyki_patient.txt");
ofstream file2("statystyki_guard.txt");
Savetotxt::Savetotxt()
{

}
Savetotxt::~Savetotxt()
{

}

void Savetotxt::save(Patient* p1)
{  
  fstream file;
	file.open( "statystyki_patient.txt", std::ios::out );
	if( file.good() == true )
   {
       file<<"php: "<<(*p1).getPhp()<<endl;
       file<<"mhp: "<<(*p1).getMhp()<<endl;
       file<<"strength: "<<(*p1).getStrength()<<endl;
       file<<"wisdom: "<<(*p1).getWisdom()<<endl;
       file.close();
   } 
 }

 void Savetotxt::save(Guard* zg)
 {
  fstream file;  
	file.open( "statystyki_guard.txt", std::ios::out );
	if( file.good() == true )
   {
       file<<"php: "<<(*zg).getPhp()<<endl;
       file<<"mhp: "<<(*zg).getMhp()<<endl;
       file<<"strength: "<<(*zg).getStrength()<<endl;
       file<<"wisdom: "<<(*zg).getWisdom()<<endl;
       file.close();
   } 

 }