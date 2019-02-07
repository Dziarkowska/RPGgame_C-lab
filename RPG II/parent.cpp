#include <iostream>
#include <fstream>
#include "parent.h"

using namespace std;

Parent::Parent(){

}

Parent::~Parent(){

}
int Parent::getPosX() 
 {
	return posX;
 } 
void Parent::setPosX(int x)
 {
	posX = x;
 }
int Parent::getPosY()
 {
	return posY;
 }
void Parent::setPosY(int y)
 {
	posY = y;
 }
 int Parent::getPhp()
{
	return php;
}
void Parent::setPhp(int newphp)
{
 	php=newphp;
 }