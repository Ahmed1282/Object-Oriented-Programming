#include<iostream>
#include<string>
using namespace std;

#ifndef PermanentEmployee_h
#define PermanentEmployee_h

class PermanentEmployee : public Employee
{
	private:
		
		int hourlyIncome;

	public:
	
		PermanentEmployee(int h, int id = 0, string name = "") : Employee(id, name)
		{
			hourlyIncome = h;
		};
		void calculate_the_income();
		void Display();

};



#endif
