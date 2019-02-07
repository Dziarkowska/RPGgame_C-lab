#include <string>
#include <iostream>
#include "goldenquestion.h" 

using namespace std;
 Goldenquestion::Goldenquestion()
 {
 	 text0 = "Na gorze .... w szpitalu swiry, a Ty stad nie wyjdziesz moj mily";
   text1 = "Na gorze .... w szpitalu swiry, a Ty stad nie wyjdziesz moj mily";
 	 text2 = "roze";
 	 text3 = "kompot";
 	 text4 = "kot";
 	 text5 = "pot";
   text6 = "kompot";

 }
 Goldenquestion::~Goldenquestion()
 {

 }

void Goldenquestion::fillTheGap()
 {
 	string text;
 	
while (text != text2)
{
  cout<< "Uzupelnij luke"<<endl<<endl<<text0<<endl;
 	text1.erase(10,4);
  cout<<"Twoja odpowiedz to: ";
 	cin>> text;
  text1.insert(10, text);
 	cout<<text1<<endl;
 }

 }
void Goldenquestion::cutTheWord()
{
  string cut;
  bool success = 0;
while (success != true)
{
  
  cout<<"Podaj ktore litery nalezy skasowac, aby stworzyc nowe slowo"<<endl<<endl<<text6<<endl;
  cin>>cut;
    if (cut == "mpo")
  {
  	text3.erase(2,3);
  	cout<<text3<<endl;
    success = true;
  }
  else if (cut == "omp")
  {
  	text3.erase(1,3);
  	cout<<text3<<endl;
    success = true;
  }
  else if (cut == "kom")
  {
  	text3.erase(0,3);
  	cout<<text3<<endl;
    success = true;
  }
  else
  {
  	cout<<"Try again ;)"<<endl;
  }
}

}