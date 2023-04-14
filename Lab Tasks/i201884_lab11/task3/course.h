#include <iostream>

#ifndef course_h
#define course_h

class Course 
{
	
	private:
		
		Instructor name;
		TextBook name2;
	
	public:
		Course (Instructor* n, TextBook n2);	
		
		void display ();
};	


#endif
