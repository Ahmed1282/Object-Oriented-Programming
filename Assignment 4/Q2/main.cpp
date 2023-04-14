#include<iostream>
#include<string>
#include<cstring>
#include "Project.cpp"
#include "Employee.cpp"
#include "SalariedEmployee.cpp"
#include "CommissionEmployee.cpp"
#include "HourlyEmployee.cpp"
using namespace std;

int main()
{
	Project obj1;
    obj1.setProjectId(10);
    obj1.setProjectDetails("FLEX");
    string details1 = obj1.showDetails();
    cout<<"Project showDetails: "<<details1<<endl;
    
    Employee obj2;
    obj2.setEmployeeId("19");
    obj2.setName("Elon Musk");
    Project project1;
    project1.setProjectId(10);
    project1.setProjectDetails("User Interface");
    obj2.setProject(project1);
    string details2 = obj2.showDetails();
    cout<<"Employee showDetails: "<<details2<<endl;
    
    SalariedEmployee obj3;
    obj3.setEmployeeId("10");
    obj3.setName("Mark Zuckerberg");
    obj3.setMonthlySalary(100000);
    Project project2;
    project2.setProjectId(15);
    project2.setProjectDetails("Network Architecture");
    obj3.setProject(project2);
    string details3 = obj3.showDetails();
    cout<<"SalariedEmployee showDetails: "<<details3<<endl;
    
    CommissionEmployee obj4;
    obj4.setEmployeeId("11");
    obj4.setName("Bill Gates");
    obj4.setBaseSalary(40000);
    obj4.setGrossSales(10000);
    obj4.calculateSalary();
    Project project3;
    project3.setProjectId(23);
    project3.setProjectDetails("Database Administration");
    obj4.setProject(project3);
    string details4 = obj4.showDetails();
    cout<<"CommissionEmployee showDetails: "<<details4<<endl;
    
    CommissionEmployee obj5;
    obj5.setBaseSalary(50000);
    obj5.setGrossSales(100001);
    obj5.calculateSalary();
    float totalSalaryExpected1 = 50000 + (100001 * 0.015);
    float totalSalary1 = obj5.getTotalSalary();
    cout<<"CommissionEmployee Total Salary: "<<totalSalary1<<endl;
    
    HourlyEmployee obj6;
    obj6.setEmployeeId("12");
    obj6.setName("Linus Torvalds");
    obj6.setHourlyRate(300);
    obj6.setNoOfHours(100);
    obj6.calculateSalary();
    Project project4;
    project4.setProjectId(32);
    project4.setProjectDetails("Operating Systems");
    obj6.setProject(project4);
    string details5 = obj6.showDetails();
    cout<<"HourlyEmployee Total Salary: "<<details5<<endl;
    
    HourlyEmployee obj7;
    obj7.setHourlyRate(310);
    obj7.setNoOfHours(120);
    obj7.calculateSalary();
    int totalSalaryExpected2 = 310 * 120;
    int totalSalary2 = obj7.getTotalSalary();
    cout<<"HourlyEmployee Total Salary: "<<totalSalary2<<endl;
    
    return 0;
}
