//============================================================================
// Name        : Q320i1884.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int x){
int rec;
size--;
if (size >= 0) {
	if (arr[size] == x)
		return size;
   else
       rec = LinearSearch(arr, size, x);
   }
   else
       return -1;

   return rec;
}
int main() {
int arr[10], search, size = 10;
cout << "Enter 10 values"<<endl;
for (int i = 0; i < 10; i++)
{
	cout<<"Enter ELement "<<i+1<<": ";
	cin >> arr[i];
}
cout<<endl;
cout << "Enter the value you want to search in the array:";
cin >> search;
int index;
index = LinearSearch(arr, size, search);
if (index != -1)
       cout << "Element " << search << " is present in the array" << endl;
   else
       cout << "Element " << search << " is not present in the array" << endl;
return 0;
}
