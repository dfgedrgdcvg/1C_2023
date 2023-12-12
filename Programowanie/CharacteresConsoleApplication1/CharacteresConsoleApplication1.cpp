#include <iostream>

//napisz program ktory pobierze znak
void task1()
{
    char characterFromUser;
    std::cout << "podaj znak\n";
    std::cin >> characterFromUser;

    std::cout << "podales znak: " << characterFromUser << "\n";
}

//napisz program  ktory wczyta znak z klawiatury
//i sprawdzi czy to mala litera alfabetu
void task2()
{
    char characterFromUser;
    std::cout << "podaj znak\n";
    std::cin >> characterFromUser;


}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

/*
* char - 1 bajt
* 
* 
*/

