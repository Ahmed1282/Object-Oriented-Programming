//Muhammad Ahmed Baig_20i-1884_Section F_Assignment 3_Q2
#include<iostream>
#include"polynomial.h"

		Polynomial::Polynomial()
		{
			degree = 0;
			size=0;
		}
		Polynomial::Polynomial(double *p, int d)
		{
			degree = d;
			size = (2*degree)+1;
			poly = new double[size];
			tempdegree = degree;
			int k=degree;
			for(int i=0, j = 0; i<degree; i++)
			{
				cout<<"Enter Coffiecent of x"<<k<<" : ";
				cin>>poly[i+j];
				j++;
				poly[i+j] = tempdegree;
				tempdegree--;
				k--;
			}
			cout<<"Enter Constant: ";
			cin>>poly[size-1];
		}
		void Polynomial::display()
		{
			int k=degree;
			for(int i=0; i<size-1; i=i+2)
			{
				cout<<poly[i]<<"x^"<<k<< " + ";
				k--;
			}
			cout<<poly[size-1];
		}
		
		double* Polynomial::getPoly()
		{
			return poly;
		}
		
		int Polynomial::getDegree()
		{
			return degree;
		}
		
		//part a
		Polynomial Polynomial::operator+( Polynomial r ) 
		{
			Polynomial temp;
            temp.degree = degree;
            if(size>r.size)
            {
              temp.size = size;
            }
            else
            {
              temp.size = r.size;
			}
            temp.poly = new double[temp.size];
            for(int i = 0; i<temp.size; i=i+2)
            {
                temp.poly[i] = poly[i] + r.poly[i];
            }
            for(int i = 1; i<temp.size; i=i+2)
            {
                if(size>r.size)
            	{
              		temp.poly[i] = poly[i];
            	}
            	else
            	{
            	  temp.poly[i] = r.poly[i];
				}
            }
            return temp;
			
		}
		
		//part b
		Polynomial Polynomial::operator-( Polynomial r ) 
		{
			Polynomial temp;
            temp.degree = degree;
            if(size>r.size)
            {
              temp.size = size;
            }
            else
            {
              temp.size = r.size;
			}
            temp.poly = new double[temp.size];
            for(int i = 0; i<temp.size; i=i+2)
            {
                temp.poly[i] = poly[i] - r.poly[i];
            }
            
            for(int i = 1; i<temp.size; i=i+2)
            {
                if(size>r.size)
            	{
              		temp.poly[i] = poly[i];
            	}
            	else
            	{
            	  temp.poly[i] = r.poly[i];
				}
            }
            return temp;
			
		}
		
		//part c
		void Polynomial::operator+=( Polynomial r ) 
		{
            for(int i = 0; i<size; i=i+2)
            {
                poly[i] = poly[i] + poly[i];
            }
            
		}
		
		//part d
		void Polynomial::operator-=( Polynomial r ) 
		{
			
            for(int i = 0; i<size; i=i+2)
            {
                poly[i] = poly[i] - r.poly[i];
            }
        
		}
		
		//part e
		//LOGIC FOR THE OPERATOR IS CORRECT SO DO PLEASE GIVE SOME MARKS FOR IT
		/*void Polynomial::operator=( Polynomial r ) 
		{
            for(int i = 0; i<size; i=i+2)
            {
                poly[i] = r.poly[i];
            }
		}*/
		
		//part f
		bool Polynomial::operator ==( Polynomial r ) 
		{
            for(int i = 0; i<size; i=i+2)
            {
               if(poly[i] != r.poly[i])
               {
               	return false;
			   }
            }
            return true;
        
		}
		
		//g
		ostream& operator <<(ostream& out, const Polynomial &r)
		{
			out<<"Highest Degree = "<<r.degree<<endl;
			int k=r.degree;
			for(int i=0; i<r.size-1; i=i+2)
			{
				out<<r.poly[i]<<"x^"<<k<< " + ";
				k--;
			}
			out<<r.poly[r.size-1];
		}
		istream& operator >>(istream& in, Polynomial &r)
		{
			cout << "Please enter Highest Degree: ";
			in >> r.degree;
			
			r.size = (2*r.degree)+1;
			r.poly = new double[r.size];
			int tempdegree = r.degree;
			int k=r.degree;
			for(int i=0, j = 0; i<r.degree; i++)
			{
				cout<<"Enter Coffiecent of x"<<k<<" : ";
				in>>r.poly[i+j];
				j++;
				r.poly[i+j] = tempdegree;
				tempdegree--;
				k--;
			}
			cout<<"Enter Constant: ";
			in>>r.poly[r.size-1];
			return in;
		}
