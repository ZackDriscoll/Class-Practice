#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

Person::Person(string name, string age, int health)
{
	cout << "\nI am born!\n";
	Name = name;
	Age = age;
	Health = health;
}

void Person::Talk(string stuffToSay)
{
	cout << endl << Name << " says " << stuffToSay << endl;
}

void Person::Walk(int numberOfSteps)
{
	cout << "\nThis person takes " << numberOfSteps << endl;
}