//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 3_Q1
#include<iostream>
#include"complex.h"

using namespace std;

	Complex::Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex::Complex(double r, double i)
	{
		real = r;
		imag = i;
	}
	void Complex::setReal(double x)
	{
		real = x;
	}
	double Complex::getReal()
	{
		return real;
	}
	void Complex::setImg(double x)
	{
		imag = x;
	}
	double Complex::getImg()
	{
		return imag;
	}
	void Complex::display()
	{
		cout << "New Complex Number is: " << real << " + " << imag << "i" << endl;
	}


	//part a
	Complex Complex::operator +(Complex c)
	{
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
	//part b
	Complex Complex::operator -(Complex c)
	{
		Complex temp;
		temp.real = real - c.real;
		temp.imag = imag - c.imag;
		return temp;
	}
	//part c
	Complex Complex::operator *(Complex c)
	{
		Complex temp, temp2, temp3;

		temp.real = real * c.real;
		temp.imag = imag * c.imag;
		temp3.real = temp.real - temp.imag;

		temp2.real = real * c.imag;
		temp2.imag = imag * c.real;
		temp3.imag = temp2.real + temp2.imag;

		return temp3;
	}

	//part d
	Complex Complex::operator /(Complex c)
	{
		Complex temp, temp2, temp3;

		temp.real = real * c.real;
		temp.imag = imag * c.imag;
		temp3.real = (temp.real + temp.imag) / (((c.real) * (c.real)) + ((c.imag) * (c.imag)));

		temp2.real = real * c.imag;
		temp2.imag = imag * c.real;
		temp3.imag = (temp2.imag - temp2.real) / (((c.real) * (c.real)) + ((c.imag) * (c.imag)));

		return temp3;
	}

	//part e
	void Complex::operator +=(Complex c)
	{
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		real = temp.real;
		imag = temp.imag;
	}
	
	void Complex::operator -=(Complex c)
	{
		Complex temp;
		temp.real = real - c.real;
		temp.imag = imag - c.imag;
		real = temp.real;
		imag = temp.imag;
	}
	
	void Complex::operator *=(Complex c)
	{
		Complex temp, temp2, temp3;

		temp.real = real * c.real;
		temp.imag = imag * c.imag;
		temp3.real = temp.real - temp.imag;

		temp2.real = real * c.imag;
		temp2.imag = imag * c.real;
		temp3.imag = temp2.real + temp2.imag;

		real = temp3.real;
		imag = temp3.imag;
	}
	
	void Complex::operator /=(Complex c)
	{
		Complex temp, temp2, temp3;

		temp.real = real * c.real;
		temp.imag = imag * c.imag;
		temp3.real = (temp.real + temp.imag) / (((c.real) * (c.real)) + ((c.imag) * (c.imag)));

		temp2.real = real * c.imag;
		temp2.imag = imag * c.real;
		temp3.imag = (temp2.imag - temp2.real) / (((c.real) * (c.real)) + ((c.imag) * (c.imag)));

		real = temp3.real;
		imag = temp3.imag;
	}

	//part f
	void Complex::operator =(Complex c)
	{
		real = c.real;
		imag = c.imag;

	}
	
	//part g
	ostream& operator <<(ostream& out , const Complex& c)
	{		
		out << c.real;
		out << " + " << c.imag << "i" << endl;
		return out;
	}

	istream& operator >>(istream& in, Complex& c)
	{
		cout << "Please enter Real Part: ";
		in >> c.real;
		cout << "Part g (>>): Please enter Imaginary Part: ";
		in >> c.imag;
		return in;
	}
	
	//part h
	bool Complex::operator ==(Complex c)
	{
		if (real == c.real && imag == c.imag)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool Complex::operator !=(Complex c)
	{
		if (real != c.real && imag != c.imag)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	//part i
	bool Complex::operator >(Complex c)
	{
		if (real > c.real && imag > c.imag)
		{
			return true;
		}
		else
		{
			return false;
		}
	
	}
	
	bool Complex::operator <(Complex c)
	{
		if (real < c.real && imag < c.imag)
		{
			return true;
		}
		else
		{
			return false;
		}
		 
	}


