//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "PhysicalMemory.h"
using namespace std;

	PhysicalMemory::PhysicalMemory()
	{
		capacity = 0;
	}
	
	PhysicalMemory::PhysicalMemory(int cap)
	{
		capacity = cap;
	}

	int PhysicalMemory::getCapacity()
	{
		return capacity;
	}
	
	void PhysicalMemory::setCapacity(int cap)
	{
		capacity = cap;
	}
