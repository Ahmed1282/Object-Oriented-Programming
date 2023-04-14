#include <iostream>
using namespace std;

int checkPrime(int num)
{
	if(num <=1)
	{
		return 0 ;
	}
   	for(int i=2; i<=num; i++)
   	{
      	if(num%i==0)
	  	{
         	return 0;
      	}
      	return 1;
   	}
}
void duplicate()
{
	int n, c=0;
	int prime = 0;
	cout<<"Please enter the size of the array: ";
	cin>>n;
	cout<<endl;
	int *arr=new int(n);
	cout<<"Please enter the Elements of the array: "<<endl;
	for(int i=0; i<n ;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"The values you entered is: " ;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
   	for(int i=0; i<n; i++)
	{
      	prime = checkPrime(arr[i]) ;
      	if(prime == 1)
      	{
        	c++;
    	}
   	}
   	cout<<endl;
	cout<<"Prime numbers in 1D Dynamic array: "<<c<<endl;
}

int main()
{
	duplicate();
	return 0;
}
