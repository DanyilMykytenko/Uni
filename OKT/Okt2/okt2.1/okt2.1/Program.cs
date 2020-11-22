using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace okt2._1
{
    class Program
    {
        static void Main(string[] args)
        {
            double r, h, v;
            Console.WriteLine("Enter r:");
            r = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter h:");
            h = Convert.ToDouble(Console.ReadLine());
            v = 2 * Math.PI * r * h;
            Console.WriteLine($"При r = {r}, h = {h}, v = {v}");
            Console.ReadKey();
        }
    }
}
