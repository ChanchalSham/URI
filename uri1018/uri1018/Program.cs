using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1018
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int n100 = n / 100;
            int n50 = (n % 100) / 50;
            int n20 = ((n % 100) % 50) / 20;
            int n10 = (((n % 100) % 50) % 20) / 10;
            int n5 = ((((n % 100) % 50) % 20) % 10) / 5;
            int n2 = (((((n % 100) % 50) % 20) % 10) % 5) / 2;
            int n1 = ((((((n % 100) % 50) % 20) % 10) % 5) % 2);
            Console.WriteLine("{0}", n);
            Console.WriteLine("{0} nota(s) de R$ 100,00", n100);
            Console.WriteLine("{0} nota(s) de R$ 50,00", n50);
            Console.WriteLine("{0} nota(s) de R$ 20,00", n20);
            Console.WriteLine("{0} nota(s) de R$ 10,00", n10);
            Console.WriteLine("{0} nota(s) de R$ 5,00", n5);
            Console.WriteLine("{0} nota(s) de R$ 2,00", n2);
            Console.WriteLine("{0} nota(s) de R$ 1,00", n1);
            Console.ReadKey();
            
        }
    }
}
