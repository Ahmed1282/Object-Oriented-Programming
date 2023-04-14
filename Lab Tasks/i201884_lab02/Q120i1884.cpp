//============================================================================
// Name        : Q120i1884.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int fib(int n)
{
   if(n == 0)
      return 0;
   else if (n == 1)
      return 1;
   else
    return(fib(n-1) + fib(n-2));
}

int main()
{
   int n,num=0;
   cout<<"Enter the number of terms: ";
   cin >>n;
   cout <<"Fibonnaci Series: ";
   for(int i = 1; i <= n; i++)
   {
      cout << " " <<fib(num);
      num++;
   }
   return 0;
}



