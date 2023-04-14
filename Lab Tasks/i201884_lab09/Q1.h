#include<iostream>
using namespace std;

#ifndef BigInt_H
#define BigInt_H

class bigint 
{
     private:
        bool positive;                   
        int  digits;                       
        char *number;
		   
    public:
        friend ostream& operator<< (ostream& out, const bigint& x);
        bigint operator+ (const bigint& x);
        bigint& operator= (const bigint& x);
        bigint& operator= (int x);
        bigint(const bigint& x);
        bigint(int size = 20);     
        ~bigint();
                      
};


#endif 

