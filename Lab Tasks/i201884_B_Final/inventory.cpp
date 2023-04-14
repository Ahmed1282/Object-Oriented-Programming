#include<iostream>
#include<fstream>
#include"item.h"
#include"inventory.h"
using namespace std;

inventory::inventory(item t) 
{
	T= t;
}

void inventory:: setT(item t)
{
	T= t;
}
item inventory:: getT()
{
	return T;
}

void inventory::indisplay()
{
	item::display();
}

