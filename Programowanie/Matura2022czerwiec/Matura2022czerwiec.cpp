// Matura2022czerwiec.cpp 
#include <iostream>
#include <fstream>
#include <vector>
#include <set>

int main()
{
    std::ifstream file("przyklad.txt");


    std::cout << "Zadanie 4.1 \n";
    int number;
    while (file >> number) {
        int reserved = 0;
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            reserved = reserved * 10 + digit;
            temp /= 10;
        }
        if (reserved % 17 == 0)
        {
            std::cout << reserved << ", " << "\n";
        }
    }
    std::cout << "Zadanie 4.2";
    int number = 0;
    int maxDiffrence = 0;
    int numberWithMaxDiffrence = 0;
    while (file >> number) {
        int reversed = 0;
        int temp = number;
    }
}