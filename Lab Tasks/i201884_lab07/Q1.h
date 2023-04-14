#include<iostream>
using namespace std;

#ifndef Q1
#define Q1

class momentum
{
	private:
		double *velocity;
		double *momentum_;
		double mass;
	
	public: 
		momentum();
		momentum(momentum &obj);
		void setVelocity(double a, double b, double c);
		void momentumCalculate (double a, double b, double c);
		void copyMomentumShallow ();
		void copyMomentumDeep();
		void display();

				
};

#endif
