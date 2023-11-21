// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//napisz program ktory ma pobrac od uzytkownika liczbe dodatnia. zabezpiecz program przezd podaniem liczby ujemnej
void task1()
{
	int numberFromUser, randomNumber;

	do
	{
		std::cout << "podaj liczbe dodatnia:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "liczba dodatnia pobrana przez u¿ytkownika " << numberFromUser << "\n";
}

//napisz program ktory wylosuje liczbe a nastepnie uzytkownik bedzie musial ja zgadnac
void task2()
{
	int numberFromUser;
	const int LOWER_RANGE = 7;
	const int UPPER_RANGE = 15;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";
	do
	{
		std::cout << "podaj liczbe:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser != randomNumber);

	std::cout << "GRATULACJE!!!!!!!!!!!";
}

//napisz program wyswietlajacy liczby calkowite z przdzialu <1, x>. Gdzie x podaje uzytkownik.
void task3()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n ";
	unsigned long long upperRange;
	std::cout << "podaj zakres wiekszy badz rowny 1\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if (upperRange >1)
	{
	std::cout << "2, ";
	if(upperRange >2 )
	{
	std::cout << "3, ";
	if (upperRange >3)
	{
	std::cout << "4, ";
	//......
	}
	}
	}

	*/

	unsigned long long currentnumber = 0;

	std::cout << "podaj liczbe > 1: ";
	std::cin >> upperRange;
	do
	{
		currentnumber++;
		//currentnumber = currentnumber + 1;
		//currentnumber += 1;
		//++currentnumber;
		std::cout << currentnumber << ", ";
	} while (upperRange > currentnumber);
}

//prog ktory policzy sume cyfr podanej przez uzytkownika
void task4()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	rest = number % 10;
	sum = sum + rest;
	number = number / 10;  //2


	//125
}

//* Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero. 
//Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
void task5()
{
	int number;
	int sum = 0;
	int numberOfNumbers = 0;

	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> number;
	sum = sum + number;
	numberOfNumbers++;
	if (number != 0)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
		if (number != 0)
		{
			std::cout << "Podaj liczbê:\n";
			std::cin >> number;
			sum = sum + number;
			numberOfNumbers++;
			//if ...
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		//if (number != 0)
		numberOfNumbers++;
	} while (number != 0);

	//numberOfNumbers--;
	std::cout << "Suma liczb wynosi " << sum << "\n";
	double avg = sum * 1.0 / numberOfNumbers;
	std::cout << "Œrednia " << avg << "\n";
}



//Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej. 
//Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task6()
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


int main()
{
	task6();
}
