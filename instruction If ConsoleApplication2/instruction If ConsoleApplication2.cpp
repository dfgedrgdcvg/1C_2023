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
	if (age < 18)
	{
		std::cout << "osoba jest nie pe�noletnia\n";
	}
	else
		std::cout << "osoba jest niepe�noletnia\n";
}

//*.Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�.Wy�wietl wynik.
void task7()
{
	int theAbsoluteValue, numberFromUser;
	std::cout << "podaj liczbe ca�kowita\n";
	std::cin >> numberFromUser;

	if (numberFromUser < 0)
		std::cout << "wartosc bezwzgledna" << numberFromUser * -1 << "\n";
	else
		std::cout << "wartosc bezwzgledna" << numberFromUser << "\n";

	std::cout << theAbsoluteValue;
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task8()
{
	int number;
		std::cout << "podaj liczbe od 1 do 70\n";
		if (number == 1)
			std::cout << "poniedzia�ek\n";
		if (number == 2)
			std::cout << "wtorek\n";
		if (number == 3)
			std::cout << "�roda\n";
		if (number == 4)
			std::cout << "czwartek\n";
		if (number == 5)
			std::cout << "piatek\n";
		if (number == 6)
			std::cout << "sobota\n";
		if (number == 7)
			std::cout << "niedziela\n";
}

//*.Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
void task9()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe ca�kowita\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe ca�kowita\n";
	std::cin >> secondNumber;
	if (firstNumber > secondNumber)
		std::cout << "liczba 1 jest wieksza od 2\n";
	else
		std::cout << "2 liczba jest wieksza od 1\n";
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
void task10()
{
	int year;
	std::cout << "podaj rok\n";
	std::cin >> year;
	if (year > 0 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << "rok jest przest�pny\n";
	else
		std::cout << "rok jest nieprzestepny\n";
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
void task11()
{
	int number;
	std::cout << "podaj liczbe ca�kowita\n";
	std::cin >> number;
	if (number / 3 && number / 5)
		std::cout << "liczba jest podzielna przez 3 i 5\n";
	else
		std::cout << "liczba nie jest podzielan przez 3 i 5\n";
}
//*. Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
/*Na  podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
poni�ej 16 - wyg�odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowag�
18.5 - 24.99 - wag� prawid�ow�
25.0 - 29.9 - nadwag�
30.0 - 34.99 - I stopie� oty�o�ci
35.0 - 39.99 - II stopie� oty�o�ci
powy�ej 40.0 - oty�o�� skrajn�
Wz�r :
BMI = masa / wysoko�� ^ 2
*/
void task12()
{
	int weight, growth , bmi;
	std::cout << "podaj wzrost\n";
	std::cin >> growth;
	std::cout << "podaj wage\n";
	std::cin >> weight;
}

int main()
{
	task1();
}






/*
*. Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
*/