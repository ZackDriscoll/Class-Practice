#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

void Person::SetName(string name) 
{
	Name = name;
}

string Person::GetName()
{
	return Name;
}

void Person::Talk(string stuffToSay)
{
	cout << endl << stuffToSay << endl;
}

void Person::Walk(int numberOfSteps)
{
	cout << "\nThis person takes " << numberOfSteps << endl;
}