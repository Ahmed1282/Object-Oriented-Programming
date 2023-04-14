//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "MainMemory.h";
#include "Port.h";
#include "MotherBoard.h";
using namespace std;

		MotherBoard::MotherBoard()
		{
			size = 3;
			for(int i=0; i<size; i++)
			{
				ports[i] = Port();
			}
			mm = MainMemory();
		}

		MotherBoard::MotherBoard(Port p[], int s, MainMemory m)
		{
			size = s;
			for(int i=0; i<s; i++)
			{
				ports[i] = p[i];
			}
			mm = m;
		}
	
		int MotherBoard::getSize()
		{
			return size;
		}
		
		Port *MotherBoard::getPorts()
		{
			return ports;
		}
	
		Port MotherBoard::getPort(int s)
		{
			return ports[s];
		}

		MainMemory MotherBoard::getMainMemory()
		{
			return mm;
		}

		void MotherBoard::setPorts(Port p[], int size)
		{
			for(int i=0; i<size; i++)
			{
				ports[i] = p[i];
			}
		}
	
		void MotherBoard::setMainMemory(MainMemory m)
		{
			mm = m;
		}
		
		int MotherBoard::size = 0;
