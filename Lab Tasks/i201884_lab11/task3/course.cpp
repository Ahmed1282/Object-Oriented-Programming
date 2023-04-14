#include <iostream>
#include "course.h"

using namespace std;

Course :: Course (Instructor* n, TextBook n2) 
{	
	name = *n;
	name2 = n2;
}

void Course :: display () 
{
	
	name.display();
	name2.display();
}

