#include <iostream>
#include <string>

/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.
Instrukcje:
@@ -22,15 +23,192 @@ Prosty Kalkulator
2. Odejmowanie
3. Mno�enie
4. Dzielenie
0. Koniec programu
Wybierz operacj� (1/2/3/4): 3
Wybierz operacj�: 3
Podaj pierwsz� liczb�: 5
Podaj drug� liczb�: 3
Wynik mno�enia: 15
*/

/*
ZADANIE
Konwersja temperatury

Napisz program, kt�ry b�dzie konwertowa� temperatur� pomi�dzy skalami: Celsiusza, Fahrenheita i Kelvina.
Instrukcje:

Popro� u�ytkownika o wyb�r jednostki, z kt�rej chce dokona� konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Popro� u�ytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperatur� na pozosta�e jednostki (z wykorzystaniem odpowiednich wzor�w konwersji).
Wy�wietl przeliczone temperatury.
Przyk�adowe dzia�anie programu:

Konwerter Temperatur
---------------------
Wybierz jednostk� temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wyb�r: C

Podaj temperatur� w stopniach Celsiusza: 25

Przeliczona temperatura:
Fahrenheit: 77.0 �F
Kelvin: 298.15 K
*/

/*
ZADANIE
Symulator rzutu kostk�
Napisz program, kt�ry b�dzie symulowa� rzut kostk�. Program powinien umo�liwia� u�ytkownikowi wyb�r rodzaju kostki (np. 6-�cienna, 10-�cienna, 20-�cienna) oraz ilo�� rzut�w. Po wykonaniu rzut�w, program powinien wy�wietli� wyniki oraz sum� otrzymanych warto�ci.
Instrukcje:
Popro� u�ytkownika o wyb�r rodzaju kostki (np. 6-�cienna, 10-�cienna, 20-�cienna).
Popro� u�ytkownika o podanie ilo�ci rzut�w.
Wykonaj podan� liczb� rzut�w wybranej kostk�, zapisuj�c wyniki.
Wy�wietl otrzymane wyniki oraz sum� otrzymanych warto�ci.
Przyk�adowe dzia�anie programu:
Symulator rzutu kostk�
-----------------------
Wybierz rodzaj kostki (6/10/20): 10
Ile rzut�w chcesz wykona�?: 5
Wyniki rzut�w kostk� 10-�cienn�:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8
Suma wynik�w: 33
*/

/*
ZADANIE
Konwerter jednostek
Napisz program konwertuj�cy jednostki miar. Program powinien umo�liwia� konwersj� mi�dzy r�nymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obs�ugiwa� r�ne typy jednostek.
Instrukcje:
Zdefiniuj zestaw jednostek, kt�re chcesz obs�ugiwa� (np. d�ugo��: metry, centymetry, cale; masa: kilogramy, funty).
Popro� u�ytkownika o wyb�r jednostki wej�ciowej i jednostki wyj�ciowej oraz podanie warto�ci do konwersji.
Przekonwertuj warto�� z jednostki wej�ciowej na jednostk� wyj�ciow� na podstawie ustalonego wsp�czynnika konwersji.
Wy�wietl wynik konwersji.
Przyk�adowe dzia�anie programu:
Konwerter jednostek
-------------------
Wybierz jednostk� wej�ciow�:
1. Metry
2. Centymetry
3. Cale
Wyb�r: 1
Wybierz jednostk� wyj�ciow�:
1. Metry
2. Centymetry
3. Cale
Wyb�r: 2
Podaj warto�� do konwersji: 5
Wynik konwersji: 500 centymetr�w
*/

void showMenu()
{
	system("cls");
	std::cout << "Prosty Kalkulator\n";
	std::cout << "-----------------\n";
	std::cout << "1. Dodawanie\n";
	std::cout << "2. Odejmowanie\n";
	std::cout << "3. Mno�enie\n";
	std::cout << "4. Dzielenie\n";
	std::cout << "0. Koniec programu\n";
}

int convertStringToInt(std::string value)
{
	int result = 0;

	for (int i = 0; i < value.length(); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			result = result * 10 + (value[i] - '0');
		else
			return -1;
	}

	return result;
}

int getNumber(std::string message)
{
	std::string strChoise;

	std::cout << message;

	std::getline(std::cin, strChoise);

	return convertStringToInt(strChoise);
}

void calculate(int choice, int firstNumber, int secondNumber)
{
	switch (choice)
	{
	case 1:
		std::cout << "Wynik operacji: " << firstNumber + secondNumber << "\n";
		break;
	case 2:
		std::cout << "Wynik operacji: " << firstNumber - secondNumber << "\n";
		break;
	case 3:
		std::cout << "Wynik operacji: " << firstNumber * secondNumber << "\n";
		break;
	case 4:
		if (secondNumber != 0)
			std::cout << "Wynik operacji: " << firstNumber / secondNumber << "\n";
		else
			std::cout << "Nie mo�na dzieli� przez zero\n";
		break;
	default:
		break;
	}
}

void task1()
{
	while (true)
	{
		showMenu();

		int choice = getNumber("Wybierz operacj�:\n");

		if (choice == 0)
			break;

		int firstNumber = getNumber("Podaj pierwsz� liczb�:\n");
		int secondNumber = getNumber("Podaj drug� liczb�:\n");

		calculate(choice, firstNumber, secondNumber);
		system("pause");
	}
}

//Zad.2

void showMenuTemperature()
{
	system("cls");
	std::cout << "Konwerter temperatur\n";
	std::cout << "--------------------\n";
	std::cout << "1. Celsiusz (C)\n";
	std::cout << "2. Fahrenheit (F)\n";
	std::cout << "3. Kelvin (K)\n";
	std::cout << "0. koniec programu\n";
}

float conversation(float value, int whatUnit)
{
	float valueInCelsiusz;
	float valueInFahrenheit;
	float valueInKelvin;
	if (whatUnit == 1)
	{
		valueInFahrenheit;
	}
}



void task2()
{
	showMenuTemperature();

	int whatUnit;
	std::cout << "Wyb�r: ";
	std::cin >> whatUnit;

	float valueBeforeConversation;
	 

}

int main()
{

	task1();
}
    




int main()
{
    std::cout << "Hello World!\n";
}

