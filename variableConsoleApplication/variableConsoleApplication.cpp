// variableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //napisz program ktory wczyta liczbe od uzytkownika i ja wyswietli na konsoli
    std::cout << "Podaj liczbe\n";
    int numberFromUser;
    std::cin >> numberFromUser;
    std::cout << "Podales " << numberFromUser << "\n";


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
int - liczba ca³kowita ze znakiem <-2 147 483 648, 2 483 647>
short - 2 bajtowa liczba calkowita ze znakiem <-32 768, 32 767>
long - to samo co int
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnosc 6- 7 cyfr po przecinku 
double - 8 bajtowa liczba rzeczywista, dok³adnosc 15- 16 cyfr po przecinku 
long double - 12 bajtowa liczba rzeczywista, dok³adnosc 19- 20 cyfr po przecinku 

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
