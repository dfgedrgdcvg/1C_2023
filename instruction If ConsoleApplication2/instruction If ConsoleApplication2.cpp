#include <iostream>

/*
* DRY - dont repeat yourself
* 
operatory warunkowe:
> - wiêksze
< - mniejszoœæ
>= - wiêksze lub równe
<= - mniejsze lub równe 
= = - rowne
!= - ró¿ne

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

//*. Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
void task5()
{
	int firstnumber, secondnumber;
	std::cout << "podaj pierwsza liczbe \n";
	std::cin >> firstnumber;
	std::cout << "podaj druga liczbe \n";
	std::cin >> secondnumber;
	if (firstnumber == secondnumber)
	{
		std::cout << "liczby sa równe \n";
	}
	else
		std::cout << "liczby nie sa rowne! \n";
}

//*. Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
void task6()
{
	int age;
	std::cout << "podaj wiek u¿ytkownika \n";
	std::cin >> age;
	if (age < 18)
	{
		std::cout << "osoba jest nie pe³noletnia\n";
	}
	else
		std::cout << "osoba jest niepe³noletnia\n";
}

//*.Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹.Wyœwietl wynik.
void task7()
{
	int theAbsoluteValue, numberFromUser;
	std::cout << "podaj liczbe ca³kowita\n";
	std::cin >> numberFromUser;

	if (numberFromUser < 0)
		std::cout << "wartosc bezwzgledna" << numberFromUser * -1 << "\n";
	else
		std::cout << "wartosc bezwzgledna" << numberFromUser << "\n";

	std::cout << "wartos bezwzgledna wynosi " << numberFromUser;
}

//*. Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task8()
{
	int number , dayOfWeek;
		std::cout << "podaj liczbe od 1 do 7\n";
		std::cin >> dayOfWeek;
		if (dayOfWeek == 1)
			std::cout << "poniedzia³ek\n";
		if (dayOfWeek == 2)
			std::cout << "wtorek\n";
		if (dayOfWeek == 3)
			std::cout << "œroda\n";
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
			std::cout << "Podniedzia³ek\n";
			break;
		case 2:
			std::cout << "Wtorek\n";
			break;
		case 3:
			std::cout << "Œroda\n";
			break;
		case 4:
			std::cout << "Czwartek\n";
			break;
		case 5:
			std::cout << "Pi¹tek\n";
			break;
		case 6:
			std::cout << "Sobota\n";
			break;
		case 0:
		case 7:
			std::cout << "Niedziela\n";
			break;
		default:
			std::cout << "Dzieñ niepoprawny\n";
		}
}

//*.Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.
void task9()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe ca³kowita\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe ca³kowita\n";
	std::cin >> secondNumber;
	if (firstNumber > secondNumber)
		std::cout << "liczba 1 jest wieksza od 2\n";
	else
		std::cout << "2 liczba jest wieksza od 1\n";
}

//*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
void task10()
{
	int year;
	std::cout << "podaj rok\n";
	std::cin >> year;
	if (year > 0 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << "rok jest przestêpny\n";
	else
		std::cout << "rok jest nieprzestepny\n";
}

//*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task11()
{
	int number;
	std::cout << "podaj liczbe ca³kowita\n";
	std::cin >> number;
	if (number / 3 && number / 5)
		std::cout << "liczba jest podzielna przez 3 i 5\n";
	else
		std::cout << "liczba nie jest podzielan przez 3 i 5\n";
}
//*. Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).
/*Na  podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹
Wzór :
BMI = masa / wysokoœæ ^ 2
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
    std::cout << "wyg³odzenie";
	if (bmi >= 16 && bmi <= 16.99)
	std::cout << "wychudzenie";
	if (bmi >= 17 && bmi <= 18.49)
	std::cout << "niedowaga";
	if (bmi >= 18.5 && bmi <= 24.99)
	std::cout << "waga prawidlowa";
	if (bmi >= 25.0 && bmi <= 29.9)
	std::cout << "nadwaga";
	if (bmi >= 30.0 && bmi <= 34.99)
	std::cout << "I stopieñ oty³oœci";
	if (bmi >= 35.0 && bmi <= 39.99)
	std::cout << "II stopieñ oty³oœci";
	if (bmi <= 40.0)
	std::cout << "oty³osc skrajna";
}

//*. Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.
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

//*. Napisz program, który poprosi u¿ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeœli jest to mo¿liwe.
//*. Wyœwietl wynik lub odpowiedni komunikat, jeœli liczba jest ujemna.
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

//*. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
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
	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczbê doodatni¹:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczbê doodatni¹:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczbê doodatni¹:\n";
					std::cin >> numberFromUser;
					//wklejamy ca³ego If'a
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

	std::cout << "liczba dodatnia pobrana przez u¿ytkownika " << numberFromUser << "\n";
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






