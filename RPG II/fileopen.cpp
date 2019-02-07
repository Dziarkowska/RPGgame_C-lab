#include "fileopen.h"
#include <iostream>

using namespace std;

Fileopen::Fileopen(){

}
Fileopen::Fileopen(Fileopen &fileopen)
{
	text=fileopen.text;
}

Fileopen::~Fileopen(){}

void Fileopen::message(string filename)
{
	string line, path;
	path = filename;
	ifstream file(path.c_str());

	// file.open(path, ios::in);
	if (file.good() == true)
	{
		while (!file.eof())
		{
			getline(file, line);
			cout << line << endl;
		}
		file.close();
	}
}
string Fileopen::getText()
{
	return text;
}
void Fileopen::setText(string newtext)
{
 	text=newtext;
}