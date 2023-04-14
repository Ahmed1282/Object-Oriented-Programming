//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef MotherBoard_H
#define MotherBoard_H

class MotherBoard
{

	private:
		
		Port ports[3];
		static int size;
		MainMemory mm;

	public:

		MotherBoard();
		MotherBoard(Port p[], int s, MainMemory m);
		static int getSize();
		Port *getPorts();
		Port getPort(int s);
		MainMemory getMainMemory();
		void setPorts(Port p[], int size);
		void setMainMemory(MainMemory m);
};

#endif
