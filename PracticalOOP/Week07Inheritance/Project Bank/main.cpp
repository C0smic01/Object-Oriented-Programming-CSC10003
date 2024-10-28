#include "BankAccount.h"
#include "BankAccountV2.h"

auto getAllAccounts() 
{
	return std::vector<BankAccount> {
		BankAccount("Alice", 60000),
		BankAccount("Bob", 100000),
		BankAccount("Charlie", 100000),
		BankAccount("David", 200000),
		BankAccount("Eve", 300000),
	};
}

auto getAllAccountsV2()
{
	return std::vector<BankAccountV2> {
		BankAccountV2("Alice", 60000),
		BankAccountV2("Bob", 100000),
		BankAccountV2("Charlie", 100000),
		BankAccountV2("David", 200000),
		BankAccountV2("Eve", 300000),
		BankAccountV2("C0smic", 120000)
	};
}

int main() {
	auto accounts = getAllAccountsV2();

	for (auto& account : accounts) {
		std::cout << std::format("{} can withdraw {} \n",
			account.name(),
			account.withdraw(70000));
	}
}