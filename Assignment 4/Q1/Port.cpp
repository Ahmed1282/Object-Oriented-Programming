//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "Port.h"
using namespace std;

		Port::Port()
		{
			type = "";
			baud_rate = 0;
		}

		Port::Port(string t, int b)
		{
			type = t;
			baud_rate = b;
		}
	
		string Port::getType()
		{
			return type;
		}
		
		int Port::getBaudRate()
		{
			return baud_rate;
		}

		void Port::setType(string t)
		{
			type = t;
		}
		
		void Port::setBaudRate(int b)
		{
			baud_rate = b;
		}
		
