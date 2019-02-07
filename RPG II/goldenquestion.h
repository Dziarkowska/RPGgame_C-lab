#pragma once
#include <string>
#include <iostream>

using namespace std;

class Goldenquestion
{
public:
     string text0;
     string text1;
	 string text2;
	 string text3;
	 string text4;
	 string text5;
	 string text6;
	 bool success;

	Goldenquestion();
	~Goldenquestion();
	void fillTheGap();
	void cutTheWord();

};