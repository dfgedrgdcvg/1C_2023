#include <iostream>
#include <string>

/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.
Instrukcje:
@@ -22,15 +23,192 @@ Prosty Kalkulator
2. Odejmowanie
3. Mno¿enie
4. Dzielenie
0. Koniec programu
Wybierz operacjê (1/2/3/4): 3
Wybierz operacjê: 3
Podaj pierwsz¹ liczbê: 5
Podaj drug¹ liczbê: 3
Wynik mno¿enia: 15
*/

/*
ZADANIE
Konwersja temperatury

Napisz program, który bêdzie konwertowaæ temperaturê pomiêdzy skalami: Celsiusza, Fahrenheita i Kelvina.
Instrukcje:

Poproœ u¿ytkownika o wybór jednostki, z której chce dokonaæ konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Poproœ u¿ytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperaturê na pozosta³e jednostki (z wykorzystaniem odpowiednich wzorów konwersji).
Wyœwietl przeliczone temperatury.
Przyk³adowe dzia³anie programu:

Konwerter Temperatur
---------------------
Wybierz jednostkê temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wybór: C

Podaj temperaturê w stopniach Celsiusza: 25

Przeliczona temperatura:
Fahrenheit: 77.0 °F
Kelvin: 298.15 K
*/

/*
ZADANIE
Symulator rzutu kostk¹
Napisz program, który bêdzie symulowa³ rzut kostk¹. Program powinien umo¿liwiaæ u¿ytkownikowi wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna) oraz iloœæ rzutów. Po wykonaniu rzutów, program powinien wyœwietliæ wyniki oraz sumê otrzymanych wartoœci.
Instrukcje:
Poproœ u¿ytkownika o wybór rodzaju kostki (np. 6-œcienna, 10-œcienna, 20-œcienna).
Poproœ u¿ytkownika o podanie iloœci rzutów.
Wykonaj podan¹ liczbê rzutów wybranej kostk¹, zapisuj¹c wyniki.
Wyœwietl otrzymane wyniki oraz sumê otrzymanych wartoœci.
Przyk³adowe dzia³anie programu:
Symulator rzutu kostk¹
-----------------------
Wybierz rodzaj kostki (6/10/20): 10
Ile rzutów chcesz wykonaæ?: 5
Wyniki rzutów kostk¹ 10-œcienn¹:
1. Rzut 1: 7
2. Rzut 2: 3
3. Rzut 3: 10
4. Rzut 4: 5
5. Rzut 5: 8
Suma wyników: 33
*/

/*
ZADANIE
Konwerter jednostek
Napisz program konwertuj¹cy jednostki miar. Program powinien umo¿liwiaæ konwersjê miêdzy ró¿nymi jednostkami (np. metry na centymetry, kilogramy na funty) oraz obs³ugiwaæ ró¿ne typy jednostek.
Instrukcje:
Zdefiniuj zestaw jednostek, które chcesz obs³ugiwaæ (np. d³ugoœæ: metry, centymetry, cale; masa: kilogramy, funty).
Poproœ u¿ytkownika o wybór jednostki wejœciowej i jednostki wyjœciowej oraz podanie wartoœci do konwersji.
Przekonwertuj wartoœæ z jednostki wejœciowej na jednostkê wyjœciow¹ na podstawie ustalonego wspó³czynnika konwersji.
Wyœwietl wynik konwersji.
Przyk³adowe dzia³anie programu:
Konwerter jednostek
-------------------
Wybierz jednostkê wejœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 1
Wybierz jednostkê wyjœciow¹:
1. Metry
2. Centymetry
3. Cale
Wybór: 2
Podaj wartoœæ do konwersji: 5
Wynik konwersji: 500 centymetrów
*/

void showMenu()
{
	system("cls");
	std::cout << "Prosty Kalkulator\n";
	std::cout << "-----------------\n";
	std::cout << "1. Dodawanie\n";
	std::cout << "2. Odejmowanie\n";
	std::cout << "3. Mno¿enie\n";
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
			std::cout << "Nie mo¿na dzieliæ przez zero\n";
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

		int choice = getNumber("Wybierz operacjê:\n");

		if (choice == 0)
			break;

		int firstNumber = getNumber("Podaj pierwsz¹ liczbê:\n");
		int secondNumber = getNumber("Podaj drug¹ liczbê:\n");

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
	std::cout << "Wybór: ";
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

