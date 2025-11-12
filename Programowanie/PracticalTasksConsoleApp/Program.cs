using ParticalTasksConsoleApp.czerwiec_2022;
using ParticalTasksConsoleApp.Styczen2023_1;
using ParticalTasksConsoleApp.styczen2025;
using WypozyczalniaFilmow;

namespace ParticalTasksConsoleApp
{
    internal class Program
    {
        static void Main()
        {


            Task1.Task_1();
    
            Note n1 = new Note("Lista zakupow", "truskawki, ananas");
            Note n2 = new Note("Sprawdziany", "matematyka, biologia");
            n1.TitleandContains();
            n1.Diag();
          
            Film film = new Film();
            Console.WriteLine("Inicjalizacja obiektu klasy Film:");
            Console.WriteLine($"Tytuł: {film.GetTytul()}");
            Console.WriteLine($"Liczba wypożyczeń: {film.GetLiczbaWypozyczen()}");
            Console.Write("Podaj nowy tytuł filmu: ");
            string nowyTytul = Console.ReadLine();
            film.SetTytul(nowyTytul);
            Console.WriteLine($"Aktualny tytuł filmu: {film.GetTytul()}");
            Console.WriteLine($"Liczba wypożyczeń przed inkrementacją: {film.GetLiczbaWypozyczen()}");
            film.InkrementujWypozyczenia();
            Console.WriteLine($"Liczba wypożyczeń po inkrementacji: {film.GetLiczbaWypozyczen()}");
      
            Pralka pralka = new Pralka();
            Odkurzacz odkurzacz = new Odkurzacz();
            Console.Write("Podaj numer prania : ");
            int numer;
            bool poprawny = int.TryParse(Console.ReadLine(), out numer);
            if (!poprawny) numer = 0;
            pralka.UstawProgram(numer);
            odkurzacz.On();
            odkurzacz.Komunikat("Odkurzacz wyładował się");
            odkurzacz.Off();

            Console.WriteLine($"Liczba zarejestrowanych osób to {Person.Instances}");
            Person Person1 = new Person();
            Console.Write("Podaj id nowej osoby: ");
            int id = int.Parse(Console.ReadLine());
            Console.Write("Podaj imię nowej osoby: ");
            string imie = Console.ReadLine() ?? "";
            Person Person2 = new Person(id, imie);
            Person Person3 = new Person(Person2);
            Console.WriteLine("Przywitania");
            Person1.Przywitanie("Jan");
            Person2.Przywitanie("Jan");
            Person3.Przywitanie("Jan");
            Console.WriteLine($"Liczba zarejestrowanych osób to {Person.Instances}");
        }
    }
}
