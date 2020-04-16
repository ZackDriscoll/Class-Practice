#pragma once
#include <string>

using namespace std;

//A class is a template
//One class can make many objects, thus saving you code!
//You have to make a class before you can make objects
class Person
{
	public:
		//Prototype Public Methods here:
		//Methods are just functions.
		void Talk(string stuffToSay);
		void Walk(int numberOfSteps);

		//Contstructor
		Person(string name, string age, int health);

		//Public Properties
		string HairColor;

	private:
		//These are called properties of the class
		//They are just variables, that is all.
		string Name;
		string Age;
		int Health;

};

