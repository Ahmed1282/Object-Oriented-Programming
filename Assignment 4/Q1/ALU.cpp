//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "ALU.h"
using namespace std;

	    
	ALU::ALU()
	{
		NoOfAdders = 0;
		NoOfSubtractors = 0;
		NoOfRegisters = 0;
		sizeOfRegisters = 0;
	}

	ALU::ALU(int Adders, int Subtractors, int Registers, int sizeRegisters)
	{
		NoOfAdders = Adders;
		NoOfSubtractors = Subtractors;
		NoOfRegisters = Registers;
		sizeOfRegisters = sizeRegisters;
	}
	
	int ALU::getNoOfAdders()
	{
		return NoOfAdders;
	}

	int ALU::getNoOfSubtractors()
	{
		return NoOfSubtractors;
	}

	int ALU::getNoOfRegisters()
	{
		return NoOfRegisters;
	}

	int ALU::getsizeOfRegisters()
	{
		return sizeOfRegisters;
	}

	void ALU::setNoOfAdders(int Adders)
	{
		NoOfAdders = Adders;
	}

	void ALU::setNoOfSubtractors(int Subtractors)
	{
		NoOfSubtractors = Subtractors;
	}

	void ALU::setNoOfRegisters(int Registers)
	{
		NoOfRegisters = Registers;
	}

	void ALU::setsizeOfRegisters(int sizeRegisters)
	{
		sizeOfRegisters = sizeRegisters;
	}

