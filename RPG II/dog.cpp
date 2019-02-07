#include <iostream>
#include <fstream>
#include "animal.h"
#include "dog.h"

using namespace std;

Dog::Dog(std::string n, int p, int x, int y, bool f){
	name = n;
	php = p;
	posX = x;
	posY = y;
	friendly = f;
}

void Dog::help(){

}