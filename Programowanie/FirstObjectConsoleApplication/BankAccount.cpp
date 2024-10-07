#include <iostream>
#include "BankAccount.h"

void BankAccount::AccountInformation()
{
	std::cout << "Informacja o koncie bankowym\n";
	std::cout << "W?a?ciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}