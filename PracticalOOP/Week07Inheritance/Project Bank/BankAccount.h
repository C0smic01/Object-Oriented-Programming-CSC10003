#pragma once
#include <iostream>
#include <vector>
#include <format>

class BankAccount
{
protected:
	std::string _name;
	int _balance;
public:
	std::string name() const;
	BankAccount();
	BankAccount(std::string name, int balance);
	int withdraw(int amount);
};