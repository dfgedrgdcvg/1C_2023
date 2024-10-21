#include <iostream>
#include <fstream>

void task1()
{
	std::string name;
	int age;

	std::cout << "Podaj imie";
	std::cin >> name;
	std::cout << "Podaj wiek";
	std::cin >> age;

	std::ofstream writeToFile;
	writeToFile.open("c:\\plik2C.txt", std::ios_base::app);

	if (writeToFile.is_open() == true)
	{//prace na pliku
		writeToFile << name << "\n" << age << "\n";
		writeToFile.flush();
		//writeToFile<<age;
		writeToFile.close();

	}
}

void task2()
{
	std::ifstream readFromFile;
	readFromFile.open("c::\\plik2C.txt");
	if (readFromFile.is_open())
	{
		std::string name;
		int age;

		while (readFromFile >> name)
		{
			readFromFile >> age;
			//readFromFile >> name;

			std::cout << "Imie" << name << "wiek" << age;
		}
	}
}

int main()
{
	task2();

}

