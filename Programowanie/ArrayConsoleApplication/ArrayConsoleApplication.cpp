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

void task2()
{
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];

	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	srand(time(NULL));

	std::cout << "wylosowane liczby: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	int sum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		sum = sum + numbers[i];
	}
	double avg = sum * 1.0 / ARRAY_SIZE;
	std::cout << "srednia wynosi: " << avg << "\n";
}

//Napisz program, który uzupełni tablicę liczbami losowymi a następnie znajdzie minimum oraz maksimum.
void task3()
{

    const unsigned short LOWER_RANGE = 0;
    const unsigned short UPPER_RANGE = 70;

    const unsigned short ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    std::cout << "wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
    //----------------------------------------------------------------------------
}

//Napisz program, który wyświetli największą liczbę ze zbioru jednoelementowego.
void task4()
{
	int firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;

	int max;

	max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

//Napisz program, który wyświetli największą liczbę ze zbioru dwuelementowego.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;

	int max;

	if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

//Napisz program, który wyświetli największą liczbę ze zbioru trójelementowego.
void task6()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;

	int max;

	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		max = thirdNumber;
	else
	{
		if (secondNumber > firstNumber)
			max = secondNumber;
		else
			max = firstNumber;
	}

	std::cout << "Największa wartość to: " << max << "\n";
}

//Napisz program, który wyświetli największą liczbę ze zbioru czteroelementowego.
void task7()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> fourthNumber;

	int max;

	if (fourthNumber > thirdNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > firstNumber)
		max = fourthNumber;
	else if (thirdNumber > secondNumber
		&& thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


