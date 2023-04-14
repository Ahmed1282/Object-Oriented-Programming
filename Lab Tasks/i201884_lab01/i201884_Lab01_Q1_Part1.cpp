#include <iostream>
using namespace std;

void duplicate()
{
	int *arr=new int(5);
	int *arr1=new int(5);
	cout<<"Enter 5 items: "<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"values you entered = ";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" " ;
	}
	for(int i=0; i<5; i++)
	{
		arr1[i]=arr[i];
	}
	cout<<endl;
	cout<<endl;
	cout<<"second duplicate array = " ;
	for(int i=0; i<5; i++)
	{
		cout<<arr1[i]<<" ";
	}
}

int main()
{
	duplicate();
	return 0;
}
