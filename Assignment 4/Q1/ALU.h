//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef ALU_H
#define ALU_H

class ALU
{

private:
	int NoOfAdders;
	int NoOfSubtractors;
	int NoOfRegisters;
	int sizeOfRegisters;

public:
	
	ALU();
	ALU(int Adders, int Subtractors, int Registers, int sizeRegisters);
	int getNoOfAdders();
	int getNoOfSubtractors();
	int getNoOfRegisters();
	int getsizeOfRegisters();
	void setNoOfAdders(int NoOfAdders);
	void setNoOfSubtractors(int NoOfSubtractors);
	void setNoOfRegisters(int NoOfRegisters);
	void setsizeOfRegisters(int sizeRegisters);
};


#endif
