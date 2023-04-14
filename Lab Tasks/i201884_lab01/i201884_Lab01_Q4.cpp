#include <iostream>
using namespace std;

int main()
{
	int s=5;
	int arr[5] = { 1, 3, 5, 1, 6 };
	int* ptr = new int{s};
	for(int i=0; i<s; i++)
	{
		*(ptr+i) = *(arr+i);
	}
	for(int i=0; i<s; i++)
	{
		for(int j=0; j<s; j++)
		{
			if(i!=j)
			{
				if(*(ptr + i) == *(ptr + j))
				{
					s=j+1;
					j=9999;
					i=9999;
					break;
					
				}
				
			}
		}
	}
	cout<<"Final array size = " <<s<<endl;
	return 0;
}
