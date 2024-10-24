#include <iostream>
#include "BankAccount.h"

void BankAccount::AccountInformation()
{
	std::cout << "Informacja o koncie bankowym\n";
	std::cout << "Wlasciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}