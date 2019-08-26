using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1051
{
    class Program
    {
        static void Main(string[] args)
        {
            double salary = double.Parse(Console.ReadLine());
            if (salary >= 0 && salary <= 2000)
            {
                Console.WriteLine("Isento");
                Console.ReadKey();
            }
            else
            {
                if (salary > 4500)
                {
                    double n = 1000 * .08 + 1500 * .18 + (salary - 4500) * .28;
                    Console.WriteLine("R$ {0}", n.ToString("0.00"));
                    Console.ReadKey();
                }
                else if (salary >= 3000.01 && salary <= 4500)
                {
                    double n = 1000 * .08 + (salary - 3000) * .18;
                    Console.WriteLine("R$ {0}", n.ToString("0.00"));
                    Console.ReadKey();
                }
                else if (salary >= 2000.01 && salary <= 3000)
                {
                    double n = (salary - 2000) * .08;
                    Console.WriteLine("R$ {0}", n.ToString("0.00"));
                    Console.ReadKey();
                }

            }
        }
    }
}
