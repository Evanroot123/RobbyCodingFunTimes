#include <iostream>

// standard includes
#include <string>
#include <stdlib.h>
#include <time.h>


#include "User.h"
#include "Bank.h"
#include "Menu.h"

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	// create bank object
	/*
		ATM:
			- contain menu
			-> bank
	*/

	Bank bank;
	Menu menu;
	menu.mBank = &bank;
	menu.DisplayLoginMenu();
	system("pause");
}