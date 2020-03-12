#include "Bank.h"
#include "User.h"
#include "CheckingAccount.h"
#include "HelperMcHelperton.h"

Bank::Bank(int numUsers)
{
	for (int i = 0; i < numUsers; i++)
	{
		int pinNumber[5];
		int accountNumber[5];
		bool isAdmin = rand() % 2;
		int balance = rand() % 1000000;
		
		for (int i = 0; i < (sizeof(pinNumber) / sizeof(pinNumber[0])); i++)
		{
			pinNumber[i] = rand() % 10;
		}

		for (int i = 0; i < (sizeof(accountNumber) / sizeof(accountNumber[0])); i++)
		{
			accountNumber[i] = rand() % 10;
		}

		mUsers.push_back(new User(balance, pinNumber, accountNumber, isAdmin));
	}
}

Bank::Bank()
{
	User admin;
	admin.mIsAdmin = true;
	for (int i = 0; i < (sizeof(admin.mAccountNumber) / sizeof(admin.mAccountNumber[0])); i++)
	{
		admin.mAccountNumber[i] = 0;
	}

	for (int i = 0; i < (sizeof(admin.mPinNumber) / sizeof(admin.mPinNumber[0])); i++)
	{
		admin.mPinNumber[i] = i + 1;
	}

	mUsers.push_back(new User(admin.checkingAccount->balance, admin.mPinNumber, admin.mAccountNumber, admin.mIsAdmin));

	admin.mIsAdmin = false;

	for (int i = 0; i < (sizeof(admin.mAccountNumber) / sizeof(admin.mAccountNumber[0])); i++)
	{
		admin.mAccountNumber[i] = 1;
	}

	for (int i = 0; i < (sizeof(admin.mPinNumber) / sizeof(admin.mPinNumber[0])); i++)
	{
		admin.mPinNumber[i] = i;
	}

	mUsers.push_back(new User(admin.checkingAccount->balance, admin.mPinNumber, admin.mAccountNumber, admin.mIsAdmin));
}

bool Bank::IsUserValid(int* accountNumber, int* pinNumber)
{
	for (int i = 0; i < mUsers.size(); i++)
	{
		if (compareArrays(mUsers[i]->mAccountNumber, accountNumber, 5))
		{
			return compareArrays(mUsers[i]->mPinNumber, pinNumber, 5);
		}
	}

	return false;
}