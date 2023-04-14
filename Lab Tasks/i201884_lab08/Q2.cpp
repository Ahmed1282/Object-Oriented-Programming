#include <iostream>
#include "Q2.h"
using namespace std;

Distance::Distance(int f, int i)
{
	if(f >=0)
	{
		feet=f;
	}
	else
	{
		feet = 0;
	}
	
	if(i > 12)
	{
		feet+=1;
		inches = 12 - i;
	}
	else if(i < 0)
	{
		inches = 0;
	}	
	else
	{
		inches=i;
	}	
}


bool Distance::setFeet(int f)
{
	if(f>=0)
	{	
		feet = f;
		return 1;
	}
	else
	{
		return 0;
	}
}

int Distance::getFeet()const
{
	return feet;
}

bool Distance::setInches(int i)
{
	if(i > 12)
	{
		feet += 1 ;
		inches = 12 - i;
		return true;
	}
	else if (i < 0)
	{
		return 0;
	}
	else
	{
		inches = i;
		return 1;
	}
}

int Distance::getInches()const
{
	return inches;
}

Distance Distance::operator+ (const Distance &obj1)
{
	Distance* d=this;
	d->setFeet(this->feet + obj1.feet);
	d->setInches(this->inches + obj1.inches);
	return *this;
}

Distance Distance::operator- (const Distance &obj2)
{
	Distance d1;
	d1.setFeet(this->feet - obj2.feet);
	d1.setInches(this->inches - obj2.inches);
	return d1;
}

const Distance Distance::operator = (const Distance &obj3)
{
	Distance d2;
	d2.setFeet(obj3.feet);
	d2.setInches(obj3.inches);
	return d2;
}


int main()
{
	Distance D(2,2);
	cout << "D1 = " << D.getFeet() << " Feet and " <<D.getInches() << " inches" << endl;
	Distance D_2 = D;
	cout << "D2 = " << D_2.getFeet() << " Feet and " <<D_2.getInches() << " inches" << endl;	
	Distance D_3 = D_2 + D;
	cout << "D3 = " << D_3.getFeet() << " Feet and " <<D_3.getInches() << " inches" << endl;

}
