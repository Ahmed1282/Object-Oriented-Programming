#include<iostream>
#include<string>
using namespace std;

#ifndef Laptop_h
#define Laptop_h

class Laptop : public Computer 
{

	protected:
	    
		string color;
	    int size;
	    double weight;
    	string processorType;
    

	public:

    	Laptop();
    	Laptop(string cN, int p, string c, int s, int w, string pT);
    	void show();

};


#endif
