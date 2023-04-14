//Muhammad Ahmed Baig_20i-1884_Section B(LAB)
#include<iostream>
#include<fstream>
#include"item.cpp"
#include"inventory.cpp"
#include"Sign.cpp"
using namespace std;

int main()
{
	
	cout<<"\n	W	E	L	C	O	M	E	\n"<<endl;
	cout<<"			Shopping 	Portal\n";
	cout<<endl;
	int c;
	cout<<"Please enter what option you want to select: \n";
	cout<<"1. Inventory.\n";
	cout<<"2. Customer.\n";
	cout<<"3. Administration.\n";
	cin>>c;
	if(c == 1)
	{
		int sku, price, stock_quantity;
		double purchase_price;
		string category, department;
		
		cout<<" ITEMS INPUT "<<endl;
			cout<<"SKU : ";
			cin>>sku;
			cout<<"Price: ";
			cin>>price; 
			cout<<"stock quantity: ";
			cin>>stock_quantity;
			cout<<"Purchase Price: ";
			cin>>purchase_price;
			cout<<"Category: ";
			cin>>category; 
			cout<<"Department: ";
			cin>>department;
			item T(sku, price, stock_quantity,  purchase_price,  category, department);
			inventory in(T);
			cout<<endl;
			
			//STORING IN FILE
			ofstream out("item.txt");
			{
				out<<"SKU : "<<sku<<endl;
			out<<"Price: "<<price<<endl; 
			out<<"stock quantity: "<<stock_quantity<<endl;
			out<<"Purchase Price: "<<purchase_price<<endl;
			 out<<"Category: "<<category<<endl; 
			out<<"Department: "<<department<<endl;
			}
			T.display();
	}
	
	else if(c  == 2)
	{
		string type, name,email,phone,address;
		cout<<"type(employee or customer): ";
		cin>>type;
		cout<<"name : ";
			cin>>name;
			cout<<"email: ";
			cin>>email; 
			cout<<"phone: ";
			cin>>phone;
			cout<<"address: ";
			cin>>address;
			Sign S(type, name,email,phone,address);
			cout<<endl;
			ofstream out("sign.txt");
			{
				out<<"type(employee or customer): "<<type<<endl;
				out<<"name : "<<name<<endl;
				out<<"email: "<<email<<endl;
				out<<"phone: "<<phone<<endl;
				out<<"address: "<<address<<endl;

			}
			S.display();
			
	}
	return 0;
}

