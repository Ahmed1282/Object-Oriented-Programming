#include<iostream>
#include<string>
using namespace std;

#ifndef BankAccount_h
#define BankAccount_h

class BankAccount
{
	private:
		
		string accountID;
		int bal;

	public:
		
		BankAccount();
		BankAccount(string aID, int b);
		void setBalance(int b);
		int balanceInquiry();
		void setAccountID(string aID);
		string getAccountID();
};

#endif
