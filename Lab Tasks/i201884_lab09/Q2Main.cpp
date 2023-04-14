#include"Q2.cpp"
#include<iostream>
using namespace std;

int main()
{
	Matrix d(5, 5);
    cout<<"Matrix: "<<endl<<endl;
	d.display();
	cout<<endl;
	d++;
	cout << "Overload Post-increment Operator (d++):" <<endl<<endl;
	d.display();
	cout<<endl;
	++d;
	cout << "Overload Pre-increment Operator (++d):" <<endl<<endl;
	d.display();
	cout<<endl;
	d--;
	cout << "Overload Post-decrement Operator (d--):" <<endl<<endl;
	d.display();
	cout<<endl;
	--d;
	cout << "Overload Pre-decrement Operator (--d):" <<endl<<endl;
	d.display();
	cout<<endl;
	return 0;

}
