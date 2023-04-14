#include<iostream>
#include<fstream>
#include"item.h"
using namespace std;

		item::item()
		{
			
		};
		
		item::item(int s, int p, int stock, double pp, string cat, string d)
		{
			sku = s;
			price =p;
			stock_quantity = stock;
			purchase_price = pp;
			 category = cat;
			 	department = d;
			
		}
		
		int item::getsku()
		{
			return sku;			
		}
		void item::setsku(int s)
		{
			sku = s;
		}

		
		int item::getprice()
		{
			return price;
		}
		void item::setprice(int p)
		{
			price =p;
		}
		
		int item::getstock()
		{
			return	stock_quantity;
		}
		void item::setstock(int stock)
		{
			 stock_quantity = stock;
		}
		
		double item::getpprice()
		{
			return	purchase_price;
		}
		void item::setpprice(double p)
		{
			purchase_price = p;
		}
		
		string item::getcat()
		{
			return	category;
		}
		void item::setcat(string cat)
		{
			 category = cat;
		}
		
		string item::getdep()
		{
			return	department;
		}
		void item::setdep(string d)
		{
			department = d;	
		}
		
		void item::display()
		{
			cout<<"SKU : "<<sku<<endl;
			cout<<"Price: "<<price<<endl; 
			cout<<"stock quantity: "<<stock_quantity<<endl;
			cout<<"Purchase Price: "<<purchase_price<<endl;
			 cout<<"Category: "<<category<<endl; 
			cout<<"Department: "<<department<<endl;
		}
