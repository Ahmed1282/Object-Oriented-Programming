#include<iostream>
#include"time.h"
#include"date.h"
#include"event.h"
using namespace std;


Event::Event(int h , int min , int m ,int d, int y, string n )
{
    EventName = n;
    EventTime.setTime(h, min);
    EventDay.setDate(m,d,y);
        
}
void Event::setEventData(int h , int min , int m ,int d, int y, string n)
{
    EventName = n;
    EventTime.setTime( h, min);
    EventDay.setDate(m,d,y );
}
void Event::printEventData()
{
    cout<<"Event Name : "<<EventName<<endl;
    EventTime.printTime();
    EventDay.printDate();   
} 

