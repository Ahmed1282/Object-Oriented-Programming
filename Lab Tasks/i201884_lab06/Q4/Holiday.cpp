#include <string>
using namespace std;
#include"Holiday.h"

Holiday::Holiday(){
    name="";
    day=0;
    month="";
}
Holiday::Holiday(string n, int d, string m){
    name=n;
    day=d;
    month=m;
}

Holiday::Holiday(Holiday &copy){
    name=copy.name;
    day=copy.day;
    month=copy.month;
}

bool Holiday::setName(const string &s){
    if(s.length()<50){
        name=s;
        return true;
    }
    else return false;
}
string Holiday::getName() const{
    return name;
}
bool Holiday::setDay(int u){
    if(u>0){
        day=u;
        return true;
    }
    else return false;
}
int Holiday::getDay() const{
    return day;
}
bool Holiday::setMonth(const string &p){
    if(p.length()<10){
        month=p;
        return true;
    }
    else return false;
}
string Holiday::getMonth() const{
    return month;
}

bool SameMonth (const Holiday &a, const Holiday &b){
    if(a.getMonth()==b.getMonth())
        return true;
    else
        return false;
}

double avgDate(Holiday arr[], int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i].getDay();
    }
    return (double)sum/size;
    
}