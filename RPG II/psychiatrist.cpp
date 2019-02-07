#include <iostream>
#include <string>
#include "person.h"
#include "patient.h"
#include "psychiatrist.h"
#include "doctor.h"



Psychiatrist::~Psychiatrist(){

}

void Psychiatrist::giveMedicine(Patient *p1){
    
    (*p1).setMhp((*p1).getMhp()+2);
}
void Psychiatrist::drug(Patient *p1){
	    (*p1).setMhp((*p1).getMhp()-2);
}