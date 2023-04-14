//============================================================================
// Name        : Q220i1884.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	if(x%y==0)
		return y;
	else
		return gcd(y, x%y);
}

int main() {
	int x,y;
	cout << "Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	cout<<"The GCD is: "<<gcd(x,y);
	return 0;
}
