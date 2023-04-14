#include<iostream>
using namespace std;

#ifndef item_H
#define item_H

class item
{
	protected:
		int sku, price, stock_quantity;
		double purchase_price;
		string category, department;
	
	public:
		item();
		item(int s, int p, int stock, double pp, string cat, string d);
		
		int getsku();
		void setsku(int s);
		
		int getprice();
		void setprice(int p);
		
		int getstock();
		void setstock(int stock);
		
		double getpprice();
		void setpprice(double p);
		
		string getcat();
		void setcat(string cat);
		
		string getdep();
		void setdep(string d);
		
		void display();
		
		
};

#endif
