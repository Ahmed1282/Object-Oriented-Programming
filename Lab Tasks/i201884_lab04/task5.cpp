#include<iostream>
using namespace std;

struct complex
{
	float real;
	float imag;

	struct complex add(struct complex a, struct complex b)
	{
   		struct complex addition;
   		addition.real = a.real +b.real;
   		addition.imag= a.imag+b.imag;
   		return addition;
	}

 	struct complex sub(struct complex a, struct complex b)
	{
		struct  complex subtraction;
   		subtraction.real=a.real -b.real;
   		subtraction.imag = a.imag - b.imag;
   		return subtraction;
	}

 	struct complex multiply(struct complex a, struct complex b)
	{
 		struct  complex multiplication;
  		multiplication.real = (a.real* b.real);
		multiplication.imag = (a.imag*b.imag);
		return multiplication;
	}
};

int main()
{
	struct complex d1 = {12,2};
	struct complex d2 = {14,11};
	struct complex temp;
	struct complex temp1;
	struct complex temp2;
	struct complex a = temp.add(d1,d2);
	struct complex s = temp1.sub(d1,d2);
	struct complex m = temp2.multiply(d1,d2);
	cout<<"Addition = "<<a.real<<","<<a.imag<<endl;
	cout<<"Subtraction = "<<s.real<<","<<s.imag<<endl;
	cout<<"Multiplication = "<<m.real<<","<<m.imag<<endl;
	return 0;
}
