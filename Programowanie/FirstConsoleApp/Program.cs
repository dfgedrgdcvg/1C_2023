Console.Write("Hello, World!\n");
Console.WriteLine("Hello, World!");

string name = "Jan";
string lastname = "Kowalski";
Console.WriteLine("Witaj " + name + " " + lastname + " " + "tutaj!!!");
Console.WriteLine("Witaj {0} {1} tutaj!!!", name, lastname);
Console.WriteLine($"Witaj {name} {lastname} tutaj!!!");


Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga liczba to {secondNumber}");


//--------------------------------------------------------------------------------------------------------------------------------------------------------------



void ParametrTest_v1(int p)
{
    Console.WriteLine("Parametr w ParamertTest_v1 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrTest_v1 {p}");
}

firstNumber = 15;
Console.WriteLine($"przed {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"po {firstNumber}");
//Parametr_v1(99);


//przekazywanie przez referencje 


void ParametrTest_v2(ref int p)
{
    Console.WriteLine("Parametr w ParamertTest_v2 {p}");
    p++;
    Console.WriteLine($"Parametr w ParametrTest_v2 {p}");
}

firstNumber = 15;
Console.WriteLine($"przed {firstNumber}");
ParametrTest_v2(ref firstNumber);
Console.WriteLine($"po {firstNumber}");
//Parametr_v1(99);