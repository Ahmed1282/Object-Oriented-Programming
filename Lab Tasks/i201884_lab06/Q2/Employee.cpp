#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(){
    empNumb=000;
    name="";
    phoneNo=new int[4];
    for (int i = 0; i < 4; i++)
    {phoneNo[i]=0;}
}
Employee::Employee(int n, string str, int *p,float com){
    empNumb=n;
    name=str;
    compensation=com;
    phoneNo=new int[4];
    for (int i = 0; i < 4; i++)
    {phoneNo[i]=p[i];}
}

Employee::Employee(Employee &emp){
    empNumb=emp.empNumb;
    name=emp.name;
    compensation=emp.compensation;
    for (int i = 0; i < 4; i++)
    {phoneNo[i]=emp.phoneNo[i];}
}

int Employee::getEmpNum() const{
    return empNumb;
}
string Employee::getEmpName() const{
    return name;
}
int* Employee::getPhoneNumb()const{
    return phoneNo;
}
float Employee::getEmpCompensation() const {
    return compensation;
}

bool Employee::updatePhone(int val, int nVal){
    for (int i = 0; i < 4; i++)
    {
        if(phoneNo[i]==val){
            phoneNo[i]=nVal;
            return true;
        }
    }
    return false;    
}

string MAX_COM(Employee emp[], int size){
    Employee M=emp[0];
    for (int i = 0; i < size; i++)
    {
       if(M.getEmpCompensation()<emp[i].getEmpCompensation())
            M=emp[i];
    }
    return M.getEmpName();
}