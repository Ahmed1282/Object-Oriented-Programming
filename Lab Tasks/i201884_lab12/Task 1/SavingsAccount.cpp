#include<iostream>
#include<string>
#include"BankAccount.h"
#include"SavingsAccount.h"
using namespace std;


		void SavingsAccount::amountWithdrawn(int amount) 
		{ 
			if (balanceInquiry() < 10000)
			{
				cout << "Balance that is less than 10000 can not be withdrawn"<<endl;
			}
			else
			{
				setBalance(balanceInquiry() - amount);
			}
		}

		void SavingsAccount::amountDeposit(int amount)
		{
			setBalance(balanceInquiry() + amount);
		}
