#include<iostream>
#include"item.h"
using namespace std;

#ifndef inventory_h
#define inventory_h

class inventory : public item
{

	protected:
		item T;
		
	public:
		inventory(item t);
		void setT(item t);
		item getT();

		void indisplay();
		
		
		
};

#endif
