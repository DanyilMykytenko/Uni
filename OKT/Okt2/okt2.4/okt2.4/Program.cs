using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace okt2._4
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            Console.WriteLine("Enter N");
            n = Convert.ToInt32(Console.ReadLine());
            if (n < 0)
            {
                Console.WriteLine("Error");
                Console.ReadKey();
                return;
            }

            int sum = 0;
            int numbers = 0;
            while (n != 0)
            {
                sum += n % 10;
                numbers++;
                n /= 10;
            }

            Console.WriteLine($"Digits sum: {sum}, digits count: {numbers}");
            Console.ReadKey();
        }
    }
}
