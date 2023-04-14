//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "CPU.h"
#include "PhysicalMemory.h"
#include "MotherBoard.h"
#include "Computer.h"
using namespace std;

	Computer::Computer()
	{
		pm = PhysicalMemory();
		mb = MotherBoard();
		cpu = CPU();
	}

	Computer::Computer(PhysicalMemory p, MotherBoard m, CPU c)
	{
		pm = p;
		mb = m;
		cpu = c;
	}

	PhysicalMemory Computer::getPhysicalMemory()
	{
		return pm;
	}
	
	MotherBoard Computer::getMotherBoard()
	{
		return mb;
	}
	
	CPU Computer::getCPU()
	{
		return cpu;
	}

	void Computer::setPhysicalMemory(PhysicalMemory p)
	{
		pm = p;
	}
	
	void Computer::setMotherBoard(MotherBoard m)
	{
		mb = m;
	}

	void Computer::setCPU(CPU c)
	{
		cpu = c;
	}
