#include <iostream>
#include <stdlib.h>
#include "map.h"
#include "fileopen.h"
#include "patient.h"
#include "person.h"
#include "doctor.h"
#include "guard.h"
#include "friend.h"

point Map::lastPosition = point{1,1};
point Map::playerPosition = point{1,1};

char Map::map[][10] = {
	"#########",
	"#@  A   #",
	"#T   G  #",
	"#F P ZD #",
	"#    Y  #",
	"#ADB   K#",
	"#R  X  G#",
	"#A     K#",
	"#P M A Z#",
	"#########"
};

char Map::pickUpMap[][10] = {
	"#########",
	"#@  #   #",
	"##   #  #",
	"## # ## #",
	"#    #  #",
	"####   ##",
	"##  #  ##",
	"##     ##",
	"###  # ##",
	"#########"
};

Map::Map(){}

Map::~Map(){}

void Map::draw(){	
	system("cls");
	for(int i=0; i<Map::MAP_HEIGHT; i++){
		for(int j=0; j<Map::MAP_WIDTH; j++){
			cout << map[i][j];
		}
		cout << endl;
	}
}

void Map::updatePlayerPosition(){
	point lastPos = this->getLastPosition();
	point position = this->getPlayerPosition();
	map[lastPos.y][lastPos.x] = ' ';
	map[position.y][position.x] = '@';
}

void Map::spawnPickups(){
	// pickUp counter
	int count = 0;
	// pickUp types, could be done with enum
	// M - medicine, F - food, B - book
	char pickUpTypes[3] = {'M', 'F', 'B'};

	while(count < 5){
		// generate point;
		int x = rand() % 10;
		int y = rand() % 10;

		if(map[y][x] == ' '){
			// generate type
			int type = rand() % 3;
			map[y][x] = '?';
			pickUpMap[y][x] = pickUpTypes[type];
			count++;
		}
	}
}

bool Map::canPlayerGo(point p){
   return map[p.y][p.x] != '#';
}

bool Map::willInteract(point p){
	return (map[p.y][p.x] != ' ' && map[p.y][p.x] != '#');
}

void Map::setPlayerPosition(point p){
	lastPosition = playerPosition;
	playerPosition = p;
}

point Map::getPlayerPosition(){
	return playerPosition;
}

point Map::getLastPosition(){
	return lastPosition;
}


