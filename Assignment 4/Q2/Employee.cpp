//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include"Project.h"
#include"Employee.h"
#include<string>
using namespace std;

	Employee::Employee()
    {

    }

    string Employee::getName()
    {
        return name;
    }

    string Employee::getEmployeeId()
    {
        return employee_ID;
    }
    
    Project Employee::getProject()
    {
        return project;
    }

    void Employee::setName(string n)
    {
        name = n;
    }

    void Employee::setEmployeeId(string employeeID)
    {
    	int e_ID;
        e_ID = stoi(employeeID);
        if (e_ID >= 1)
        {
            employee_ID = employeeID;
        }
        else
        {
            cout<<"The ID cannot be less than 1"<<endl;
        }
    }

    void Employee::setProject(Project p)
    {
        project = p;
    }

    string Employee::showDetails()
    {
        string details1, details2, details3, details4;
        details1 = "" + getEmployeeId();
        details2 = "," + getName();
        details3 = "," + project.showDetails();
        details4 = details1 + details2 + details3;
        return details4;
    }
