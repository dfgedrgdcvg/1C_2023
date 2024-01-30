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


int main()
{
    setlocale(LC_CTYPE, "polish");

    /*task1();
    task2("Witaj œwiecie!");
    std::string text = "uczyc sie programowania!";
    task2(text);*/

    task3("Jan", 11);
    task3("Ala", 19);
}

