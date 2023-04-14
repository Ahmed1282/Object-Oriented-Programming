//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q1
#include<iostream>
#include<string>
using namespace std;

#ifndef Shop_H
#define Shop_H

class Shop
{
	private:
	
		Computer* computers[3];
		int c;
	
	public:
		
		Shop();
		void manufactureComputer();
		void viewList();
};

#endif
