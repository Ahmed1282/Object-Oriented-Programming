#include<iostream>
using namespace std;

struct Employee
{
	int ID;
	string Name;
	int Age;
	string Gender;
	float Salary;
	string Position;

	void printDetails()
	{
		cout<<"ID Number of employee = "<<ID<<endl;
		cout<<"Name of employee = " <<Name<<endl;
		cout<<"Age of employee = " <<Age<<endl;
		cout<<"Gender of employee = " <<Gender<<endl;
		cout<<"Salary of employee = " <<Salary<<endl;
		cout<<"Position of employee = " <<Position<<endl;

	}

};

int main()
{
	Employee details;
	cout<<"Enter the ID Number : ";
	cin>>details.ID;
	cout<<"Enter the name of employee : ";
	cin>>details.Name;
	cout<<"Enter the age of employee : ";
	cin>>details.Age;
	cout<<"Enter the gender of employee : ";
	cin>>details.Gender;
	cout<<"Enter the salary of employee : ";
	cin >> details.Salary;
	cout<<"Enter the position of employee : ";
	cin>>details.Position;
	cout<<endl;
	details.printDetails();s
	return 0;

}
