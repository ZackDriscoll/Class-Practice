#include <iostream>
#include "Student.h"
#include "Professor.h"

using namespace std;

int main()
{
	//Title
	cout << "\n\n\t\t *** Our World ***\n\n";

	//Now we can make as many objects from our class as we like!
	//We only use classes to create objects
	//Syntax is: Class Name then Object Name to make an object, not use.
	
	//Students
	Student student1("Sam", "21", 100);
	cout << student1.GetName() << " says: \n";
	student1.Talk("Hello, I am Sam. I plan on making a great game!\n");
	Student student2("Brandon", "23", 95);
	cout << student2.GetName() << " says: \n";
	student2.Talk("Hello, I am Brandon. I don't feel 100%.\n");
	Student student3("Jonah", "24", 110);
	cout << student3.GetName() << " says: \n";
	student3.Talk("Hello, I feel powerful!!\n");

	//Professors
	Professor professor1;
	professor1.SetName("Professor Hinton");
	cout << professor1.GetName() << " says: \n";
	professor1.Talk("Hello, I am a professor and I will enjoy playing the game you created!\n");

	return 0;
}
