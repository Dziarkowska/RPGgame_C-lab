#include <iostream>
#include <fstream>
#include "animal.h"

using namespace std;

int Animal::getPosX() 
 {
	return posX;
 } 
void Animal::setPosX(int x)
 {
	posX = x;
 }
int Animal::getPosY()
 {
	return posY;
 }
void Animal::setPosY(int y)
 {
	posY = y;
 }
 int Animal::getPhp()
{
	return php;
}
void Animal::setPhp(int newphp)
{
 	php=newphp;
 }