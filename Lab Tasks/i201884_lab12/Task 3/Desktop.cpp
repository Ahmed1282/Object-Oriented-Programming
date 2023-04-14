#include<iostream>
#include<string>
#include"Computer.h"
#include"Desktop.h"
using namespace std;


	Desktop::Desktop() 
	{
        companyName = "";
        price = 0;
        color = "";
        monitorSize = 0; 
        processorType = "";
    }

    Desktop::Desktop(string cN, int p, string c, int mS, string pT)
    {
        companyName = cN;
        price = p;
        color = c;
        monitorSize = mS;
        processorType = pT;

    }

    void Desktop::show() 
	{
    	cout << "Desktop" << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl;
        cout << "Size: " << monitorSize << endl;
        cout << "Type Processor: " << processorType << endl << endl;
    }
