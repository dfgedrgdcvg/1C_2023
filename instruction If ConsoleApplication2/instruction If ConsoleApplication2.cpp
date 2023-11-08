#include <iostream>

/*
* DRY - dont repeat yourself
* 
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
void task2()
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

	std::cout << "wartos bezwzgledna wynosi " << numberFromUser;
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task8()
{
	int number , dayOfWeek;
		std::cout << "podaj liczbe od 1 do 7\n";
		std::cin >> dayOfWeek;
		if (dayOfWeek == 1)
			std::cout << "poniedzia�ek\n";
		if (dayOfWeek == 2)
			std::cout << "wtorek\n";
		if (dayOfWeek == 3)
			std::cout << "�roda\n";
		if (dayOfWeek == 4)
			std::cout << "czwartek\n";
		if (dayOfWeek == 5)
			std::cout << "piatek\n";
		if (dayOfWeek == 6)
			std::cout << "sobota\n";
		if (dayOfWeek == 7)
			std::cout << "niedziela\n";

		//lub 

		switch (dayOfWeek)
		{
		case 1:
			std::cout << "Podniedzia�ek\n";
			break;
		case 2:
			std::cout << "Wtorek\n";
			break;
		case 3:
			std::cout << "�roda\n";
			break;
		case 4:
			std::cout << "Czwartek\n";
			break;
		case 5:
			std::cout << "Pi�tek\n";
			break;
		case 6:
			std::cout << "Sobota\n";
			break;
		case 0:
		case 7:
			std::cout << "Niedziela\n";
			break;
		default:
			std::cout << "Dzie� niepoprawny\n";
		}
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
	std::cout << "podaj wage w kilogramach\n";
	std::cin >> growth;
	std::cout << "podaj wzrost w metrach\n";
	std::cin >> weight;
	bmi = weight * (growth * growth);
	if (bmi < 16)
    std::cout << "wyg�odzenie";
	if (bmi >= 16 && bmi <= 16.99)
	std::cout << "wychudzenie";
	if (bmi >= 17 && bmi <= 18.49)
	std::cout << "niedowaga";
	if (bmi >= 18.5 && bmi <= 24.99)
	std::cout << "waga prawidlowa";
	if (bmi >= 25.0 && bmi <= 29.9)
	std::cout << "nadwaga";
	if (bmi >= 30.0 && bmi <= 34.99)
	std::cout << "I stopie� oty�o�ci";
	if (bmi >= 35.0 && bmi <= 39.99)
	std::cout << "II stopie� oty�o�ci";
	if (bmi <= 40.0)
	std::cout << "oty�osc skrajna";
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
void task13()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "podaj 1 odcinek";
	std::cin >> firstNumber;
	std::cout << "podaj 2 odcinek";
    std::cin >> secondNumber;
	std::cout << "podaj 3 odcinek";
	std::cin >> thirdNumber;
	if (firstNumber > secondNumber + thirdNumber && secondNumber > firstNumber + thirdNumber && thirdNumber > firstNumber + secondNumber)
		std::cout << "mozna zrobic z tych odcinkow trojkat";
	else
		std::cout << "nie mozna zbudowac";
}

//*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe.
//*. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
void task14()
{
	int number, root;
	std::cout << "podaj liczbe\n";
	std::cin >> number;
	root = sqrt(number);

	if (number > 0)
	{
		std::cout << "pierwiastek kwadratowy podanej liczby to: " << root;
	}
	else
		std::cout << "nie da sie obliczyc pierwiastka liczby ujemnej";
}

//*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
void task15()
{
	int dayNumber, monthNumber;
	std::cout << "podaj dzien";
	std::cin >> dayNumber;
	std::cout << "podaj miesiac";
	std::cin >> monthNumber;

	if (monthNumber >= 1 && monthNumber <= 12 && dayNumber <= 1 && dayNumber <= 31)
		std::cout << "data jest poprawna";
	else
		std::cout << "data nie jest poprawna";
}

//napisz program ktory ma pobrac od uzytkownika liczbe dodatnia. zabezpiecz progam przed pobraniem liczby ujemnej
void task16()
{
	int number;
	std::cout << "podaj liczbe dodatnia";
	std::cin >> number;
	
	std::cout << "liczba dodatnia pobrana od uzytkownika " << number << "\n";
}
void task17()
{
	int numberFromUser;
	std::cout << "Podaj liczb� doodatni�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczb� doodatni�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczb� doodatni�:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczb� doodatni�:\n";
					std::cin >> numberFromUser;
					//wklejamy ca�ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//napisz program ktory ma pobrac od uzytkownika liczbe dodatnia. zabezpiecz program przezd podaniem liczby ujemnej
void task18()
{
	int numberFromUser , randomNumber;

	do
	{
		std::cout << "podaj liczbe dodatnia:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "liczba dodatnia pobrana przez u�ytkownika " << numberFromUser << "\n";
}

//napisz program ktory wylosuje liczbe a nastepnie uzytkownik bedzie musial ja zgadnac
void task19()
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
void task20()
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
	do
	{
		//currentnumber = currentnumber + 1;
		//currentnumber += 1;
		//currentnumber++;
		++currentnumber;
		std::cout << currentnumber << ", ";
	} while (upperRange > currentnumber);
 }


int main()
{
	task19();
}






