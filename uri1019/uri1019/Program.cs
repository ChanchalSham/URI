using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1019
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int nh = n / 3600;
            int nm = (n % 3600)/60;
            int ns = (n-nh*3600-nm*60);
            Console.WriteLine("{0}:{1}:{2}", nh, nm, ns);
            Console.ReadKey();
        }
    }
}
