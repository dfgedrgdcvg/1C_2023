// variableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//napisz program ktory wczyta liczbe od uzytkownika i ja wyswietli na konsoli
void task1()
{
    int numberFromUser;
    std::cout << "Podaj liczbe\n";
    std::cin >> numberFromUser;

    std::cout << "Podales " << numberFromUser << "\n";
}

//program obliczjacy srednia arytmetyczna dwoch liczb
void task2()
{
    int firstNumber, secondNumber;
    std::cout << "podaj druga liczbe\n";
        std::cin >> firstNumber;
        std::cout << "podaj druga liczbe\n";
        std::cin >> secondNumber;

        int average;
            average = (firstNumber + secondNumber) / 2;

        std::cout << "średnia to: " << average << "\n";
}

//program obliczjacy pole prostokata 

void task3()
{
    int SideA, SideB;
    std::cout << "podaj dlugosc boku a\n";
    std::cin >> SideA;
    std::cout << "podaj dlugosc boku b\n";
    std::cin >> SideB;
    
    int area;
    area = SideA * SideB;
        std::cout << "pole wynosi" " << area << \n";
}


//program obliczjacy objetosc stozka 

void task4()
{
    int ray, height;
    std::cout << "podaj dlugosc promienia";
    std::cin >> ray;
    std::cout << "podaj dlugosc wysokosci";
    std::cin >> height;
    int volume;
    volume = 1 / 3 * height * 3.1415 * (ray * ray);
    std::cout << "objetosc stozka wynosi ";
    std::cin >> volume;
}

//program obliczajacy wartosc wyrazenia a^2 + b^2

void task5()
{
    int a, b;
    std::cout << "podaj wartosc a";
    std::cin >> a;
    std::cout << "podaj wartosc b";
    int score;
    score = (a * a) + (b * b);
    std::cout << "wartosc wyrazenia a^2 + b^2 = " << score << "\n";
}

//program obliczajacy pole trojkata o podstawie b i wysokosci h

void task6()
{
    int base_side, height;
    std::cout << "podaj wartosc podstwy";
    std::cin >> base_side;
    std::cout << "podaj wartosc wysokosci";
    std::cin >> height;
    int area;
    area = (base_side * height) / 2;
    std::cout << "wartosc wyrazenia = " << area << "\n";
}

//program obliczajacy pole trapezu o podstawach a i b oraz wysokosci h

void task7()
{
    int a, b, h;
    std::cout << "podaj wartosc a";
    std::cin >> a;
    std::cout << "podaj wartosc b";
    std::cin >> b;
    std::cout << "podaj wartosc h";
    std::cin >> h;
    int area;
    area = (a + b) * h /2
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();

}

/*
algorytm- skonczony zbior instrukcji, ktory rozwiazuje zadany problem 
okresla tez kolejnosc wykonywaniaa instrukcji.
zapis algorytmu:
rysunki
opis slowny
w punktach
schemat blokowy
kod zrodlowy danego jezyka programowania
pseudokod
zmienna - pewien obszar w pamieci operacyjnej, w ktorej mozna w danej chwili przechowac tylko jednaq dana.

instrukcja deklaracji zmiennej :
typ_zmiennej nazwa_zmiennej;

typ zmiennej - wielkosc obszaru pamieci interpretacja w ciagu bitow
int - liczba całkowita ze znakiem <-2 147 483 648, 2 483 647>
short - 2 bajtowa liczba calkowita ze znakiem <-32 768, 32 767>
long - to samo co int
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dokładnosc 6- 7 cyfr po przecinku 
double - 8 bajtowa liczba rzeczywista, dokładnosc 15- 16 cyfr po przecinku 
long double - 12 bajtowa liczba rzeczywista, dokładnosc 19- 20 cyfr po przecinku 

nazwa zmiennej - nazwa obszaru pamieci , identyfikator
warunki konieczne :
dozwolone znaki: alfabet aA - zZ , cyfry arabskie 0-9 , podkreslenie (podloga) _____________________________
pierwszym znakiem nie moze byc cyfra
unikalny (nie moze sie powtarzac) w swoim zakresie widocznosci
nie moze to byc slowo kluczowe danego jezyka
 
 warunki programistow :
 nazwa zmiennej powinna oddawac charakter przechowywanych danych
 jesli wiele slow to w mniejscu spacji dac podkreslenie lub zaczynajac od drugiego slowa piszemy je z duzej litery
 piszemy po angielsku 
*/
