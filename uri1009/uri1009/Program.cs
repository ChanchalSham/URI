using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1009
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            double b = Convert.ToDouble(Console.ReadLine());
            double c = Convert.ToDouble(Console.ReadLine());
            double s = b + c * .15;
            Console.WriteLine("TOTAL = R$ {0}", s.ToString("0.00"));
            Console.ReadKey();
        }
    }
}
