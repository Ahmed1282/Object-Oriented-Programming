#include<iostream>
#include<fstream>
#include"Sign.h"
using namespace std;

		Sign::Sign()
		{
			
		}
		
		Sign::Sign(string t, string n,string e ,string p,string a)
		{
				 type = t;
				name = n;
				email =e;
				phone = p;
				address =a;
		}
		
		string Sign::gettype()
		{
			return type;
		}
		void Sign::settype(string t)
		{
			 type = t;
		}
		
		string Sign::getname()
		{
			return name;
		}
		void Sign::setname(string n)
		{
			name = n;
		}
		
		string Sign::getemail()
		{
			return email;
		}
		void Sign::setemail(string e)
		{
			email = e;
		}
		
		string Sign::getphone()
		{
			return phone;
		}
		void Sign::setphone(string p)
		{
			phone =p;
		}
		
		string Sign::getaddress()
		{
			return address;
		}
		void Sign::setaddress(string a)
		{
			address =a;
		}
	
		
		void Sign::display()
		{
			cout<<"type(employee or customer): "<<type<<endl;
		cout<<"name : "<<name<<endl;
			cout<<"email: "<<email<<endl;
			cout<<"phone: "<<phone<<endl;
			cout<<"address: "<<address<<endl;

		}
