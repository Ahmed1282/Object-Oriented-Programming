#include <iostream>
#include "instructor.h"
using namespace std;

Instructor :: Instructor () {
	
	fname = "\0";
	lname = "\0";
	onum = "\0";
	destination = "\0";
}

Instructor :: Instructor (string f, string l, string o, string d) 
{
	
	fname = f;
	lname = l;
	onum = o;
	destination = d;
}

void Instructor :: display () 
{
	
	cout << "\nFirst Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;
	cout << "Office Number: " << onum << endl;
	cout << "Designation: " << destination << endl;
}




