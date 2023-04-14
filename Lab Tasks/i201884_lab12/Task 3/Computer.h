#include<iostream>
#include<string>
using namespace std;

#ifndef Computer_h
#define Computer_h

class Computer
{
	protected:
	
		string companyName;
		int price;

	public:

	    Computer();
	    Computer(string cN, int p);
	    void setCompanyName(string n);
    	string getCompanyName();
    	void setPrice(int p);
    	int getPrice();
    	virtual void show() 
		{
        	cout << "Company Name: " << companyName << endl;
        	cout << "Price: " << price << endl;
    	}
};




#endif
