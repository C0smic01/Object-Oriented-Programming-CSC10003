#pragma once
#include "BankAccount.h"

class BankAccountV2 : public BankAccount 
{
	public:
	BankAccountV2();
	BankAccountV2(std::string name, int balance);
	int withdraw(int amount);
};