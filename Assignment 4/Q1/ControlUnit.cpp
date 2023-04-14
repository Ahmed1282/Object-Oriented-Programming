//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "ControlUnit.h"
using namespace std;

	ControlUnit::ControlUnit()
	{
		clk = 0.0;
	}

	ControlUnit::ControlUnit(float clock)
	{
		clk = clock;
	}

	float ControlUnit::getClock()
	{
		return clk;
	}

	void ControlUnit::setClock(float clock)
	{
		clk = clock;
	}

