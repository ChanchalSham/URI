using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace URI
{
    class Program
    {
        static void Main(string[] args)
        {
            double A,n=3.14159D;
            double R = Convert.ToDouble(Console.ReadLine());
            A = n * R * R;
            Console.WriteLine("A={0}", A.ToString("0.0000"));
            Console.ReadKey();
        }
    }
}
