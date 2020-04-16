#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	//Title
	cout << "\n\n\t\t *** Our World ***\n\n";

	//Now we can make as many objects from our class as we like!
	//We only use classes to create objects
	//Syntax is: Class Name then Object Name to make an object, not use.
	Person professor("Professor Hinton", "20 years old", 100);
	Person student1("Sam", "20 years old", 100);
	Person student2("Christina", "25 years old", 100);
	Person student3("Marc", "30 years old", 100);
	Person student4("Drayce", "22 years old", 100);

	//Now let's use our objects, note: we do not use classes!
	professor.HairColor = "Grey";
	professor.Talk("Welcome to the class!");
	student1.Talk("Is ther a reason to use classes than just going with headers & source files?");
	professor.Talk("Yes, to save code and becuase we think in objects.");
	student2.Walk(20);
	student2.Talk("Sorry I'm late, there was a dragon which attacked me on the way to class today, again!");

	return 0;
}
