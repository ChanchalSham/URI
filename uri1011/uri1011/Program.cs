using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1011
{
    class Program
    {
        static void Main(string[] args)
        {
            double PI=3.14159;
            double R = Convert.ToDouble(Console.ReadLine());
            double A = (4.0 / 3) * PI * R * R * R;
            Console.WriteLine("VOLUME = {0}", A.ToString("0.000"));
            Console.ReadKey();

        }
    }
}
