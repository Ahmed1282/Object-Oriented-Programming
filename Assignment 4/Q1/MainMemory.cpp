//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "MainMemory.h";
using namespace std;

	MainMemory::MainMemory()
	{
		capacity = 0;
		technologyType = "";
	}

	MainMemory::MainMemory(int cap, string techType)
	{
		capacity = cap;
		technologyType = techType;
	}

	int MainMemory::getCapacity()
	{
		return capacity;
	}
	string MainMemory::getTechnologyType()
	{
		return technologyType;
	}

	void MainMemory::setCapacity(int cap)
	{
		capacity = cap;
	}
	
	void MainMemory::setTechnologyType(string techType)
	{
		technologyType = techType;
	}
