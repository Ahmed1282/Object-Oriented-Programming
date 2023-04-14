#include<iostream>
#include<string>
#include"Employee.h"
#include"PermanentEmployee.h"
using namespace std;


		void PermanentEmployee::calculate_the_income()
		{
			cout << "Permanent Employee Income is : " << (hourlyIncome * 150 ) + 240 << endl;
		}

		void PermanentEmployee::Display()
		{
			cout << "Permanent Employee ID is : " << employeeID << endl;
			cout << "Permanent Employee Name is : " << employeeName << endl;
		}

