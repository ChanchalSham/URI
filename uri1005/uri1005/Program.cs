using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1005
{
    class Program
    {
        static void Main(string[] args)
        {
            double A = Convert.ToDouble(Console.ReadLine());
            double B = Convert.ToDouble(Console.ReadLine());
            double d = (3.5*A + 7.5*B) / 11;
            Console.WriteLine("MEDIA = {0}", d.ToString("0.00000"));
            Console.ReadKey();
        }
    }
}
