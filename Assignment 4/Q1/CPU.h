//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef CPU_H
#define CPU_H

class CPU
{
private:

	ALU alu;
	ControlUnit cu;

public:

	CPU();
	CPU(ALU a, ControlUnit c);
	ALU getAlu();
	ControlUnit getCu();
	void setAlu(ALU a);
	void setCu(ControlUnit c);

};


#endif
