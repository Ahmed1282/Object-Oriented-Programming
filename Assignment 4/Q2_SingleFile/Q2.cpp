#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Project
{
private:

    int project_ID;
    string project_details;

public:

    Project();
    Project(int projectID, string projectdetails);
    int getProjectId();
    string getProjectDetails();
    void setProjectId(int projectID);
    void setProjectDetails(string projectdetails);
    string showDetails();
};

class Employee
{
private:

    string name;
    string employee_ID;
    Project project;

public:

    Employee();
    string getName();
    string getEmployeeId();
    Project getProject();
    void setName(string n);
    void setEmployeeId(string employeeID);
    void setProject(Project p);
    string showDetails();

};

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

class CommissionEmployee : public Employee
{
private:

    int gross_Sales;
    int base_Salary;
    float total_Salary;

public:

    CommissionEmployee();
    int getGrossSales();
    int getBaseSalary();
    float getTotalSalary();
    void setGrossSales(int grossSales);
    void setBaseSalary(int baseSalary);
    void calculateSalary();
    string showDetails();
};

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

Project::Project()
{

}

Project::Project(int projectID, string projectdetails)
{
    project_ID = projectID;
    project_details = projectdetails;
}

int Project::getProjectId()
{
    return project_ID;
}

string Project::getProjectDetails()
{
    return project_details;
}

void Project::setProjectId(int projectID)
{
    if (projectID >= 1)
    {
        project_ID = projectID;
    }
    else
    {
        cout << "The ID cannot be less than 1" << endl;
    }
}

void Project::setProjectDetails(string projectdetails)
{
    project_details = projectdetails;
}

string Project::showDetails()
{
    string details1, details2, details3;
    details1 = "" + to_string(getProjectId());
    details2 = "," + getProjectDetails();
    details3 = details1 + details2;
    return details3;
}


Employee::Employee()
{

}

string Employee::getName()
{
    return name;
}

string Employee::getEmployeeId()
{
    return employee_ID;
}

Project Employee::getProject()
{
    return project;
}

void Employee::setName(string n)
{
    name = n;
}

void Employee::setEmployeeId(string employeeID)
{
    int e_ID;
    e_ID = stoi(employeeID);
    if (e_ID >= 1)
    {
        employee_ID = employeeID;
    }
    else
    {
        cout << "The ID cannot be less than 1" << endl;
    }
}

void Employee::setProject(Project p)
{
    project = p;
}

string Employee::showDetails()
{
    string details1, details2, details3, details4;
    details1 = "" + getEmployeeId();
    details2 = "," + getName();
    details3 = "," + project.showDetails();
    details4 = details1 + details2 + details3;
    return details4;
}

SalariedEmployee::SalariedEmployee() :Employee()
{

}

int SalariedEmployee::getMonthlySalary()
{
    return monthly_Salary;
}

void SalariedEmployee::setMonthlySalary(int monthlySalary)
{
    if (monthlySalary > 30000)
    {
        monthly_Salary = monthlySalary;
    }
    else
    {
        monthly_Salary = 100000;
        cout << "Monthly salary must be above Rs. 30,000" << endl;
    }
}

string SalariedEmployee::showDetails()
{
    string details1, details2, details3, details4, details5;
    details1 = "" + Employee::getEmployeeId();
    details2 = "," + Employee::getName();
    details3 = "," + to_string(getMonthlySalary());
    details4 = "," + Employee::getProject().showDetails();
    details5 = details1 + details2 + details3 + details4;
    return details5;
}


CommissionEmployee::CommissionEmployee() :Employee()
{

}

int CommissionEmployee::getGrossSales()
{
    return gross_Sales;
}

int CommissionEmployee::getBaseSalary()
{
    return base_Salary;
}

float CommissionEmployee::getTotalSalary()
{
    return total_Salary;
}

void CommissionEmployee::setGrossSales(int grossSales)
{
    if (grossSales >= 1)
    {
        gross_Sales = grossSales;
    }
    else
    {
        gross_Sales = 10000;
        cout << "Gross sales must be a positive integer value" << endl;
    }
}


