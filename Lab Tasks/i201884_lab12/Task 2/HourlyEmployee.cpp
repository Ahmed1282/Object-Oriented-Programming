#include<iostream>
#include<string>
#include"Employee.h"
#include"HourlyEmployee.h"
using namespace std;


		void HourlyEmployee::calculate_the_hourly_income()
		{
			cout << "Hourly Employee Income is : " << hourlyIncome * 150 << endl;
		}


		void HourlyEmployee::Display()
		{
			cout << "Hourly Employee ID is : " << employeeID << endl;
			cout << "Hourly Employee Name is : " << employeeName << endl;
		}
