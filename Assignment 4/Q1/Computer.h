//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef Computer_H
#define Computer_H

class Computer
{
	private:
	
		PhysicalMemory pm;
		MotherBoard mb;
		CPU cpu;
	
	public:
	
		Computer();
		Computer(PhysicalMemory p, MotherBoard m, CPU c);
		PhysicalMemory getPhysicalMemory();
		MotherBoard getMotherBoard();
		CPU getCPU();
		void setPhysicalMemory(PhysicalMemory p);
		void setMotherBoard(MotherBoard m);
		void setCPU(CPU c);

};

#endif
