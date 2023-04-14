#include<iostream>
#include"time.h"
using namespace std;

Time::Time()
{
    Hour =0;
    Minute = 0;
}

Time::Time(int h,int m)
{
    if  (h<24 && h>0)
	{
        Hour = h;
    }      
    if(m<60 && m>0)
	{
        Minute=m;
    }
}


void Time::setTime(int h,int m)
{
    if  (h<24 && h>0)
	{
        Hour = h;
    }      
    if(m<60 && m>0)
	{
        Minute=m;
    }
}


Time Time::getTime()
{
    Time temp;
    temp.Hour=Hour;
    temp.Minute=Minute;
    return temp;
}

void Time::printTime()
{
    cout<<"Hour: "<<Hour<<endl;
    cout<<"Minute: "<<Minute<<endl;
}

void Time::incrementHours()
{
    if(Hour != 23)
	{
        Hour ++;
    }
	else
	{
        Hour = 0; 
    }
}

void Time::incrementMinuteutes()
{
    if(Minute != 59)
	{
        Minute++;
    }
	else
	{
        Minute=0;
        if(Hour != 23)
		{
            Hour ++;
        }
		else
		{
            Hour = 0; 
    	}
	}
}
