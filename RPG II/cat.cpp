#include <iostream>
#include <fstream>
#include "animal.h"
#include "cat.h"

using namespace std;

Cat::Cat(std::string n, int p, int x, int y, bool f){
	name = n;
	php = p;
	posX = x;
	posY = y;
	friendly = f;
}

void Cat::help(){
	
}