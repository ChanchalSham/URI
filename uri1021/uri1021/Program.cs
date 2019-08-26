using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1021
{
    class Program
    {
        static void Main(string[] args)
        {
            float n = float.Parse(Console.ReadLine());
            int n100 = (int)n / 100;
            int n50 = ((int)n % 100) / 50;
            int n20 = (((int)n % 100) % 50) / 20;
            int n10 = ((((int)n % 100) % 50) % 20) / 10;
            int n5 = (((((int)n % 100) % 50) % 20) % 10) / 5;
            int n2 = ((((((int)n % 100) % 50) % 20) % 10) % 5) / 2;
            float poisa = (n - n100 * 100 - n50 * 50 - n20 * 20 - n10 * 10 - n5 * 5 - n2 * 2);
            int p100 = (int)poisa;
            float p=(poisa-p100)*100;
            int p50 = Convert.ToInt32(p) / 50;
            int p25 = (Convert.ToInt32(p) % 50) / 25;
            int p10 = ((Convert.ToInt32(p) % 50) % 25) / 10;
            int p5 = (((Convert.ToInt32(p) % 50) % 25) % 10) / 5;
            int p1 = (((Convert.ToInt32(p) % 50) % 25) % 10) % 5;
            Console.WriteLine("NOTAS:");
            Console.WriteLine("{0} nota(s) de R$ 100.00", n100);
            Console.WriteLine("{0} nota(s) de R$ 50.00", n50);
            Console.WriteLine("{0} nota(s) de R$ 20.00", n20);
            Console.WriteLine("{0} nota(s) de R$ 10.00", n10);
            Console.WriteLine("{0} nota(s) de R$ 5.00", n5);
            Console.WriteLine("{0} nota(s) de R$ 2.00", n2);
            Console.WriteLine("MOEDAS:");
            Console.WriteLine("{0} moeda(s) de R$ 1.00", p100);
            Console.WriteLine("{0} moeda(s) de R$ 0.50", p50);
            Console.WriteLine("{0} moeda(s) de R$ 0.25", p25);
            Console.WriteLine("{0} moeda(s) de R$ 0.10", p10);
            Console.WriteLine("{0} moeda(s) de R$ 0.05", p5);
            Console.WriteLine("{0} moeda(s) de R$ 0.01", p1);
            Console.ReadKey();
        }
    }
}
