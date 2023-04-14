//Question 3
//Muhammad Ahmed Baig 20i-1884 Assignment 2 Section F
#include <iostream>
#include "Pully.h"
#include "Rope.h"
#include "Rotation.h"

using namespace std;

int main()
{
	int r,l,t;
	int answer;
	cout<<"Please enter the values to get the number of rings produced"<<endl;
	cout<<"Enter Radius: ";
	cin>>r;
	cout<<"Enter Length: ";
	cin>>l;
	cout<<"Enter Thicknes: ";
	cin>>t;
	Pully obj1(r);
    Rope obj2(l, t);
    Rotation obj3(obj1,obj2);
    cout<<"Number of rings produced: "<< obj3.Rotatingthepully(obj3.getRopeRadius(),obj3.getRopeLength(),obj3.getRopeThickness());
	return 0;
}
