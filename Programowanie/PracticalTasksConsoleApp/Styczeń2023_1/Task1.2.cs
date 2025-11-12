using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

internal class Note
{
    private static int noteCounter = 0;
    protected string contains;
    protected string title;
    private int Id;


    public Note(string a, string b)
    {
        noteCounter++;
        Id = noteCounter;
        title = a;
        contains = b;
    }

    public void TitleandContains()
    {
        Console.WriteLine($"Tylul: {title}");
        Console.WriteLine($"Tresc: {contains}");
    }

    public void Diag()
    {
        Console.WriteLine($"ID: {Id}; Licznik: {noteCounter}; Tytul: {title}; Tresc: {contains}");
    }
}

/************************
klasa: <Note>
opis:  zawiera 2 metody 
1 wypisuje wytul i tresc notaki a 2 wypisuje info daignostyczne
pola   noteCounter - licznik notatek
       uniqID - przechowóje unikalne id notatki
autor: ...
*************************************************************************************/