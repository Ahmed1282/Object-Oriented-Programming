#include<iostream>
#include<string>
using namespace std;

#ifndef HourlyEmployee_h
#define HourlyEmployee_h

class HourlyEmployee : public Employee
{
	private:
	
		int hourlyIncome;

	public:
	
		HourlyEmployee(int h, int id = 0, string name = "") : Employee(id, name)
		{
			hourlyIncome = h;
		}
		void calculate_the_hourly_income();
		void Display();
};
	




#endif
