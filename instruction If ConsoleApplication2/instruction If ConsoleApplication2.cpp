#include <iostream>

/*
operatory warunkowe:
> - wi�ksze
< - mniejszo��
>= - wi�ksze lub r�wne
<= - mniejsze lub r�wne 
= = - rowne
!= - r�ne
*/

//napisz program ktory wyswietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbe : \n";
	std::cin >> number;

	if (number > 0)
		std::cout << "liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "liczba jest ujemna";

	if (number == 0)
		std::cout << "liczba jest rowna zero";

	std::cout << "kolejna instrukcja\n";
}
int main()
{
	task1();
}


