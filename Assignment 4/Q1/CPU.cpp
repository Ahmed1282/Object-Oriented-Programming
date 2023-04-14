//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "ALU.h"
#include "ControlUnit.h"
#include "CPU.h"
using namespace std;

	CPU::CPU()
	{	
		alu = ALU();
		cu = ControlUnit();
	}	

	CPU::CPU(ALU a, ControlUnit c)
	{
		alu = a;
		cu = c;
	}

	ALU CPU::getAlu()
	{
		return alu;
	}

	ControlUnit CPU::getCu()
	{
		return cu;
	}

	void CPU::setAlu(ALU a)
	{
		alu = a;
	}

	void CPU::setCu(ControlUnit c)
	{
		cu = c;
	}
