#include <iostream>
#include "Q1.h"
using namespace std;

int Counter::objCount = 0;

Counter::Counter()
{
    count = 0;
    objCount++;
    serialNo = 0;
}

Counter::Counter(int c)
{
    count = c;
    objCount++;
    serialNo = objCount;
}

void Counter::setCount(int c)
{
    count = c;
}

int Counter::getCount()const
{
    return count;
}

int Counter::getSerialNo()const
{
    return serialNo;
}

int Counter::getObjCount()
{
    return objCount;
}

int Counter::IncrementObjCount()
{   
    static int a = objCount++;
    return a;
}

void Counter::operator =(const Counter& a)
{
    count = a.count;
}

Counter Counter::operator -(const Counter& b)
{
     Counter x;
     x.count = (-1*b.count);
     return x;
	 
}

Counter::~Counter()
{
}

int main()
{
    Counter obj1(5),obj2;
	cout<<"Object2 value before assigned: "<<obj2.getCount()<<" and Object1 value: "<<obj1.getCount()<<endl;
    obj2 = obj1;
    cout<<"Object2 value after assigned: "<<obj2.getCount()<<endl;
    Counter c;
    cout<<"Object count: "<<c.getObjCount()<<endl;
    Counter obj3(14),obj4;
    cout<<"Object4 value before assigned: "<<obj4.getCount()<<" and Object3 value: "<<obj3.getCount()<<endl;
    obj4 = obj3;
    cout<<"Object4 value after assigned: "<<obj4.getCount()<<endl;
    Counter c1;
    cout<<"Object count: "<<c1.getObjCount()<<endl;
    obj2 = obj2 - obj2 - obj2;
    cout<<"Object2 value inverted: "<<obj2.getCount()<<endl;
	return 0;
}
