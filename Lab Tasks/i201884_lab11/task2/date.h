#include<iostream>
using namespace std;

#ifndef date_h
#define date_h

class Date
{
    private:
            int Month;
            int Day;
            int Year;
    public:
            Date();
            Date(int m,int d,int y);
            void setDate(int m, int d, int y);
            Date getDate();
            void printDate();
};

#endif
