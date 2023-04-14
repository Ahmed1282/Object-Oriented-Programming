#include<iostream>
using namespace std;

struct address
{
	int plot_no;
	string street;
	string city;
	int zip;
};

struct Employee
{
	int ID;
	string Name;
	int Age;
	string Gender;
	float Salary;
	string Position;
	address location;

	void printDetails()
	{
		cout<<"ID Number of employee = "<<ID<<endl;
		cout<<"Name of employee = " <<Name<<endl;
		cout<<"Age of employee = " <<Age<<endl;
		cout<<"Gender of employee = " <<Gender<<endl;
		cout<<"Salary of employee = " <<Salary<<endl;
		cout<<"Position of employee = " <<Position<<endl;
		cout<<"Plot # of Employee = " <<location.plot_no<<endl;
		cout<<"Street # of Employee = " <<location.street<<endl;
		cout<<"City of Employee = " <<location.city<<endl;
		cout<<"Zip of Employee = "<<location.zip<<endl;

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
	cout<<"Enter the plot # of employee : ";
	cin>>details.location.plot_no;
	cout<<"Enter the street # of employee : ";
	cin>>details.location.street;
	cout<<"Enter the city of employee : ";
	cin>>details.location.city;
	cout<<"Enter the zip # of employee : ";
	cin>>details.location.zip;
	cout<<endl;
	details.printDetails();
	return 0;

}
