#pragma once
#include "CheckingAccount.h"

class SavingsAccount : public CheckingAccount
{
	void CalculateInterest(int timePeriod);
};