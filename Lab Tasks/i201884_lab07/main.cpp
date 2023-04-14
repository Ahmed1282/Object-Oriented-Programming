#include<iostream>
#include"Q1.cpp"
#include"Q2.cpp"
#include"Q3.cpp"
using namespace std;

int main()
{
	cout<<"..............Q1.............."<<endl;
	momentum m;
	m.setVelocity(1.1,2.2,3.3);
	m.momentumCalculate(3.0,4.0,5.0);
	cout<<"Shallow Copy"<<endl;
	m.copyMomentumShallow();
	cout<<"Deep Copy"<<endl;
	m.copyMomentumDeep();
	m.display();
	
	cout<<".............................."<<endl;
	cout<<"..............Q2.............."<<endl;
	Diablo car1;
    car1.setmodel_y(2021);
    car1.setengine_no(4234212);
    car1.setframe_no(972185);
    car1.setowner("Ahmed Baig");
    Diablo car3;
    car3 = car1;
    cout<<endl;
    cout<<".......Working......."<<endl;
    car3.display();
	cout<<".............................."<<endl;
	cout<<"..............Q3.............."<<endl;
		Remote v;
	cout << v.change_channel(312);
	
	return 0;

}
