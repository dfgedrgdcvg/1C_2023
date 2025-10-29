using System;

namespace WypozyczalniaFilmow
{
    class Film
    {

        private string tytul;
        private int liczbaWypozyczen;


        public Film()
        {
            tytul = "";
            liczbaWypozyczen = 0;
        }


        public void SetTytul(string nowyTytul)
        {
            if (nowyTytul.Length <= 20)
                tytul = nowyTytul;
            else
                Console.WriteLine("Tytuł jest zbyt długi (maks. 20 znaków).");
        }


        public string GetTytul()
        {
            return tytul;
        }


        public int GetLiczbaWypozyczen()
        {
            return liczbaWypozyczen;
        }

        public void InkrementujWypozyczenia()
        {
            liczbaWypozyczen++;
        }
    }
}