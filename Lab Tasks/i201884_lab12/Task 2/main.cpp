#include<iostream>
#include<string>
#include"Employee.cpp"
#include"HourlyEmployee.cpp"
#include"PermanentEmployee.cpp"
using namespace std;

int main()
{
	HourlyEmployee h(450, 200, "Ahmed");
	h.Display();
	h.calculate_the_hourly_income();
	cout << endl;
	PermanentEmployee p(2500, 2020, "Baig");
	p.Display();
	p.calculate_the_income();
	return 0;
}
