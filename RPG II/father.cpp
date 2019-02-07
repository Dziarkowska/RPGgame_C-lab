#include <fstream>
#include <iostream>
#include "parent.h"
#include "father.h"

using namespace std;

Father::Father(std::string n, int x, int y, int p, char s, int e){
	 name = n;
     posX = x;
     posY = y;
     php = p;
     sex = s;
     evilness = e;
}

Father::~Father(){

}
void Father::talk()
{
    std::string answer;
    while (answer!="tak")
    {
        cout<<"Czy naprawde jestes swirem?"<<endl<<"(tak/nie)"<<endl;
        cin>>answer;
        if (answer == "nie")
        {
            cout<<"Musisz jeszcze nad soba popracowac"<<endl;
        }
    }

}
void Father::punish(Parent *pointer)
{
    pointer -> setPhp(pointer -> getPhp() - 5);
}