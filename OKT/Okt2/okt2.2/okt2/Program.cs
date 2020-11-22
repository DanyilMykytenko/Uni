using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace okt2
{
    class Program
    {
        static void Main(string[] args)
        {
            double x = 3.251;
            double y = 0.325;
            double z = 0.466*Math.Pow(10,-4);
            double c;
            c = (Math.Pow(2, Math.Pow(y, x)) + Math.Pow(Math.Pow(3, x), y)) - (y*(Math.Atan(z) - (Math.PI / 6)) / (Math.Abs(x) + (1 / (Math.Pow(y, 2) + 1))));
            Console.WriteLine($"Result = {c}");
            Console.ReadLine();
        }
    }
}
