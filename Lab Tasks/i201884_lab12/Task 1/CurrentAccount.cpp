#include<iostream>
#include<string>
#include"BankAccount.h"
#include"CurrentAccount.h"
using namespace std;

		CurrentAccount::CurrentAccount()
		{
			withdrawAmount = 0;
			depositAmount = 0;
		}

		void CurrentAccount::amountWithdrawn(int amount)
		{
			if (balanceInquiry() < 5000)
			{
				cout << "Balance which is less than 5000 can not withdrawn"<<endl;
			}
			else
			{
				setBalance(balanceInquiry() - amount);
			}
		}

		void CurrentAccount::amountDeposit(int amount) 
		{
			setBalance(balanceInquiry() + amount);
		}
