#include <iostream>
#include <fstream>

void task3_2() {
    std::ifstream inputFile("skrot_przyklad.txt");

    std::cout << "Zadanie 3.2" << '\n';

    int value;
    int validCount = 0;
    int maxValidValue = 0;

    while (inputFile >> value) {
        int current = value;
        bool hasOddDigit = false;

        while (current > 0) {
            int digit = current % 10;
            if (digit % 2 == 1) {
                hasOddDigit = true;
                break;
            }
            current /= 10;
        }

        if (!hasOddDigit) {
            validCount++;

            if (value > maxValidValue) {
                maxValidValue = value;
            }
        }
    }

    std::cout << validCount << "\n";
    std::cout << maxValidValue << "\n";
}

void task3_3() {
    std::ifstream inputFile("skrot2_przyklad.txt");

    std::cout << "Zadanie 3.3" << '\n';

    int original;

    while (inputFile >> original) {
        int copy = original;
        int oddDigitsOnly = 0;
        int powerOfTen = 1;

        while (copy > 0) {
            int digit = copy % 10;
            if (digit % 2 == 1) {
                oddDigitsOnly = digit * powerOfTen + oddDigitsOnly;
                powerOfTen *= 10;
            }
            copy /= 10;
        }

        int a = original, b = oddDigitsOnly;
        while (b != 0) {
            int remainder = b;
            b = a % b;
            a = remainder;
        }

        if (a == 7) {
            std::cout << original << '\n';
        }
    }
}

int main() {
    task3_2();
    task3_3();
}
