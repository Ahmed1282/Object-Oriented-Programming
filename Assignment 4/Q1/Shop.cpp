//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "Computer.h"
#include "Shop.h"
using namespace std;

	Shop::Shop()
	{
		c = 0;
	}

	void Shop::manufactureComputer()
	{
		int NoOfAddress;
		int NoOfSubtractors;
		int NoOfRegisters;
		int sizeOfRegisters;
		float clk;
		int capacity;
		string technologyType;
		string type;
		int baud_rate;
		int pm_capacity;
		int portNo;

		cout<<"----ALU information---"<<endl;
		cout<<"Please enter number Of Address: ";
		cin>>NoOfAddress;
		cout<<"Please enter number Of Subtractors: ";
		cin>>NoOfSubtractors;
		cout<<"Please enter number Of Registers: ";
		cin>>NoOfRegisters;
		cout<<"Please enter size Of Registers: ";
		cin>>sizeOfRegisters;
		cout<<endl;
			
		ALU	alu;
		alu = ALU(NoOfAddress, NoOfSubtractors, NoOfRegisters, sizeOfRegisters);
				
		cout<<"----Control Unit information---"<<endl;
		cout<<"Please enter clock speed: ";
		cin>>clk;
		cout<<endl;
				
		ControlUnit cu;
		cu = ControlUnit(clk);
	
		CPU cpu;
		cpu = CPU(alu, cu);
		
		cout<<"----Physical Memory information---"<<endl;
		cout<<"Please enter physical memory capacity: ";
		cin>>pm_capacity;
		cout<<endl;
		PhysicalMemory pm = PhysicalMemory(pm_capacity);

		cout<<"----Main Memory information---"<<endl;
		cout<<"Please enter main memory capacity: ";
		cin>>capacity;
		cout<<"Please enter technology type: ";
		cin>>technologyType;
		cout<<endl;
		MainMemory mm = MainMemory(capacity, technologyType);
	
		cout<<"----Port information---"<<endl;
		cout<<"Please enter number of ports: ";
		cin>>portNo;
	
		Port p[portNo];
		
		for(int i=0; i<portNo; i++)
		{
			cout<<"Please enter port type: ";
			cin>>type;
			cout<<"Please enter baud rate: ";
			cin>>baud_rate;
			p[i] = Port(type, baud_rate);
		}
		cout<<endl;
		MotherBoard mb = MotherBoard(p, portNo, mm);
		
		computers[c++] = new Computer(pm, mb, cpu);
		
	}
	
	void Shop::viewList()
	{
		int s;
		for (int i=0; i < c; i++)
		{
			cout<<"----CPU   i n f o r m a t i o n---"<<endl<<endl;
			cout<<"----ALU information---"<<endl;
			cout<<"The number Of Adders: "<<computers[i]->getCPU().getAlu().getNoOfAdders()<<endl;
			cout<<"The number Of Subtractors: "<<computers[i]->getCPU().getAlu().getNoOfSubtractors()<<endl;
			cout<<"The number  Of Registers: "<<computers[i]->getCPU().getAlu().getNoOfRegisters()<<endl;
			cout<<"The size Of Registers: "<<computers[i]->getCPU().getAlu().getsizeOfRegisters()<<endl;
			cout<<endl;
			cout<<"----Control Unit information---"<<endl;
			cout<<"The Clock Speed: "<<computers[i]->getCPU().getCu().getClock()<<endl;
			cout<<endl;
			
			cout<<"----Physical Memory   i n f o r m a t i o n---"<<endl<<endl;
			cout<<"The Physical Memory Capacity: "<<computers[i]->getPhysicalMemory().getCapacity()<<endl;
			cout<<endl;
			
			cout<<"----Mother Board   i n f o r m a t i o n---"<<endl<<endl;
			cout<<"----Main Memory information---"<<endl;
			cout<<"The Main Memory Capacity: "<<computers[i]->getMotherBoard().getMainMemory().getCapacity()<<endl;
			cout<<"The Technology used: "<<computers[i]->getMotherBoard().getMainMemory().getTechnologyType()<<endl;
			cout<<endl;
			cout<<"----Port information---"<<endl;
			s = MotherBoard::getSize();
			for (int j=0; j<s; j++)
			{
				cout<<"The Port Type: "<<computers[i]->getMotherBoard().getPort(i).getType()<<endl;
				cout<<"The Port Baud Rate: " <<computers[i]->getMotherBoard().getPort(i).getBaudRate()<<endl;
			}
		}
	}
