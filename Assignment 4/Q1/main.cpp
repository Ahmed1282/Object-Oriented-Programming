//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
#include "ALU.cpp"
#include "ControlUnit.cpp"
#include "CPU.cpp"
#include "PhysicalMemory.cpp"
#include "MainMemory.cpp"
#include "Port.cpp"
#include "MotherBoard.cpp"
#include "Computer.cpp"
#include "Shop.cpp"
using namespace std;

int main()
{
	Shop shop;
	shop.manufactureComputer();
	shop.viewList();
	return 0;
}

