//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 3_Q1
#include<iostream>
#include"complex.cpp"

using namespace std;

int main()
{
	double r, i, r1, i1;
	cout<<"Complex Number 1"<<endl;
	cout<<"Please enter Real part: ";
	cin>>r;
	cout<<"Please enter Imaginary part: ";
	cin>>i;
	cout<<endl;
	cout<<"Complex Number 2"<<endl;
	cout<<"Please enter Real part: ";
	cin>>r1;
	cout<<"Please enter Imaginary part: ";
	cin>>i1;
	cout<<endl;
	cout<<"\n-----------------------Part a-----------------------"<<endl<<endl;
	Complex c1(r,i), c2(r1,i1), c3;
	c3 = c1+c2;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" + "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part a (+): ";
	c3.display();
	cout<<"\n-----------------------Part b-----------------------"<<endl<<endl;
	c3 = c2-c1;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" - "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part b (-): ";
	c3.display();
	cout<<"\n-----------------------Part c-----------------------"<<endl<<endl;
	c3 = c1*c2;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" * "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part c (*): ";
	c3.display();
	cout<<"\n-----------------------Part d-----------------------"<<endl<<endl;
	c3 = c2/c1;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" / "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part d (/): ";
	c3.display();
	
	cout<<"\n-----------------------Part e-----------------------"<<endl<<endl;
	Complex c4(r,i);
	c4+=c4;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" += "<<"( "<<r<<" + "<<i<<"i )"<<endl;
	cout<<"Part e (+=): ";
	c4.display();
	
	cout<<endl;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" -= "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part e (-=): ";
	Complex c5(r,i),c6(r1,i1);
	c6-=c5;
	c6.display();
	
	cout<<endl;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" *= "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part e (*=): ";
	Complex c7(r,i),c8(r1,i1);
	c8*=c7;
	c8.display();
	
	cout<<endl;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" /= "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part e (/=): ";
	Complex c9(r,i),c10(r1,i1);
	c10/=c9;
	c10.display();
	
	cout<<"\n-----------------------Part f-----------------------"<<endl<<endl;
	Complex c11;
	cout<<"( ? + ?i )"<<" = "<<"( "<<r<<" + "<<i<<"i )"<<endl;
	c11=c1;
	cout<<"Part f (=): ";
	c11.display();
	
	cout<<"\n-----------------------Part g-----------------------"<<endl<<endl;
	cout<<"Part g (>>): ";
	Complex c16;
	cin >> c16;
	cout << "Part g (<<): Complex Object = ";
	cout << c16;

	
	cout<<"\n-----------------------Part h-----------------------"<<endl<<endl;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" == "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	Complex c12(r,i), c13(r1,i1);
	cout<<"Part h (==) : ";
	if(c12 == c13)
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	cout<<endl;
	cout<<endl;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" != "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part h (!=) : ";
	if(c12 != c13)
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	cout<<endl;
	cout<<"\n-----------------------Part i-----------------------"<<endl<<endl;
	Complex c14(r,i), c15(r1,i1);
	cout<<"( "<<r1<<" + "<<i1<<"i )"<<" > "<<"( "<<r<<" + "<<i<<"i )"<<endl;
	cout<<"Part i (>) : ";
	if(c15 > c14)
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	cout<<endl;
	cout<<endl;
	cout<<"( "<<r<<" + "<<i<<"i )"<<" < "<<"( "<<r1<<" + "<<i1<<"i )"<<endl;
	cout<<"Part i (<) : ";
	if(c14 < c15)
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	cout<<endl;
	cout<<"---------------------------------------------------"<<endl<<endl;
	
	
	return 0;
}
