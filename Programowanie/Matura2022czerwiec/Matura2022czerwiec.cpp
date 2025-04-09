#include <iostream>
#include <fstream>
#include <vector>


void zadanie4_1()
{
	std::ifstream file("przyklad.txt");
	std::vector<int> numbers;
	int number;

	std::cout << "Zadanie 4.1 \n";
	while (file >> number) {
		int reserved = 0;
		int temp = number;
		while (temp > 0) {
			int digit = temp % 10;
			reserved = reserved * 10 + digit;
			temp /= 10;
		}
		if (reserved % 17 == 0) {
			std::cout << reserved << ", " << "\n";
		}
	}
}

void zadanie4_2() {
	std::ifstream file("przyklad.txt");
	std::vector<int> numbers;

	int number;
	int maxDifference = 0;
	int numberWithMaxDifference = 0;
	std::cout << "Zadanie 4.2 \n";

	while (file >> number) {
		int reversed = 0;
		int temp = number;

		while (temp > 0) {
			int digit = temp % 10;
			reversed = reversed * 10 + digit;
			temp /= 10;
		}
		int difference = number - reversed;
		if (difference < 0) {
			difference = -difference;
		}
		if (difference > maxDifference) {
			maxDifference = difference;
			numberWithMaxDifference = number;
		}
	}
	std::cout << numberWithMaxDifference << ", " << maxDifference << "\n";
}
int main()
{
	zadanie4_1();
	zadanie4_2();
}
