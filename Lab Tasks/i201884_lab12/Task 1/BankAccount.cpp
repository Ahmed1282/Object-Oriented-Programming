#include<iostream>
#include<string>
#include"BankAccount.h"
using namespace std;

		BankAccount::BankAccount()
		{
			accountID = "\0";
			bal = 0;
		}

		BankAccount::BankAccount(string aID, int b) 
		{
			accountID = aID;
			bal = b;
		}

		void BankAccount::setBalance(int b)
		{
			bal = b;
		}

		int BankAccount::balanceInquiry()
		{
			return bal;
		}

		void BankAccount::setAccountID(string aID)
		{
			accountID = aID;
		}

		string BankAccount::getAccountID()
		{
			return accountID;
		}
