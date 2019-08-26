using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1060
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a=new int[6];
            int count = 0;
            for (int i = 0; i < 6; i++)
            {
                a[i] = int.Parse(Console.ReadLine());
                if (a[i] > 0)
                    count++;
            }
            Console.WriteLine("{0} valores positivos", count);
            Console.ReadKey();
        }
    }
}
