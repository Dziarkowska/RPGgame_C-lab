#pragma once
#include<fstream>
#include<iostream>
#include<string>

using namespace std;

class Fileopen
{
public:
    string text;
	Fileopen();
	Fileopen(Fileopen &fileopen);
	~Fileopen();
	static void message(string);
	string getText();
	void setText(string );

};