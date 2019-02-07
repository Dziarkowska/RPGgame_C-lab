#include <iostream>
#include <fstream>
#include <conio.h>
#include "patient.h"
#include "person.h"
#include "doctor.h"
#include "guard.h"
#include "friend.h"
#include "map.h"
#include "fileopen.h"
#include "savetotxt.h"
#include "goldenquestion.h"
#include "psychiatrist.h"
#include "cardiologist.h"
#include "parent.h" 
#include "father.h"
#include <time.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 27

using namespace std;

Game::Game(){

}
Game::~Game(){

}
int Game::play(Patient p1, Guard dg, Guard zg, Doctor dd, Doctor zd, Friend f, Goldenquestion goldenquestion, Savetotxt savetotxt, Psychiatrist dpsych, Psychiatrist zpsych, Cardiologist zcardio, Cardiologist dcardio, Parent *pointer, Parent &dad, Parent &mum, Parent &sis, Parent &bro, Animal *pointer2, Dog &dog, Cat &cat)
{

	Map map;
	srand(time(NULL));
	string messagePath = "wstep.txt";
    while(p1.getMhp() < 20)
	{
		map.updatePlayerPosition();
		cout << endl;
		map.draw();
		cout << endl;
		p1.show();
		cout << endl;
		Fileopen::message(messagePath);
		cout << endl;

		int key = 0;
		point potentialPosition;
		savetotxt.save(&p1);
		savetotxt.save(&zg);

		bool moved = 0;
		while(!moved){
 			switch((key=getch())){
		        case KEY_UP:
		        potentialPosition = point{p1.posX, p1.posY-1};
		        cout << "UP" << endl;
		        moved = 1;
		        break;
		        case KEY_DOWN:
		        potentialPosition = point{p1.posX, p1.posY+1};		        
		        cout << "DOWN" << endl;
		        moved = 1;
		        break;
		        case KEY_RIGHT:
		        potentialPosition = point{p1.posX+1, p1.posY};
		        cout << "RIGHT" << endl;
		        moved = 1;
		        break;
		        case KEY_LEFT:
		        potentialPosition = point{p1.posX-1, p1.posY};
		        cout << "LEFT" << endl;
		        moved = 1;
		        break;
		        case KEY_ESC:
		        cout<<"PAPATKI"<<endl;
		        return 0;
		        break;
		    }     
    	}

    	if(map.canPlayerGo(potentialPosition))
    	{
    		if(!map.willInteract(potentialPosition))
    		{
    			messagePath = "nothing.txt";
	   	 		p1.posX = potentialPosition.x;
	   	 		p1.posY = potentialPosition.y;
	   	 		map.setPlayerPosition(point{p1.posX, p1.posY});
    		}
    		else
    		{
    			char current = map.map[potentialPosition.y][potentialPosition.x];
    			switch(current){
   					case 'A':
   					{
			   	 		int a = rand() % 5;
			   	 		if (a == 1)
			   	 		{
			   	 			p1.heal(&p1);
			   	 			messagePath = "healthA.txt";
			   	 		}
			   	 		if (a == 2)
			   	 		{
			   	 			p1.fight(&p1);
			   	 			messagePath = "minushealthA.txt";
			   	 		}
			   	 		if (a == 3)
			   	 		{
			   	 			p1.setStrength(p1.getStrength() +2);
			   	 			messagePath = "strengthA.txt";
			   	 		}
			   	 		if (a == 4)
			   	 		{
			   	 			p1.setStrength(p1.getStrength() +2);
			   	 			messagePath = "minusstrengthA.txt";
			   	 		}
			   	 		if (a == 5)
			   	 		{
			   	 			p1.setWisdom(p1.getWisdom() +2);
			   	 			messagePath = "wisdomA.txt";
			   	 		}
			   	 		p1.posX = potentialPosition.x;
			   	 		p1.posY = potentialPosition.y;
			   	 		map.setPlayerPosition(point{p1.posX, p1.posY});
   		    			break;
   		    		}
			   	    case 'D':
			   	    {
				   	 	Fileopen::message("doctor.txt");
				   	 	int n;
				   	 	cin>>n;
				   	 	if (n == 1)
				   	 	{
			   	   		    int k = rand() %2;
		   	   		    	if (k == 1){
			   	   				dd.heal(&p1);
			   	   				messagePath = "doctor_heal.txt";
		   	   				}
		   	   		        else
		   	   		        {
			   	   			    zd.poison(&p1);
			                    messagePath = "doctor_poison.txt";
		   	   			    }
				   	    }
				   	    else if(n == 3)
				   	    {
				   	    	p1.fight(&p1,&zd);
				   	    	messagePath = "doctor_fight.txt";
				   	    }
				   	    else
				   	    {
				   	    	messagePath = "nothing.txt";
				   	    }
				   	 	break;
				   	}
				   	case 'F':
				   	{
				   	 	Fileopen::message("friend.txt");
				   	 	int n;
				   	 	cin>>n;
			   	 		if(n == 1)
			   	 		{
				   	 		f.help(&p1);
				   	 		messagePath = "help_friend.txt";
			   	   	    }
			   	   	    else if(n == 3)
			   	   	    {
			   	   	    	p1.fight(&p1);
			   	   	    	messagePath = "friend_fight.txt";

			   	   	    }
			   	   	    else
			   	   	    {
			   	   	    	p1.escape(&p1);
			   	   	    	messagePath = "friend_escape.txt";


			   	   	    }
				    	break;
				    }
				   	case 'G':
				   	{
				   	 	Fileopen::message("guard.txt");
				        int n;
				   	 	cin>>n;

				   	   	if (n == 1){
				   		    n = rand() % 2;
				   	   	    if (n == 1){
				   	   			dg.help(&p1);
				   	   			messagePath = "guard_help.txt";
				   	   		}
				   	   		else
				   	   		{
				   	   			zg.paralyse(&p1);
				   	   			messagePath = "guard_paralyse.txt";
				   	        }
				   	   	}
				   	   	if (n == 3){
				   	   		p1.fight(&p1,&zg);
				   	   	    messagePath = "guard_fight.txt";
				   	   	}
				   		break;
				   	}
				   		case 'P':
				   	{
				   	 	Fileopen::message("psychiatrist.txt");
				        int n;
				   	 	cin>>n;

				   	   	if (n == 1){
				   		    n = rand() % 2;
				   	   	    if (n == 1){
				   	   			dpsych.giveMedicine(&p1);
				   	   			messagePath = "psychiatrist_givemedicine.txt";
				   	   		}
				   	   		else
				   	   		{
				   	   			zpsych.drug(&p1);
				   	   			messagePath = "psychiatrist_drug.txt";
				   	        }
				   	       
				   	   	}
				   	   	break;
				   	}
				   	    case 'K':
				   	{
				   	 	Fileopen::message("cardiologist.txt");
				        int n;
				        cin>>n;

				   	   	if (n == 1){

                            srand(time(NULL));
				   		    n = rand() % 2;

				   	   	    if (n == 1){
				   	   			dcardio.suplement(&p1);
				   	   			messagePath = "cardiologist_suplement.txt";
				   	   		}
				   	   		else
				   	   		{
				   	   			zcardio.respiration(&p1);
				   	   			messagePath = "cardiologist_respiration.txt";
				   	        }
				   	       
				   	   	}
				   	   	break;				  
				   	}

                     case 'R':
				   	{
				   	 	int n = rand() % 2;
				   	 	if(n==1)
				   	 	{
				   	 		Fileopen::message("sister.txt");
				            int n;
				            cin>>n;
				            if (n==2)
				            {
				            	pointer = &sis;
				            	pointer -> talk();
				            	messagePath = "sis_talk.txt";
				            }
				   	 	}
				   	 	else
				   	 	{
				   	 		Fileopen::message("brother.txt");
				            int n;
				            cin>>n;
				            if (n==2)
				            {
				            	pointer = &bro;
				            	pointer -> talk();
				            	messagePath = "bro_talk.txt";

				            }
				   	 	}
				   	   	break;				  
				   	}

                    	case 'M':
				   	{
				   	 	Fileopen::message("mother.txt");
				   	 	pointer = &mum;
				   	 	pointer -> talk();
				   	 	messagePath = "mother_talk.txt";				  
				    	break;
				    }
				    	case 'T':
				   	{
				   	 	Fileopen::message("father.txt");
				   	 	int n;
				   	 	cin>>n;
			   	 		if(n == 2)
			   	 		{
				   	 		pointer = &dad;
				   	 		pointer -> talk();
				   	 		messagePath = "father_talk.txt";				   	 		
			   	   	    }
				    	break;
				    }

				     	case 'B':
				   	{
				   	 	Fileopen::message("bonus.txt");
				   	 	int n;
				   	 	cin>>n;
				   	 	if( n== 1){
				   	 	p1.setMhp(p1.getMhp() + 5);
				   	 	messagePath = "bonus_accepted.txt";

				   	 	}		
				    }
				    p1.posX = potentialPosition.x;
			   	 	p1.posY = potentialPosition.y;
			   	 	map.setPlayerPosition(point{p1.posX, p1.posY});
				   	break;

				   	case 'Z':
				   	{
				   	 	int n = rand() % 2;
				   	 	if(n==1)
				   	 	{
				   	 		Fileopen::message("dog.txt");
				            int n;
				            cin>>n;
				            if (n==2)
				            {
				            	pointer2 = &dog;
				            	pointer2 -> help();
				            	p1.setMhp(p1.getMhp() + 3);				        
				            	messagePath = "dog_help.txt";
				            }
				   	 	}
				   	 	else
				   	 	{
				   	 		Fileopen::message("cat.txt");
				            int n;
				            cin>>n;
				            if (n==2)
				            {
				            	pointer2 = &cat;
				            	pointer2 -> help();
				            	p1.setPhp(p1.getPhp() - 1);
				            	messagePath = "cat_help.txt";

				            }
				   	 	}
				   	   	break;				  
				   	}

				   	case 'X':
				   	{
				   		goldenquestion.fillTheGap();
				   		

				   	}
				   	p1.posX = potentialPosition.x;
			   	 	p1.posY = potentialPosition.y;
			   	 	map.setPlayerPosition(point{p1.posX, p1.posY});
				   	break;
				   		case 'Y':
				   	{
				   		goldenquestion.cutTheWord();

				   	}
				   	p1.posX = potentialPosition.x;
			   	 	p1.posY = potentialPosition.y;
			   	 	map.setPlayerPosition(point{p1.posX, p1.posY});
				   	break;
				   	
				}

			}
		}
	}Fileopen::message("win.txt");
}
