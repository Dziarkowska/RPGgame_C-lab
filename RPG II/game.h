#pragma once
#include <iostream>
#include <fstream>
#include "patient.h"
#include "person.h"
#include "guard.h"
#include "map.h"
#include "friend.h"
#include "fileopen.h"
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
class Game
{
 public:
	Game();
	~Game();
	int play(Patient p1, Guard dg, Guard zg, Doctor dd, Doctor zd, Friend f, Goldenquestion goldenquestion, Savetotxt savetotxt, Psychiatrist dpsych, Psychiatrist zpsych, Cardiologist zcardio, Cardiologist dcardio, Parent *pointer, Parent &dad, Parent &mum, Parent &sis, Parent &bro, Animal *pointer2, Dog &dog, Cat &cat);

};