#include<iostream>
using namespace std;

#ifndef time_h
#define time_h

class Time
{
    private:
            
			int Hour;
            int Minute;
    public:
            
			Time();
			Time(int h,int m);
            void setTime(int h,int m);
            Time getTime();
            void printTime();
            void incrementHours();
            void incrementMinuteutes();
                
};

#endif
