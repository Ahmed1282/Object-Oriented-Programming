#include<iostream>
#include<string>
using namespace std;

#ifndef Employee_h
#define Employee_h

class Employee
{

	protected:
		
		int employeeID;
		string employeeName;

	public:
		
		Employee(int id, string n);
};	




#endif
