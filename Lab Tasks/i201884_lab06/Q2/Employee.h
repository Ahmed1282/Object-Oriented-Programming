#include <string>
using namespace std;

#ifndef EMP_H
#define EMP_H
class Employee{
private:
    int empNumb;
    string name;
    int *phoneNo;
    float compensation;
public:
    Employee();
    Employee(int, string, int*, float);
    Employee(Employee &emp);
    void setEmpNum(int);
    void setName(string);
    void setPhone(int*);
    void setEmpCompensation(float);
    int getEmpNum() const;
    string getEmpName() const;
    int* getPhoneNumb() const;
    float getEmpCompensation() const;
    bool updatePhone(int searchVal, int updateVal);
};



#endif
