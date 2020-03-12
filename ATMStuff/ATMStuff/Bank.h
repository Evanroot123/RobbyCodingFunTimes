#pragma once

#include <string>
#include <vector>

using namespace std;

class User;

class Bank 
{
public:
	vector<User*> mUsers;

	Bank();
	Bank(int numUsers);
	bool IsUserValid(int* accountNumber, int* pinNumber);
};