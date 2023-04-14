//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include<string>
using namespace std;

#ifndef Employee_H
#define Employee_H

class Employee
{
	private:

    	string name;
    	string employee_ID;
    	Project project;

	public:

	    Employee();
	    string getName();
	    string getEmployeeId();
	    Project getProject();
	    void setName(string n);
	    void setEmployeeId(string employeeID);
	    void setProject(Project p);
	    string showDetails();
    
};

#endif
