#include "User.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <algorithm>

User::User(int balance, int* pinNumber, int* accountNumber, bool isAdmin)
{
	savingsAccount = new SavingsAccount();
	checkingAccount = new CheckingAccount();
	savingsAccount->balance = balance;
	checkingAccount->balance = balance;

	mIsAdmin = isAdmin;
	memcpy(mPinNumber, pinNumber, sizeof(mPinNumber));
	memcpy(mAccountNumber, accountNumber, sizeof(mAccountNumber));
}

User::User()
{
	savingsAccount = new SavingsAccount();
	checkingAccount = new CheckingAccount();
	savingsAccount->balance = 1000;
	checkingAccount->balance = 1000;
	mIsAdmin = false;

	for (int i = 0; i < (sizeof(mPinNumber) / sizeof(mPinNumber[0])); i++)
	{
		mPinNumber[i] = i;
	}

	for (int i = 0; i < (sizeof(mAccountNumber) / sizeof(mAccountNumber[0])); i++)
	{
		mAccountNumber[i] = 0;
	}
}

User::~User()
{
	delete savingsAccount;
	delete checkingAccount;
}