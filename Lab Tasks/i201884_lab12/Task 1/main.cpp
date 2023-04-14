#include<iostream>
#include<string>
#include"BankAccount.cpp"
#include"CurrentAccount.cpp"
#include"SavingsAccount.cpp"
using namespace std;

int main()
{
	int a,b,x,y;
	cout<<"Current Account"<<endl;
	CurrentAccount c("1", 100000);
	cout<<"Please enter the amount you want to withdraw: ";
	cin>>a;
	c.amountWithdrawn(a);
	cout<<"New Balance: "<<c.balanceInquiry()<<endl<<endl;
	cout<<"Please enter the amount you want to deposit: ";
	cin>>b;
	c.amountDeposit(b);
	cout<<endl;
	cout<<"New Balance is : " << c.balanceInquiry() <<endl<<endl;
	cout << "Savings Account : " << endl;
	SavingsAccount s("2", 100000);
	cout<<"Please enter the amount you want to withdraw :  ";
	cin >> x;
	s.amountWithdrawn(x);
	cout<<endl;
	cout << "New Balance: " << s.balanceInquiry()<<endl<<endl;
	cout << "Enter the amount you want to deposit : ";
	cin >> y;
	cout<<endl;
	s.amountDeposit(y);
	cout<<"New Balance is : "<<s.balanceInquiry()<<endl;
	return 0;

}

