#include "BankAccountV2.h"

BankAccountV2::BankAccountV2() : BankAccount() {}

BankAccountV2::BankAccountV2(std::string name, int balance) : BankAccount(name, balance) {}

int BankAccountV2::withdraw(int amount)
{
	if (this->_balance - amount < 50000)
	{
		return 0;
	}
	BankAccount::withdraw(amount);
	return amount;
}