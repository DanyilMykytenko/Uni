using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace okt2._3
{
    class Program
    {
        static void Main(string[] args)
        {
            double y, z, x;
            Console.WriteLine("y =");
            y = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("z =");
            z = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("x =");
            x = Convert.ToDouble(Console.ReadLine());
            double n = (Math.Min(Math.Exp(x) + y, y - z)) / (Math.Max(Math.Exp(x), y));
            Console.WriteLine($"Result = {n}");
            Console.ReadLine();
        }
    }
}
