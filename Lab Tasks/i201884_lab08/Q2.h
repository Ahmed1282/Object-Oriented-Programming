#ifndef Q2_H
#define Q2_H
#include <iostream>
using namespace std;

class Distance 
{
	private:
		int feet,inches;

	public:
		Distance(int feet = 0, int inches = 0 );
		bool setFeet(int f);
		int getFeet()const;
		bool setInches(int i);
		int getInches()const;
		Distance operator+ (const Distance &obj);
		Distance operator- (const Distance &obj);
		const 	Distance operator = (const Distance &obj);
};
#endif
