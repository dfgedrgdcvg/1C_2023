#include <iostream>

void task1()
{
	long long num, rest;
	long long numberOfNumbers = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	do
	{
		numberOfNumbers++;
		rest = num % 10;
		num = num / 10;
	} while (num != 0);
	std::cout << "Liczba liczb = " << numberOfNumbers << "\n";
}

//Napisz program ktory policzy NWD dwoch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj 1 liczbe: ";
	std::cin >> firstNumber;
	std::cout << "Podaj 2 liczbe: ";
	std::cin >> secondNumber;

	int nwd;
	nwd = firstNumber;

	/*
	while (secondNumber % nwd != 0 || firstNumber % nwd != 0)
		nwd--;
		*/

	if (firstNumber < secondNumber)
	{
		nwd = firstNumber;
	}
	else
	{
		nwd = secondNumber;
	}


	nwd = (firstNumber , secondNumber) ? 5 : 7;

	std::cout << "NWD = " << nwd;
}

/*
//wersja 2 
nwd = 1;
int dividend = 2;
int tmpFirstNumber = firstNumber, tmpSecondNumber = secondNumber;
while (tmpFirstNumber >= dividend
	&& tmpSecondNumber >= dividend)
{
	if (tmpFirstNumber % dividend == 0
		&& tmpSecondNumber % dividend == 0)
	{
		tmpFirstNumber = tmpFirstNumber / dividend;
		tmpSecondNumber /= dividend;
		nwd *= dividend;
	}
	else
		dividend++;
}
std::cout << "NWD = " << nwd << "\n";

//wersja 3
//NWD(a, b) = a				je�li b = 0
//NWD(a, b) = NWD(b, a % b) je�li b != 0
int a = firstNumber, b = secondNumber;
while (b != 0)
{
	int tmpA = a;
	a = b;
	b = tmpA % b;
}
nwd = a;
std::cout << "NWD = " << nwd << "\n";
}
*/


//Sprawdzanie czy liczba jest palindromem.
void task3()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	//wersja 1

	//obliczam ilo�� cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//licz� 10 do pot�gi (numberOfDigit - 1)
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}

	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	bool isPalindrome = true;
	while (leftNumber > 10)
	{
		int leftDigit = leftNumber / leftDivided;
		int rightDigit = rightNumber % rightDivided;
		if (leftDigit != rightDigit)
		{
			isPalindrome = false;
			break;
		}

		leftNumber = leftNumber % leftDivided;
		rightNumber = rightNumber / rightDivided;

		leftDivided = leftDivided / 10;
	}

	if (isPalindrome /*== true*/)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";
}

//napisz program, ktory wyswietli "Hello World" tyle razy ile chce uzytkownik
void task4()
{
	int howManyTimes;
	std::cout << "ile razy wypisac Hello World: ";
	std::cin >> howManyTimes;

	int i = 0;
	while (i != howManyTimes)
	{
		std::cout << "Hello World\n";
		i++;
	}
}

//napisz program ktory wyswietli liczb parzyste do podanej przez uzytkownika liczby
void task5()
{
	int upperRange;
	std::cout << "podaj g�rna granice do wyswietlenia\n";
	std::cin >> upperRange;

	int i = 0;
	while (i <= upperRange)
	{
		std::cout << i << "\n";
		i += 2;
	}
		
}

int main()
{
	task4();
}
