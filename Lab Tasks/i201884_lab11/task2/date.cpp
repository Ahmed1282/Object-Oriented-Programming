#include<iostream>
#include"date.h"
using namespace std;


Date::Date()
{
	Month = 0;
	Day = 0;
	Year = 0;
}
Date::Date(int m,int d,int y)
{
    if (m > 0 && m <=12)
    {
        Month=m;
    }
     if (d > 0 && d <=31)
    {
        Day = d;
    }  
    Year=y;
}
void Date::setDate(int m, int d, int y)
{
    if (m > 0 && m <=12)
    {
        Month=m;
    }
    if (d > 0 && d <=31)
    {
        Day = d;
    }
    Year=y;
}

Date Date::getDate()
{
    Date temp;
    temp.Month=Month;
    temp.Day=Day;
    temp.Year=Year;
    return temp;

}

void Date::printDate()
{
    cout<<"Month: "<<Month<<endl;
    cout<<"Day: "<<Day<<endl;
    cout<<"Year: "<<Year<<endl;
}

