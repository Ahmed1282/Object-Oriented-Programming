//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef PhysicalMemory_H
#define PhysicalMemory_H

class PhysicalMemory
{
	private:
		
		int capacity;

	public:

		PhysicalMemory();
		PhysicalMemory(int cap);
		int getCapacity();
		void setCapacity(int cap);
};

#endif
