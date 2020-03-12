#include "Menu.h"
#include "HelperMcHelperton.h"
#include "Bank.h"

#include <iostream>
#include <string>

using namespace std;

void Menu::DisplayLoginMenu()
{
	string inputString;
	int accountNumber[5];
	int pinNumber[5];
	cout << "ATM LOGIN" << endl;
	cout << "Enter Account Number: ";

	cin >> inputString;

	// does length of input equal 5
	if (inputString.length() != 5)
	{
		cout << "You stupid fuck, only enter 5 numbers" << endl;
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		// is each input a number
		int number = inputString.c_str()[i] - '0';
		if (number < 0 || number > 9)
		{
			cout << "You entered something incorrectly you ignorant slut" << endl;
			return;
		}

		accountNumber[i] = number;
	}

	inputString.clear();

	cout << "Enter PIN Number: ";

	cin >> inputString;

	// does length of input equal 5
	if (inputString.length() != 5)
	{
		cout << "You stupid fuck, only enter 5 numbers" << endl;
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		// is each input a number
		int number = inputString.c_str()[i] - '0';
		if (number < 0 || number > 9)
		{
			cout << "You entered something incorrectly you ignorant slut" << endl;
			return;
		}

		pinNumber[i] = number;
	}

	// check to see if account number exists in user "database"
	// a query to the bank by the ATM

	if (mBank->IsUserValid(accountNumber, pinNumber))
	{
		cout << "good job you fucking did it" << endl;
	}
	else
	{
		cout << "you failed you fuck boi" << endl;
	}


	cout << "\n" << "This is what you entered: " << inputString << endl;
}

void Menu::DisplayAdminMenu()
{

}

void Menu::DisplayNormalMenu()
{

}