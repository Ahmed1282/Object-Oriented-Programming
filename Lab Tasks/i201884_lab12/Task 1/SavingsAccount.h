#include<iostream>
#include<string>
using namespace std;

#ifndef SavingsAccount_h
#define SavingsAccount_h

class SavingsAccount : public BankAccount
{
	public:

		SavingsAccount(string accountID = "", int bal = 0) : BankAccount(accountID, bal) 
		{
			
		};
		void amountWithdrawn(int amount);
		void amountDeposit(int amount);
};

#endif
