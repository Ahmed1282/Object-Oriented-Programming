//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include<string>
using namespace std;

#ifndef CommissionEmployee_H
#define CommissionEmployee_H

class CommissionEmployee : public Employee
{
	private:

    	int gross_Sales;
    	int base_Salary;
    	float total_Salary;

	public:

	    CommissionEmployee();
	    int getGrossSales();
	    int getBaseSalary();
	    float getTotalSalary();
	    void setGrossSales(int grossSales);
	    void setBaseSalary(int baseSalary);
	    void calculateSalary();
	    string showDetails();
};


#endif
