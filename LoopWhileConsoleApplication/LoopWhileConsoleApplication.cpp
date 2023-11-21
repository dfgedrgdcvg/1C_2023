// LoopWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	long long num, rest;
	long long numberOfUsers = 0;
	std::cout << "podaj liczbe: ";
	std::cin >> num;

	do
	{
		numberOfUsers++;
		rest = num % 10;
		num = num / 10;
	} while (num != 0);
	std::cout << "liczba liczb = " << numberOfUsers << "\n";
}

//napisz rpgram, ktory policzy NWD dwoch liczb
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "podaj 1 liczbe";
	std::cin >> firstNumber;
	std::cout << "podaj 2 liczbe";
	std::cin >> secondNumber;

	int nwd;
	nwd = firstNumber;

	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
		nwd--;
	std::cout << "NWD = " << nwd;
}

int main()
{
	task2();
}

