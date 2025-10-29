using System;
using WypozyczalniaFilmow;

namespace ParticalTasksConsoleApp.Styczen2023_1
{
    internal class Program
    {
        static void Main()
        {
            Task1.Task_1();


            Film film = new Film();
            Console.WriteLine("SYSTEM WYPOŻYCZALNI FILMÓW");
            Console.WriteLine($"Tytuł: '{film.GetTytul()}', liczba wypożyczeń: {film.GetLiczbaWypozyczen()} \n");
            Console.Write("Podaj tytuł filmu: ");
            string tytul = Console.ReadLine();
            film.SetTytul(tytul);
            Console.WriteLine($"Tytuł filmu został ustawiony na: '{film.GetTytul()}'");
            Console.WriteLine($"Aktualny tytuł filmu: {film.GetTytul()}");
            Console.WriteLine($"Liczba wypożyczeń: {film.GetLiczbaWypozyczen()}");
            Console.WriteLine("Test inkrementacji liczby wypożyczeń:");
            Console.WriteLine($"Przed inkrementacją: {film.GetLiczbaWypozyczen()}");
            film.InkrementujWypozyczenia();
            Console.WriteLine($"Po inkrementacji: {film.GetLiczbaWypozyczen()}"); 
        }
    }
}