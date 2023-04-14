//============================================================================
// Name        : Q420i1884.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
bool Substring(char *str1, char *str2, int i, int j)
{ bool a = false;
  bool b = true;
    if (j==0)
     {return a;}
    if (i==0)
     {return b;}
    if (str1[i - 1] == str2[j - 1])
    {return Substring(str1, str2, i - 1, j - 1);
    }
else
return Substring(str1, str2, i-1, j);}


int main()
{ int i=0;
  int j=0;
   char str1[50];
   cout<<"Enter String 1:";
   cin>>str1;
   char str2[50];
   cout<<"Enter String 2:";
   cin>>str2;
    i = strlen(str1);
    j = strlen(str2);
   if (Substring(str1,str2,i,j)==0)
   cout<<"False";
   else
   cout<<"True";
   return 0;
}
