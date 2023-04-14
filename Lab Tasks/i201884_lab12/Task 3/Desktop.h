#include<iostream>
#include<string>
using namespace std;

#ifndef Desktop_h
#define Desktop_h

class Desktop : public Computer
{
	protected:
    	
		string color;
    	int monitorSize;
    	string processorType;

	public:
    	
		Desktop();
    	Desktop(string cN, int p, string c, int mS, string pT);
    	void show();
};



#endif
