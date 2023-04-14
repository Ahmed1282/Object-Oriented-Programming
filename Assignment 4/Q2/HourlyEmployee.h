//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 4_Q2
#include<iostream>
#include<string>
using namespace std;

#ifndef HourlyEmployee_H
#define HourlyEmployee_H

class HourlyEmployee : public Employee
{
	private:
  
    	int no_of_hours;
    	int hourly_rate;
    	int total_salary;

	public:
	
	    HourlyEmployee();
	    int getNoOfHours();
	    int getHourlyRate();
	    int getTotalSalary();
	    void setNoOfHours(int noofhours);
	    void setHourlyRate(int hourlyrate);
	    void calculateSalary();
	    string showDetails();
};

#endif
