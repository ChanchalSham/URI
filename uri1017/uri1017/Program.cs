using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1017
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            double d = (b / 12.0) * a;
            Console.WriteLine("{0}", d.ToString("0.000"));
            Console.ReadKey();
        }
    }
}
