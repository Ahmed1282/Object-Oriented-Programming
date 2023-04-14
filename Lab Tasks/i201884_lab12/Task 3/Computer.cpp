#include<iostream>
#include<string>
#include"Computer.h"
using namespace std;



	    Computer::Computer() 
	    {
	        companyName = "";
	        price = 0;
	    }
	
	    Computer::Computer(string cN, int p)
	    {
	        companyName = cN;
	        price = p;
	    }

	    void Computer::setCompanyName(string n)
    	{
    	    companyName = n;
    	}

    	string Computer::getCompanyName()
    	{
    	    return companyName;
    	}

    	void Computer::setPrice(int p)
    	{
        	price = p;
    	}

    	int Computer::getPrice()
    	{
    	    return price;
    	}


