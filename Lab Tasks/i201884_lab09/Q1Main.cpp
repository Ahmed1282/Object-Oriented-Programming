#include"Q1.cpp"
#include<iostream>
using namespace std;

int main()
{
	bigint x(10);                     
    bigint y;                           

    x = 999999999;
    y = 0;
    for (int i = 0; i < 20; i++)
    {
        y = y + x;                  
        cout << y << '\n';            
    }
    return 0;
}
