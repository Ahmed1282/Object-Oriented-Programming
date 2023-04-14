#ifndef INTYPE_H
#define INTYPE_H
#include <string>
using namespace std;
class intType{
private:
    int numb;
public:
    intType();
    intType(int n);
    void setNum(int x);
    int getNum() const;
    int numLength();
    string int_to_string();
    int reverseNum();
    int sum_all_digits();
    float avg_of_digits();
    int sum_even_digits();
    int sum_odd_digits();
};

#endif