#include<iostream>
using namespace std;

#ifndef event_h
#define event_h

class Event
{
    private:
            string EventName;
            Time EventTime;
            Date EventDay;
    public:
            Event(int h , int min , int m ,int d, int y, string n );
            void setEventData(int h , int min , int m ,int d, int y, string n);
            void printEventData();          
};
     

#endif
