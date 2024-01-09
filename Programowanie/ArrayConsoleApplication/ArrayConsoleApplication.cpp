#include <iostream>

//napisz program ktory wczyta np. 5 liczb i wyswietli je w odwrotnej kolejnosci
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "podaj dana: ";
        std::cin >> numbers[i];
    }

    for (int i = ARRAY_SIZE; i < 0; i++)
    {
        std::cout << numbers[i] << " , ";
    }
    std::cout << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


