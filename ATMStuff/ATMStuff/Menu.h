#pragma once
#include <string>
using namespace std;

class Bank;

class Menu
{
public:
	Bank* mBank;


	void DisplayLoginMenu();
	void DisplayAdminMenu();
	void DisplayNormalMenu();
};