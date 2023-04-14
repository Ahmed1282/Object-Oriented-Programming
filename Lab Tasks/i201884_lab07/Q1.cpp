#include<iostream>
#include"Q1.h"
using namespace std;

		momentum::momentum()
		{
			mass = 0;
			velocity = new double[3];
   			momentum_ = new double[3];
   			for(int i =0;i<3;i++)
			{
       			*(velocity + i) = 0;
       			*(momentum_ + i) = 0;
			}
		}
		momentum::momentum(momentum &obj)
		{
   			mass=obj.mass;
   			for(int i =0; i<3;i++)
			{
       			*(velocity + i)= *(obj.velocity + i);
       			*(momentum_ + i)= *(obj.momentum_ + i);
   			}
    	}
		void momentum::setVelocity(double a, double b, double c)
		{
        	*(velocity + 0)=a;
       	 	*(velocity + 1)=b;
        	*(velocity + 2)=c;
    	}
		void momentum::momentumCalculate (double a, double b, double c)
		{
 			for(int i =0;i <3; i++)
			{
       			*(momentum_ + i)= *(velocity + i) * a;
   			}
   			for(int i =0;i <3; i++)
			{
       			*(momentum_ + i)= *(velocity + i) * b;
   			}
   			for(int i =0;i <3; i++)
			{
       			*(momentum_ + i)= *(velocity + i) * c;
   			}
		}
		void momentum::copyMomentumShallow ()
		{
   			double * ptr;
   			ptr = momentum_;
   			cout<<"value of momentum_[0] before = "<<momentum_[0]<<endl;
   			cout<<"value of ptr[0] before = "<<ptr[0]<<endl;
   			ptr[0]=8;
   			cout<<"value of ptr[0] after changing ptr = "<<ptr[0]<<endl;
   			cout<<"value of momentum_[0] after changing ptr = "<<momentum_[0]<<endl;
   			cout<<endl;
		}
		void momentum::copyMomentumDeep()
		{
  	 		double *deep = new double[3];
   			deep[0] = momentum_[0];
   			deep[1] = momentum_[1];
   			deep[2] = momentum_[2];
   			cout<<"value of mom[0] before : "<<momentum_[0]<<endl;
   			cout<<"value of deep[0] before : "<<deep[0]<<endl;
   			deep[0] = 4;
   			cout<<"\nvalue of deep[0] after changing deep[0] : "<<deep[0]<<endl;
   			cout<<"value of mom[0] after changing deep[0] : "<<momentum_[0]<<endl;
   			momentum_[0] = 3;
   			cout<<"\nvalue of deep[0] after changing mom[0] : "<<deep[0]<<endl;
   			cout<<"value of mom[0] after changing mom[0] : "<<momentum_[0]<<endl;
   		}

		void momentum::display()
		{
   			cout<<"\n"<<momentum_[0]<<endl;
   			cout<<"\n"<<momentum_[1]<<endl;
   			cout<<"\n"<<momentum_[2]<<endl;
		}

	
