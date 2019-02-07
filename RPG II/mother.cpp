#include <fstream>
#include <iostream>
#include "parent.h"
#include "mother.h"

using namespace std;

Mother::~Mother(){

}

Mother::Mother(std::string n, int x, int y, int p, char s){

 name = n;
 posX = x;
 posY = y;
 php = p;
 sex = s;
}

void Mother::talk(){
    std::string answer;
	while (answer!="nie"){

	    cout<<"Czy chcesz tu zostać na zawsze?"<<endl<<"(tak/nie)"<<endl;
	    cin>>answer;
	    if (answer == "tak"){
	    	cout<<"To sie swietnie sklada"<<endl;
	    }
	}
}

void Mother::punish(Parent *pointer)
{
    pointer -> setPhp(pointer -> getPhp() - 5);
}