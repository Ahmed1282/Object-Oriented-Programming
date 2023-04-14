//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include"Employee.h"
#include"CommissionEmployee.h"
#include<string>
using namespace std;

	CommissionEmployee::CommissionEmployee() :Employee()
    {

    }

    int CommissionEmployee::getGrossSales()
    {
        return gross_Sales;
    }

    int CommissionEmployee::getBaseSalary()
    {
        return base_Salary;
    }

    float CommissionEmployee::getTotalSalary()
    {
        return total_Salary;
    }

    void CommissionEmployee::setGrossSales(int grossSales)
    {
        if (grossSales >= 1)
        {
            gross_Sales = grossSales;
        }
        else
        {
            gross_Sales = 10000;
            cout << "Gross sales must be a positive integer value" << endl;
        }
    }


    void CommissionEmployee::setBaseSalary(int baseSalary)
    {
        if (baseSalary > 20000)
        {
            base_Salary = baseSalary;
        }
        else
        {
            base_Salary = 50000;
            cout << "Base salary must be above 20,000" << endl;
        }
    }


    void CommissionEmployee::calculateSalary()
    {
        float commission;
        commission = 0;
        if (gross_Sales > 100000)
        {
            commission = gross_Sales * 0.015;
        }
        total_Salary = base_Salary + commission;
    }


    string CommissionEmployee::showDetails()
    {
        string details1, details2, details3, details4, details5;
        details1 = "" + Employee::getEmployeeId();
        details2 = "," + Employee::getName();
        details3 = "," + to_string(getBaseSalary());
        details4 = "," + Employee::getProject().showDetails();
        details5 = details1 + details2 + details3 + details4;
        return details5;
        
    }
    