void CommissionEmployee::setBaseSalary(int baseSalary)
{
    if (baseSalary > 20000)
    {
        base_Salary = baseSalary;
    }
    else
    {
        base_Salary = 50000;
        cout << "Base salary must be above 20,000" << endl;
    }
}


void CommissionEmployee::calculateSalary()
{
    float commission;
    commission = 0;
    if (gross_Sales > 100000)
    {
        commission = gross_Sales * 0.015;
    }
    total_Salary = base_Salary + commission;
}


string CommissionEmployee::showDetails()
{
    string details1, details2, details3, details4, details5;
    details1 = "" + Employee::getEmployeeId();
    details2 = "," + Employee::getName();
    details3 = "," + to_string(getBaseSalary());
    details4 = "," + Employee::getProject().showDetails();
    details5 = details1 + details2 + details3 + details4;
    return details5;

}

HourlyEmployee::HourlyEmployee() :Employee()
{

}

int HourlyEmployee::getNoOfHours()
{
    return no_of_hours;
}

int HourlyEmployee::getHourlyRate()
{
    return hourly_rate;
}

int HourlyEmployee::getTotalSalary()
{
    return total_salary;
}

void HourlyEmployee::setNoOfHours(int noofhours)
{
    if (noofhours >= 30) {
        no_of_hours = noofhours;
    }
    else
    {
        no_of_hours = 150;
        cout << "No of hours worked must be at least 30" << endl;
    }
}

void HourlyEmployee::setHourlyRate(int hourlyrate)
{
    if (hourlyrate >= 150)
    {
        hourly_rate = hourlyrate;
    }
    else
    {
        hourly_rate = 300;
        cout << "the hourly rate must be at least Rs. 150 " << endl;
    }
}

void HourlyEmployee::calculateSalary()
{
    total_salary = no_of_hours * hourly_rate;
}

string HourlyEmployee::showDetails()
{
    string details1, details2, details3, details4, details5;
    details1 = "" + Employee::getEmployeeId();
    details2 = "," + Employee::getName();
    details3 = "," + to_string(total_salary);
    details4 = "," + Employee::getProject().showDetails();
    details5 = details1 + details2 + details3 + details4;
    return details5;
}


int main()
{
    Project obj1;
    obj1.setProjectId(10);
    obj1.setProjectDetails("FLEX");
    string details1 = obj1.showDetails();
    cout << "Project showDetails: " << details1 << endl;

    Employee obj2;
    obj2.setEmployeeId("19");
    obj2.setName("Elon Musk");
    Project project1;
    project1.setProjectId(10);
    project1.setProjectDetails("User Interface");
    obj2.setProject(project1);
    string details2 = obj2.showDetails();
    cout << "Employee showDetails: " << details2 << endl;

    SalariedEmployee obj3;
    obj3.setEmployeeId("10");
    obj3.setName("Mark Zuckerberg");
    obj3.setMonthlySalary(100000);
    Project project2;
    project2.setProjectId(15);
    project2.setProjectDetails("Network Architecture");
    obj3.setProject(project2);
    string details3 = obj3.showDetails();
    cout << "SalariedEmployee showDetails: " << details3 << endl;

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
    cout << "CommissionEmployee showDetails: " << details4 << endl;

    CommissionEmployee obj5;
    obj5.setBaseSalary(50000);
    obj5.setGrossSales(100001);
    obj5.calculateSalary();
    float totalSalaryExpected1 = 50000 + (100001 * 0.015);
    float totalSalary1 = obj5.getTotalSalary();
    cout << "CommissionEmployee Total Salary: " << totalSalary1 << endl;

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
    cout << "HourlyEmployee Total Salary: " << details5 << endl;

    HourlyEmployee obj7;
    obj7.setHourlyRate(310);
    obj7.setNoOfHours(120);
    obj7.calculateSalary();
    int totalSalaryExpected2 = 310 * 120;
    int totalSalary2 = obj7.getTotalSalary();
    cout << "HourlyEmployee Total Salary: " << totalSalary2 << endl;

    return 0;
}
