// Matura2022MajConsoleApplication.cpp 


#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream file("przyklad.txt");
	/*

    int numbers[200];

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
	}

	std::cout << "Odczytanie liczby \n";
	for (int i = 0; i < 200; i++)
	{
		std::cout << numbers[i] << ", ";

	}
	std::cout << "\n";
	*/

	std::vector<int> numbers;

	int num;
	while (file >> num)
		numbers.push_back(num);
	/*
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << ", ";
	}
	*/

	std::cout << "Odczytane liczby: \n";
	for (int num : numbers) 
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";
}

