#include <iostream>

/*
* 
* 
* 
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).

* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

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

    //if(characterFromUser >= 97 && chracterFromUser <= 122)
    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        std::cout << "mala litera alfabetu\n.";
    else
        std::cout << "nie mala litera alfabetu.\n";
    /*
    char x = 'a';
    std::cout << x;
    x = 'g' + 1;
    std::cout << x;

    */
}

//napisz program ktory poprosi o podanie imienia i sie przywita
void task3()
{
    std::string username;
    std::cout << "podaj imie: ";
    std::cin >> username;
    std::cout << "witak " << username << "\n";
}

//napisz program ktory sprawdzi czy podane haslo jest poprawne
//np. jesli haslo = abc123 wyswietli poprawne haslo
//jesli nie wyswietli niepoprawne haslo
void task4()
{
    std::string password;
    std::cout << "podaj haslo";
    std::cin >> password;

    if (password == "abc123")
        std::cout << "haslo poprawne\n";
    else
        std::cout << "haslo niepoprawne";
}

//napisz program, ktory wczyta lancuch znakow o policzy ile to malych liter 'a'.
void task5()
{
    std::string textFromUser;
    std::cout << "podaj lancuch znakow\n";
    std::cin >> textFromUser;

    int numberOfCharacters = 0;

    //std::cout << "pierwszy znak to " << textFromUser[0] << "\n";
    //textFromUser[1] = 'x';
    //std::cout << "ilosc znakow " << textFromUser.length() << "\n";

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            numberOfCharacters++;
    }

    std::cout << "malych liter 'a' jets " << numberOfCharacters << "\n";
}

//Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki 
// nie zostanie ono podane prawid�owo.
void task6()
{
    std::string password;
    std::cout << "podaj haslo";
    std::cin >> password;

    if (password == "abc123")
        std::cout << "haslo poprawne\n";
    else
        std::cout << "haslo niepoprawne";
}

//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w
// i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{
    std::string characterFromUser;
    std::cout << "podaj ciag znakow";
    std::cin >> characterFromUser;

    //samog�oska
    int numberOfVowel;
    //spolgloska
    int numberOfConsonant;

    for (int i = 0; i < characterFromUser.length(); i++)
    {
        if (characterFromUser[i] == 'a'
            || characterFromUser[i] == '�'
            || characterFromUser[i] == 'e'
            || characterFromUser[i] == '�'
            || characterFromUser[i] == 'i'
            || characterFromUser[i] == 'o'
            || characterFromUser[i] == 'u'
            || characterFromUser[i] == 'y')
            numberOfVowel++;
        else if (characterFromUser[i] >= 'a' && characterFromUser[i] <= 'z')
            numberOfConsonant++;
    }
    std::cout << "w tym ciagu jest " << numberOfVowel << "samog�soki i " << numberOfConsonant << " spolgloski\n";
}

//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem 
//(czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task8()
{
    std::string textFromUser;
    std::cout << "Podaj tekst\n";
    std::cin >> textFromUser;

    //wersja 1
    std::string reverseText = "";
    for (int i = textFromUser.length() - 1; i >= 0; i--)
    {
        reverseText = reverseText + textFromUser[i];
    }

    /*for (int i = 0; i < textFromUser.length(); i++)
    {
        reverseText = textFromUser[i] + reverseText;
    }*/

    if (textFromUser == reverseText)
        std::cout << "Ten tekst jest palindromem\n";
    else
        std::cout << "Ten tekst nie jest palindromem\n";

    //wersja 2
    bool isPalindrome = true;

    for (int signFromBegining = 0, signFormEnd = textFromUser.length() - 1; signFromBegining < signFormEnd; signFromBegining++, signFormEnd--)
    {
        if (textFromUser[signFromBegining] != textFromUser[signFormEnd])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome /*== true*/)
        std::cout << "Ten tekst jest palindromem\n";
    else
        std::cout << "Ten tekst nie jest palindromem\n";
}


void task9()
{
    std::string firstText;
    std::string secondText;
    std::cout << "podaj 1 ciag: ";
    std::cin >> firstText;
    std::cout << "podaj 2 ciag: ";
    std::cin >> firstText;
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    task5();
}

/*
* char - 1 bajt
* 
* 
*/

