#include <iostream>

/*
Funkcja
    - zbi�r instrukcji realizuj�cy zadanie 
    - podprogram
    
Budowa funkcji:
    * nag��wek funkcij
    * cia�o funkcji - instrukcje ograniczone nawiasami klamrowymi
    
Nag��wek:
    typ_zwaracanej_danej_ nazwa_funkcij(parametry)
    
    */

//napisz funkcje ktora wyswietli na konsoli "hello world!"
void task1()
{
    std::cout << "Hello World!\n";
}

//napisz funkcje uniwersalna ktora pozwala wyswietlic dowolnt tekst.
void task2(std::string textParam)
{
    std::cout << textParam << "\n";
}

//napisz funkcje uniwersalna ktora wyswietli imie oraz informacje czy ktos jest pelnoletni czy nie.
void task3(std::string name, int age)
{
    std::cout << name << "\n";
    if (18 >= age)
        std::cout << "jest niepe�noletni\n";
    else
        std::cout << "jest pe�noletni\n";
}

//napisz program ktory trzetestuje zachowanie sie przekazywanych danych przez parametr.
void task4(int &number)
{
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task4: " << number << "\n";
}

//napisz program ktory wykorzysta przekazywanie parametru przez referencje
void task5(int &number)
{
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task5: " << number << "\n";
}

//napisz funkcje ktora pobierze od uzytkownika liczbe.
void task6_GetNumber(int& number)
{
    std::cout << "podaj liczbe: ";
    std::cin >> number;
}

int sumOfNumbers(int fn, int sn)
{
    int s;
    s = fn + sn;
    return s;
}

//napisz, program ktory obliczy wartosc silni i ja zwroci
long long calculateFactorial(long long n)
{
    long long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

long long calculateFactorialV2(long long n)
{
    if (n <= 1)
        return 1;
    else
        return n * calculateFactorialV2(n - 1);
}

void task7()
{
    int number;
    std::cout << "podaj liczbe: ";
    std::cin >> number;

    long long factorial = calculateFactorialV2(number);
    std::cout << "silnia jest rowna: " << factorial << std::endl;
}


int main()
{
    setlocale(LC_CTYPE, "polish");

    /*task1();
    task2("Witaj �wiecie!");
    std::string text = "uczyc sie programowania!";
    task2(text);

    task3("Jan", 11);
    task3("Ala", 19);
    

    int number = 5;
    std::cout << "zmienna number w funkcij main: " << number << "\n";
    task4(9);
    const int NUMBER = 9;
    task4(NUMBER);
    

    int number = 5;
    const int NUMBER = 9;
    std::cout << "zmienna number w funkcji main: " << number << "\n";
    task5(number);
    std::cout << "zmienna number w funkcji main: " << number << "\n";
    //task5(9); //blad - przez parametr mozna przekazac tylko zmienna.
    //task5(NUMBER); //blad - przez parametr mozna przekazac tylko zmienna.
    

    int numberFromUser = 5;
    task6_GetNumber(numberFromUser);
    std::cout << "U�ytkownik podaj liczbe " << numberFromUser << "\n";
    

    int numberFromUser = 16;
    int firstNumber, secondNumber, sum;
    firstNumber = 9;
    secondNumber = 1;
    sum = sumOfNumbers(firstNumber, secondNumber);
    std::cout << sum << "\n";
    */

    task7();
}

