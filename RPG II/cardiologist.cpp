#include <iostream>
#include <string>
#include "person.h"
#include "patient.h"
#include "psychiatrist.h"
#include "doctor.h"
#include "cardiologist.h"


Cardiologist::~Cardiologist(){

}

void Cardiologist::respiration(Patient *p1){
    
    (*p1).setPhp((*p1).getPhp() - 5);
    (*p1).setStrength((*p1).getStrength() - 2);
}
void Cardiologist::suplement(Patient *p1){
	(*p1).setPhp((*p1).getPhp() + 2);
    (*p1).setStrength((*p1).getStrength() + 2);
}
