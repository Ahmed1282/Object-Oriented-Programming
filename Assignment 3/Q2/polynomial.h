//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 3_Q2
#include<iostream>

using namespace std;

#ifndef polynomial
#define polynomial

class Polynomial
{
	private:
		double *poly;
		int degree;
		int size;
		int tempdegree;
			
		
	public:
		Polynomial();
		Polynomial(double *p, int d);
		void display();
		double* getPoly();
		int getDegree();
		//part a
		Polynomial operator +( Polynomial r ); 
		//part b
		Polynomial operator -( Polynomial r ); 
		//part c
		void operator +=( Polynomial r ); 
		//part d
		void operator -=( Polynomial r );
		//part e 
		//void operator=( Polynomial r );
		//part f
		bool operator ==( Polynomial r );
		//part g
		friend ostream& operator <<(ostream& out, const Polynomial &r);
		friend istream& operator >>(istream& in, Polynomial &r); 
		
};

#endif
