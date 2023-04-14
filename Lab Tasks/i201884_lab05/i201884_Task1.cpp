#include <iostream>
using namespace std;

class IntArray 
{
	public:
	
	void Print();
	
	int *pointerToArray;
	int num;
	int size;
	IntArray()
	{
		size = 10;
		num = 0;
		pointerToArray = new int[size];
		for (int i = 0; i < 10; i++)
			pointerToArray[i] = num;
	};
	
	IntArray(int num1, int size1)
	{
		size = size1;
		num = num1;
		pointerToArray = new int[size];
		
		for (int i = 0; i < size; i++)
			pointerToArray[i] = num;
	};
	
	~IntArray()
	{
		delete [] pointerToArray;
	};
	
	
};
	
void IntArray::Print()
{
	for (int i = 0; i <size; i++)
	{
		cout << pointerToArray[i];
	}
}
		
int main ()
{
	IntArray a;
	a.Print();
	
	return 0;
}
