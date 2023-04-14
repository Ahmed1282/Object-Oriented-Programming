#include<iostream>
#include"time.cpp"
#include"date.cpp"
#include"event.cpp"
using namespace std;

int main()
{
	Event event1(12,20,10,12,2001,"Party");
    Event event2(1,30,5,29,2020,"Birthday");
    event1.printEventData();
	cout<<endl;
    event2.printEventData();
}
