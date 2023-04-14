#include<iostream>
#include<string>
using namespace std;

#ifndef CurrentAccount_h
#define CurrentAccount_h

class CurrentAccount : public BankAccount
{
	private:
	
		int withdrawAmount;
		int depositAmount;

	public:
		
		CurrentAccount();
		CurrentAccount(string accountID = "", int bal = 0) :BankAccount(accountID, bal)
		{
		};
		void amountWithdrawn(int amount);
		void amountDeposit(int amount);
};

#endif
