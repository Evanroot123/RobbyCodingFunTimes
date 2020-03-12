#pragma once

class SavingsAccount;
class CheckingAccount;

class User 
{
public:
	int mPinNumber[5];
	int mAccountNumber[5];
	bool mIsAdmin;
	SavingsAccount* savingsAccount;
	CheckingAccount* checkingAccount;

	User();
	User(int balance, int* pinNumber, int* accountNumber, bool isAdmin);
	~User();
};