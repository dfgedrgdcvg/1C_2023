#include <iostream>

/*
Funkcja
    - zbiór instrukcji realizuj¹cy zadanie 
    - podprogram
    
Budowa funkcji:
    * nag³ówek funkcij
    * cia³o funkcji - instrukcje ograniczone nawiasami klamrowymi
    
Nag³ówek:
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
        std::cout << "jest niepe³noletni\n";
    else
        std::cout << "jest pe³noletni\n";
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


int main()
{
    setlocale(LC_CTYPE, "polish");

    /*task1();
    task2("Witaj œwiecie!");
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
    */

    int numberFromUser = 5;
    task6_GetNumber(numberFromUser);
    std::cout << "U¿ytkownik podaj liczbe " << numberFromUser << "\n";
}

