using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace ParticalTasksConsoleApp.Styczen2023_1
{
    internal class Task1
    {
        public static void Task_1()
        {
            int x, y;

            Console.Write("Podaj a: ");
            x = int.Parse(Console.ReadLine());
            Console.Write("Podaj b: ");
            y = int.Parse(Console.ReadLine());

            if (x <= 0)
            {
                Console.WriteLine("x musi być większe od zera");
                return;
            }
            if (y <= 0)
            {
                Console.WriteLine("y musi być większe od zera");
                return;
            }

            int result = NWD(x, y);
            Console.WriteLine("NWD = " + result);
        }

        public static int NWD(int x, int y)
        {
            while (x != y)
            {
                if (x > y)
                    x = x - y;
                else
                    y = y - x;
            }
            return x;
        }
    }
}