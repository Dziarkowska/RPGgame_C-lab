#include <iostream>
#include <fstream>
#include "patient.h"
#include "person.h"
#include "doctor.h"
#include "guard.h"
#include "friend.h"
#include "map.h"
#include "fileopen.h"
#include "game.h"
#include "savetotxt.h"
#include "goldenquestion.h"
#include "psychiatrist.h"
#include "cardiologist.h"
#include "parent.h"
#include "father.h"
#include "mother.h"
#include "child.h"
#include "animal.h"
#include "dog.h"
#include "cat.h"
using namespace std;

int main()
{
    
    
    Person *who;
    Parent *pointer;
    Animal *pointer2;
    Patient p1("Lolek", 10, 10, 10, 10, 1, 1);
    Guard dg("Mietek",10, 10, 12, 8, 0, 5, 2);
    Guard zg("Zdzisek", 10, 10, 12, 8, 10, 7, 6);
    Doctor dd("dobrydoc",10, 10, 8, 15, 0, 6, 3);
    Doctor zd("zlydoc", 10, 10, 8, 15, 10, 2, 5);
    Psychiatrist dpsych("Kajtek",10,10,8,15,0,3,3);
    Psychiatrist zpsych("Kajetan",10,10,8,15,15,1,8);
    Cardiologist zcardio("Kondziu",10,10,8,15,15,7,7);
    Cardiologist dcardio("Karolek",10,10,8,15,0,7,5);
    Friend f("Bolek",10, 10, 10, 10, 1, 3);
    Father dad("Tata", 1, 2, 10, 'm', 5);
    Mother mum("Mama",3, 8, 10, 'f');
    Child sis("Sisi", 1, 6, 10, 'f');
    Child bro("Bro", 1, 6, 10, 'm');
    Dog dog("Reksio", 3, 5, 3, true);
    Cat cat("Fileomn", 7, 7, 8, false);
    Savetotxt savetotxt;
    Goldenquestion goldenquestion;
    Fileopen fileopen;
    Fileopen *copy=new Fileopen();
    fileopen = Fileopen(*copy); 
    Map map;
    Game game;
    game.play(p1, dg, zg, dd, zd, f, goldenquestion, savetotxt, zpsych, dpsych, zcardio, dcardio, pointer, dad, mum, sis, bro, pointer2, dog, cat);

	return 0;
}
