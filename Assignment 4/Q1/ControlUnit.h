//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef ControlUnit_H
#define ControlUnit_H

class ControlUnit
{
private:

	float clk;

public:

	ControlUnit();
	ControlUnit(float clock);
	float getClock();
	void setClock(float clock);
};


#endif
