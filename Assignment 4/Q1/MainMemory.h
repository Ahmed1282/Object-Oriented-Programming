//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef MainMemory_H
#define MainMemory_H

class MainMemory
{

	private:
		
		int capacity;
		string technologyType;
	
	public:

		MainMemory();
		MainMemory(int cap, string techType);
		int getCapacity();
		string getTechnologyType();
		void setCapacity(int cap);
		void setTechnologyType(string techType);
	
};


#endif
