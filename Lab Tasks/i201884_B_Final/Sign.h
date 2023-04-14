#include<iostream>
using namespace std;

#ifndef sign_H
#define sign_H

class Sign
{
	protected:
		string type, name,email,phone,address;
	
	public:
		Sign();
		Sign(string t, string n,string e ,string p,string a);
		
		string gettype();
		void settype(string t);
		
		string getname();
		void setname(string n);
		
		string getemail();
		void setemail(string e);
		
		string getphone();
		void setphone(string p);
		
		string getaddress();
		void setaddress(string a);
	
		
		void display();
		
		
};

#endif
