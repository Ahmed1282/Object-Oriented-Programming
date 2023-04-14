//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include"Employee.h"
#include"HourlyEmployee.h"
#include<string>
using namespace std;

	HourlyEmployee::HourlyEmployee() :Employee() 
    {

    }

    int HourlyEmployee::getNoOfHours()
    {
        return no_of_hours;
    }

    int HourlyEmployee::getHourlyRate() 
    {
        return hourly_rate;
    }

    int HourlyEmployee::getTotalSalary() 
    {
        return total_salary;
    }

    void HourlyEmployee::setNoOfHours(int noofhours)
    {
        if (noofhours >= 30) {
            no_of_hours = noofhours;
        }
        else 
        {
            no_of_hours = 150;
            cout << "No of hours worked must be at least 30" << endl;
        }
    }

    void HourlyEmployee::setHourlyRate(int hourlyrate) 
    {
        if (hourlyrate >= 150) 
        {
            hourly_rate = hourlyrate;
        }
        else 
        {
            hourly_rate = 300;
            cout << "the hourly rate must be at least Rs. 150 " << endl;
        }
    }

    void HourlyEmployee::calculateSalary() 
    {
        total_salary = no_of_hours * hourly_rate;
    }

    string HourlyEmployee::showDetails() 
    {
        string details1, details2, details3, details4, details5;
        details1 = "" + Employee::getEmployeeId();
        details2 = "," + Employee::getName();
        details3 = "," + to_string(total_salary);
        details4 = "," + Employee::getProject().showDetails();
        details5 = details1 + details2 + details3 + details4;
        return details5;
    }
    
