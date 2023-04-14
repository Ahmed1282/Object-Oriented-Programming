#include"Q1.h"
#include<iostream>
using namespace std;

bigint::bigint(int size) 
{ 
	digits = size;
    number = new char[digits]; 
}

ostream& operator<< (ostream& out, const bigint& x)
{
    int cnt = 0;                         

    while ((x.number[cnt] == 0) && (cnt < x.digits-1))
    {
        cnt++;                          
	}
    
	while (cnt < x.digits)               
    {
	    out << (int)x.number[cnt++];     
	}
	
    return out;                       
}

bigint::bigint(const bigint& x)
{
    digits = x.digits;                    
    positive = x.positive;                 
    number = new char[digits];
    for (int i = 0; i < digits; i++)
	{       
        number[i] = x.number[i];
	}
}

bigint& bigint::operator= (const bigint& x)
{
    int i, x_index;                         

    positive = x.positive;                 
    for (i = digits - 1, x_index = 0; i >= 0; i--, x_index++)
        if (x_index < x.digits)            
            number[i] = x.number[i];       
        else                               
            number[i] = 0;        

    return *this;                       
}

bigint& bigint::operator= (int x)
{
    int cnt;                        

    if (x < 0)                       
    {
        positive = false;
        x = -x;
    }
    else
        positive = true;

    cnt = digits - 1;             
    while (cnt >= 0)                
    {
        number[cnt--] = x % 10;   
        x /= 10;                     
    }
    return *this;                   
}

bigint bigint::operator+ (const bigint& x)
{                                  
    bigint sum( (digits > x.digits) ? digits : x.digits );
    int xptr, myptr, sumptr;          
    char next_x, next_y;            
    char carry = 0;               

    if (positive != x.positive)
    {
    	sum.positive = positive;
	}
                                      
    for (sumptr = sum.digits - 1, myptr = digits - 1, xptr = x.digits - 1; sumptr >= 0; sumptr--, myptr--, xptr--)
    {
        next_x = (xptr < 0) ? 0 : x.number[xptr];
        next_y = (myptr < 0) ? 0 : number[myptr];  
        sum.number[sumptr] = next_x + next_y + carry;  
        if (sum.number[sumptr] > 9)                
        {
            carry = 1;                             
            sum.number[sumptr] -= 10;
        }
        else
        {
            carry = 0;
    	}
    }
    return sum;                                    
}

bigint::~bigint() 
{ 
	delete[] number; 
}
