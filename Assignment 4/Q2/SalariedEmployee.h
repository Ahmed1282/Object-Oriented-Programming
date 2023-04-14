//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include<string>
using namespace std;

#ifndef SalariedEmployee_H
#define SalariedEmployee_H

class SalariedEmployee : public Employee
{
	private:

    	int monthly_Salary;

	public:
    
		SalariedEmployee();
    	int getMonthlySalary();
    	void setMonthlySalary(int monthlySalary);
    	string showDetails();
    	
};

#endif
