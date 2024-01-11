﻿#include <iostream>

//napisz program ktory wczyta np. 5 liczb i wyswietli je w odwrotnej kolejnosci
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "podaj dana: ";
        std::cin >> numbers[i];
    }

    for (int i = ARRAY_SIZE; i < 0; i++)
    {
        std::cout << numbers[i] << " , ";
    }
    std::cout << "\n";
}

void task2()
{
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];

	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	srand(time(NULL));

	std::cout << "wylosowane liczby: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	int sum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		sum = sum + numbers[i];
	}
	double avg = sum * 1.0 / ARRAY_SIZE;
	std::cout << "Œrednia wynosi: " << avg << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


