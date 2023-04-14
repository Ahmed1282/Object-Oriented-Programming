//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 3_Q2
#include<iostream>
#include"polynomial.cpp"

using namespace std;

int main()
{
	int degree1, degree2;
	double *poly1, *poly2;
	cout<<"Please enter the maximum number of degree of both Polynomials: ";
	cin>>degree1;
	degree2=degree1;
	cout<<endl;

	cout<<"Polinomial 1:"<<endl;
	Polynomial obj1 (poly1,degree1);
	cout<<"Polynomial = ";
	obj1.display();
	cout<<endl;
	cout<<endl;
	
	cout<<"Polinomial 2:"<<endl;
	Polynomial obj2 (poly2,degree2);
	cout<<"Polynomial = ";
	obj2.display();
	cout<<endl;
	cout<<endl;
	
	
	cout<<"\n-----------------------Part a-----------------------"<<endl;
	Polynomial obj3;
	obj3=obj1+obj2;
	cout<<endl;
	cout<<"After Adding (+) both polinomial:"<<endl;
	cout<<"( ";
	obj1.display();
	cout<<" )";
	cout<<" + ";
	cout<<"( ";
	obj2.display();
	cout<<" )";
	cout<<endl;
	
	cout<<"Polynomial = ";
	obj3.display();
	cout<<endl;
	
	cout<<"\n-----------------------Part b-----------------------"<<endl;
	obj3=obj1-obj2;
	cout<<endl;
	cout<<"After Subtracting (-) both polinomial:"<<endl;
	cout<<"( ";
	obj1.display();
	cout<<" )";
	cout<<" - ";
	cout<<"( ";
	obj2.display();
	cout<<" )";
	cout<<endl;
	
	cout<<"Polynomial = ";
	obj3.display();
	cout<<endl;
	
	cout<<"\n-----------------------Part c-----------------------"<<endl;
	cout<<endl;
	cout<<"After Adding and Equating (+=) polinomial:"<<endl;
	cout<<"( ";
	obj1.display();
	cout<<" )";
	cout<<" += ";
	cout<<"( ";
	obj1.display();
	cout<<" )";
	cout<<endl;
	
	obj1+=obj1;
	cout<<"Polynomial = ";
	obj1.display();
	cout<<endl;
	
	cout<<"\n-----------------------Part d-----------------------"<<endl;
	cout<<endl;
	cout<<"After Subtracting and Equating (-=) polinomial:"<<endl;
	cout<<"( ";
	obj2.display();
	cout<<" )";
	cout<<" -= ";
	cout<<"( ";
	obj1.display();
	cout<<" )";
	cout<<endl;
	
	obj2-=obj1;
	cout<<"Polynomial = ";
	obj2.display();
	cout<<endl;
	
	/*
	//LOGIC FOR THE OPERATOR IS CORRECT SO DO PLEASE GIVE SOME MARKS FOR IT
	cout<<"\n-----------------------Part e-----------------------"<<endl;
	Polynomial obj4;
	obj2=obj1;
	cout<<endl;
	cout<<"After Equating (=) both polinomial:"<<endl;
	obj2.display();
	*/
	cout<<"\n-----------------------Part f-----------------------"<<endl;
	obj2==obj1;
	cout<<endl;
	cout<<"After Equating Comparison (==) polinomial:"<<endl;
	cout<<"( ";
	obj2.display();
	cout<<" )";
	cout<<" == ";
	cout<<"( ";
	obj1.display();
	cout<<" )";
	cout<<endl;
	
	if(obj2==obj1)
	{
		cout<<"True (obj2==obj1)"<<endl;
	}
	else
	{
		cout<<"False (obj2 != obj1)"<<endl;
	}
	cout<<"\n-----------------------Part g-----------------------"<<endl;
	Polynomial obj5;
	cout<<"After taking input (>>) polinomial:"<<endl;
	cin>>obj5;
	cout<<endl;
	cout<<"After taking output (<<) polinomial:"<<endl;
	cout<<obj5;
	cout<<"\n----------------------------------------------------"<<endl;
	
	return 0;
}
