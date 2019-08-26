using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1020
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int nh = n / 365;
            int nm = (n % 365) / 30;
            int ns = (n - nh * 365 - nm * 30);
            Console.WriteLine("{0} ano(s)", nh);
            Console.WriteLine("{0} mes(es)", nm);
            Console.WriteLine("{0} dia(s)", ns);
            Console.ReadKey();
        }
    }
}
