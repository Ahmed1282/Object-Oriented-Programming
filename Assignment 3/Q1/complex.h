//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 3_Q1
#include<iostream>

using namespace std;

#ifndef complex
#define complex

class Complex
{

	private:
		int real, imag;

	public:
		Complex();
		Complex(double r, double i);
		void setReal(double x);
		double getReal();
		void setImg(double x);
		double getImg();
		void display();
		//part a
		Complex operator +(Complex c);
		//part b
		Complex operator -(Complex c);
		//part c
		Complex operator *(Complex c);
		//part d
		Complex operator /(Complex c);
		//part e
		void operator +=(Complex c);
		void operator -=(Complex c);
		void operator *=(Complex c);
		void operator /=(Complex c);
		//part f
		void operator =(Complex c);
		//part g
		friend ostream& operator <<(ostream& out, const Complex& c);
		friend istream& operator >>(istream& in, Complex& c);
		//part h
		bool operator ==(Complex c);
		bool operator !=(Complex c);
		//part i
		bool operator <(Complex c);
		bool operator >(Complex c);
	};

#endif
