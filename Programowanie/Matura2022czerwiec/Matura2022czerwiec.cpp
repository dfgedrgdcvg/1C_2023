#include <iostream>
#include <fstream>
#include <vector>

void zadanie4_1()
{
    std::ifstream plik("przyklad.txt");
    std::vector<int> liczby;
    int liczba;

    std::cout << "Zadanie 4.1 \n";
    while (plik >> liczba) {
        int odwrocona = 0;
        int temp = liczba;
        while (temp > 0) {
            int cyfra = temp % 10;
            odwrocona = odwrocona * 10 + cyfra;
            temp /= 10;
        }
        if (odwrocona % 17 == 0) {
            std::cout << odwrocona << ", " << "\n";
        }
    }
}

void zadanie4_2() {
    std::ifstream plik("przyklad.txt");
    std::vector<int> liczby;

    int liczba;
    int maksRoznica = 0;
    int liczbaZMaksRoznica = 0;
    std::cout << "Zadanie 4.2 \n";

    while (plik >> liczba) {
        int odwrocona = 0;
        int temp = liczba;

        while (temp > 0) {
            int cyfra = temp % 10;
            odwrocona = odwrocona * 10 + cyfra;
            temp /= 10;
        }
        int roznica = liczba - odwrocona;
        if (roznica < 0) {
            roznica = -roznica;
        }
        if (roznica > maksRoznica) {
            maksRoznica = roznica;
            liczbaZMaksRoznica = liczba;
        }
    }
    std::cout << liczbaZMaksRoznica << ", " << maksRoznica << "\n";
}

void zadanie4_3() {
    std::ifstream plik("przyklad.txt");
    int liczba;

    std::cout << "Zadanie 4.3\n";

    while (plik >> liczba) {
        int czyPierwsza = true;
        if (liczba < 2) {
            czyPierwsza = false;
        }
        else {
            for (int i = 2; i * i <= liczba; i++) {
                if (liczba % i == 0) {
                    czyPierwsza = false;
                    break;
                }
            }
        }

        if (!czyPierwsza) {
            continue;
        }

        int odwrocona = 0;
        int temp = liczba;
        while (temp > 0) {
            int cyfra = temp % 10;
            odwrocona = odwrocona * 10 + cyfra;
            temp /= 10;
        }
        int czyPierwszaOdwrocona = true;
        if (odwrocona < 2) {
            czyPierwszaOdwrocona = false;
        }
        else {
            for (int i = 2; i * i <= odwrocona; i++) {
                if (odwrocona % i == 0) {
                    czyPierwszaOdwrocona = false;
                    break;
                }
            }
        }
        if (czyPierwszaOdwrocona) {
            std::cout << liczba << "\n";
        }
    }
}

void zadanie4_4() {
    std::ifstream plik("przyklad.txt");
    std::vector<int> liczby;
    int liczba;

    while (plik >> liczba) {
        liczby.push_back(liczba);
    }

    std::cout << "Zadanie 4.4\n";

    std::vector<int> unikalneLiczby;
    std::vector<int> liczniki;

    for (int i = 0; i < liczby.size(); i++) {
        int znaleziono = false;
        for (int j = 0; j < unikalneLiczby.size(); j++) {
            if (liczby[i] == unikalneLiczby[j]) {
                liczniki[j]++;
                znaleziono = true;
                break;
            }
        }
        if (!znaleziono) {
            unikalneLiczby.push_back(liczby[i]);
            liczniki.push_back(1);
        }
    }

    int unikalneLiczbyCount = unikalneLiczby.size();
    int liczbaDwa = 0;
    int liczbaTrzy = 0;

    for (int i = 0; i < liczniki.size(); i++) {
        if (liczniki[i] == 2) {
            liczbaDwa++;
        }
        else if (liczniki[i] == 3) {
            liczbaTrzy++;
        }
    }
    std::cout << unikalneLiczbyCount << " " << liczbaDwa << " " << liczbaTrzy << "\n";
}

int main()
{
    zadanie4_1();
    zadanie4_2();
    zadanie4_3();
    zadanie4_4();
}
