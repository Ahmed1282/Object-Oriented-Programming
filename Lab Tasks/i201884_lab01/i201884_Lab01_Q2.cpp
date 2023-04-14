#include <iostream>
using namespace std;

void duplicate()
{
    int** arr;
    int r,c;
    int x,y;
    cout<<"Enter rows of the Matrix: " ;
    cin>>r;
    cout<<"Enter columns of the Matrix: " ;
    cin>>c;
    arr=new int*[r];
    for(int i=0; i<r; i++)
	{
        arr[i]=new int[c];
    }
    cout<<endl;
    for(int i=0; i<r; i++)
	{
        for(int j=0; j<c ; j++)
		{
            cout<<"enter element at "<<i+1<<" X "<<j+1<<" :";
            cin>>arr[i][j];
        }
    }
 	cout<<endl;
    cout<<"\tMATRIX"<<endl;
    for(int i=0; i<r; i++)
	{
    	for(int j=0; j<c ; j++)
		{
        	cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<r; i++)
    {
    	for (int j=0 ; j<c; j++)
    	{
    		if (arr[i][j] != 0)
    		{
    			x=0;
			}
			else 
			{
				x=1;
			}
		}
	}
 	if(x==1)
 	{
 		cout<<"Matrix is Upper Diagonal"<<endl;
	}
	for(int i=0; i<r; i++)
    {
    	for (int j=i+1; j<c; j++)
    	{
    		if(arr[i][j] != 0)
    		{
    			y=0;
			}
			else
			{
				y=1;
			}
			
		}
	}
 	if(y==1)
 	{
 		cout<<"Matrix is lower Diagonal"<<endl;
	}
    delete [] arr;
}

int main()
{
	duplicate();
	return 0;
}
