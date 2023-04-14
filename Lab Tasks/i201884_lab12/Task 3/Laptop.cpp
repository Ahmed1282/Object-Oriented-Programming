#include<iostream>
#include<string>
#include"Computer.h"
#include"Laptop.h"
using namespace std;


	Laptop::Laptop() 
	{
        companyName = "";
        price = 0;
        color = "";
        size = 0;
        weight = 0;
        processorType = "";
    }

    Laptop::Laptop(string cN, int p, string c, int s, int w, string pT)
    {
        companyName = cN;
        price = p;
        color = c;
        size = s;
        weight = w;
        processorType = pT;
    }

    void Laptop::show() 
	{
        cout << "Laptop" << endl;
        cout << "Company Name : " << companyName << endl;
        cout << "Price : " << price << endl;
        cout << "Color : " << color << endl;
        cout << "Size : " << size << endl;
        cout << "Weight : " << weight << endl;
        cout << "Type Processor: " << processorType << endl;
    }
