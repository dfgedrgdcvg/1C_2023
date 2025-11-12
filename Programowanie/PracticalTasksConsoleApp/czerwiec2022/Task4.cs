using System;


namespace ParticalTasksConsoleApp.czerwiec_2022
{
    public class Person
    {
        private static long numberOfCreatedClass = 0;
        private int id;
        private string name;
        public static long Instances => numberOfCreatedClass;
        public Person(int id, string name)
        {
            numberOfCreatedClass++;
            this.id = id;
            this.name = name;
        }
        public Person(Person Person)
        {
            numberOfCreatedClass++;
            this.id = Person.id;
            this.name = Person.name;
        }
        public Person()
        {
            numberOfCreatedClass++;
            this.id = 0;
            this.name = null;
        }

        public void Przywitanie(string imieWitajacego)
        {
            Console.WriteLine($"Cześć {imieWitajacego}, mam na imię {name} ");
        }
    }
}