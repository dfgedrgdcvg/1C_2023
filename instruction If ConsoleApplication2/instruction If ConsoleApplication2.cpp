#include <iostream>

/*
operatory warunkowe:
> - wi�ksze
< - mniejszo��
>= - wi�ksze lub r�wne
<= - mniejsze lub r�wne 
= = - rowne
!= - r�ne

operatory logiczne
&& - AND
|| - OR
! - NOT
                                    ALBO 
a    b    a&&b    a||b    !a       a XOR b
F    F     F        F      T          F
F    T     F        T      T          T 
T    F     F        T      F          T
T    T     T        T      F          F

F - False
T - True
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

//napisz program ktory wyswietli informacje czy liczba jest parzysta czy nieparzysta
void task1()
{
	int number;
	std::cout << "Podaj liczbe : \n";
	std::cin >> number;

	int rest = number % 2;
	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
		if (rest != 0) //rest ==1
		std::cout << "liczba jest nieparzysta\n";
}

//napisz program ktory wyswietli informacje czy liczba jest z zakresu <1 ; 10)
void task3()
{
	int number;
	std::cout << "Podaj liczbe : \n";
	std::cin >> number;
	
	//wersja 1
	if (number >= 1)  //number <= 9
	{
		if (number < 10)
			std::cout << "liczba jest w przedziale\n";
		else
			std::cout << "liczba jest z poza zakresu\n";
	}
	else
		std::cout << "liczba z poza zakresu\n";

	//wersja 2
	if (number >= 1 && number >= 10)
		std::cout << "liczba jest w przedziale\n";
	else
		std::cout << "liczba jest z poza zakresu\n";

	if (number < 1 || number >= 10)
		std::cout << "liczba z poza zakresu\n";
	else
		std::cout << "liczba jest w przedziale\n";

	//wersja 3
	if (!(number >= 1 && number < 10))
		std::cout << "liczba jest z poza zakresu\n";
	else
		std::cout << "liczba jest w przedziale\n";
}

//napisz program ktory wykona dzielenia dwoch liczb
void task4()
{
	int firstnumber, secondnumber;
	std::cout << "podaj liczbe:\n";
	std::cin >> firstnumber;
	std::cout << "podaj liczbe:\n";
	std::cin >> secondnumber;

	if (secondnumber != 0)
	{
		int quotent = firstnumber / secondnumber;
		std::cout << "wynik dzielenia " << quotent << "\n";

	}
	else
		std::cout << "dzielenie przez zero!!!\n";
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat.
void task5()
{
	int firstnumber, secondnumber;
	std::cout << "podaj pierwsza liczbe \n";
	std::cin >> firstnumber;
	std::cout << "podaj druga liczbe \n";
	std::cin >> secondnumber;
	if (firstnumber == secondnumber)
	{
		std::cout << "liczby sa r�wne \n";
	}
	else
		std::cout << "liczby nie sa rowne! \n";
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
void task6()
{
	int age;
	std::cout << "podaj wiek u�ytkownika \n";
	std::cin >> age;
}


int main()
{
	task1();
}






/*
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
*/