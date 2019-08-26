using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace uri1010
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[2];
            int[] b = new int[2];
            double[] c = new double[2];
            double d = 0D;
            for (int i = 0; i < 2; i++)
            {
                a[i] = Convert.ToInt32(Console.ReadLine());
                b[i] = Convert.ToInt32(Console.ReadLine());
                c[i] = Convert.ToDouble(Console.ReadLine());
                d += b[i] * c[i];
            }
            Console.WriteLine("VALOR A PAGAR: R$ {0}", d.ToString("0.00"));
            Console.ReadKey();
        }
    }
}
