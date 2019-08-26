using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1006
{
    class Program
    {
        static void Main(string[] args)
        {
            double A = Convert.ToDouble(Console.ReadLine());
            double B = Convert.ToDouble(Console.ReadLine());
            double C = Convert.ToDouble(Console.ReadLine());
            double d = (2 * A + 3 * B+ 5*C) / 10;
            Console.WriteLine("MEDIA = {0}", d.ToString("0.0"));
            Console.ReadKey();
        }
    }
}
