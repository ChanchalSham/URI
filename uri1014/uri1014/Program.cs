using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1014
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = Convert.ToInt32(Console.ReadLine());
            double b = Convert.ToDouble(Console.ReadLine());
            double c = Convert.ToDouble(a);
            double d = c / b;
            Console.WriteLine("{0} km/l", d.ToString("0.000"));
            Console.ReadKey();
        }
    }
}
