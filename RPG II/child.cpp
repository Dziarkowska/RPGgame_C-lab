#include <fstream>
#include <iostream>
#include "parent.h"
#include "child.h"

using namespace std;

Child::Child(std::string n, int x, int y, int p, char s){
	 
	 name = n;
     posX = x;
     posY = y;
     php = p;
     sex = s;
}

Child::~Child(){

}
void Child::talk()
{	
	    std::string answer;	
	    do{    
	        cout<<"Potrzebujesz pomocy?"<<endl<<"(tak/nie)"<<endl;
	        cin>>answer;       
	    
	           if (answer == "tak"){    	
	    		cout<<"Odszukaj naszego psa"<<endl;
	           }
	    }while(answer == "nie");
	    
}
void Child::punish(Parent *pointer)
{
    pointer -> setPhp(pointer -> getPhp() - 1);
}