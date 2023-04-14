#include <iostream>

#ifndef intructor_h
#define intructor_h

using namespace std;

class Instructor 
{
	
	private:
		string fname;
		string lname;
		string onum;
		string destination;
		
	public:
		Instructor ();
		Instructor (string f, string l, string o, string d);
		void setFname (string f);
		void setLname (string l);
		void setOnum (string o);
		void setDestination (string d);
		void display ();	
};


#endif
