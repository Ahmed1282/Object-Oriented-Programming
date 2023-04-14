//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include"Employee.h"
#include"SalariedEmployee.h"
#include<string>
using namespace std;

	SalariedEmployee::SalariedEmployee() :Employee()
    {

    }

    int SalariedEmployee::getMonthlySalary()
    {
        return monthly_Salary;
    }

    void SalariedEmployee::setMonthlySalary(int monthlySalary)
    {
        if (monthlySalary > 30000)
        {
            monthly_Salary = monthlySalary;
        }
        else
        {
            monthly_Salary = 100000;
            cout << "Monthly salary must be above Rs. 30,000" << endl;
        }
    }

    string SalariedEmployee::showDetails()
    {
        string details1, details2, details3, details4, details5;
        details1 = "" + Employee::getEmployeeId();
        details2 = "," + Employee::getName();
        details3 = "," + to_string(getMonthlySalary());
        details4 = "," + Employee::getProject().showDetails();
        details5 = details1 + details2 + details3 + details4;
        return details5;
    }
