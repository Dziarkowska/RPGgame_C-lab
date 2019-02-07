#pragma once
#include <iostream>
#include <fstream>
#include "game.h"


using namespace std;

struct point{
	int x;
	int y;
};

class Map
{
	static const int MAP_HEIGHT = 10;
	static const int MAP_WIDTH = 10;
	static char pickUpMap[][10];
	static point lastPosition;
	static point playerPosition;
	static point pickUps[5];
	
public:
	static char map[][10];
    Map();
    ~Map();
	void draw();
	void updatePlayerPosition();
	void spawnPickups();
	bool canPlayerGo(point);
	bool willInteract(point);
	void setPlayerPosition(point);
	point getPlayerPosition();
	point getLastPosition();
};


