//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef Port_H
#define Port_H

class Port
{
	private:
	
		int baud_rate;
		string type;

	public:

		Port();
		Port(string t, int b);
		string getType();
		int getBaudRate();
		void setType(string t);
		void setBaudRate(int b);
		
};

#endif
