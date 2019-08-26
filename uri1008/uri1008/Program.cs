using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1008
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            double c = Convert.ToDouble(Console.ReadLine());
            double d=b*c;
            Console.WriteLine("NUMBER = {0}", a);
            Console.WriteLine("SALARY = U$ {0}", d.ToString("0.00"));
            Console.ReadKey();
        }
    }
}
