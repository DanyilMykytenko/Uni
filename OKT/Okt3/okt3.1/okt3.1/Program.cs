using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace okt3._1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] Array = new int[30];
            int sum = 0;
            Random rnd = new Random();
            for (int index = 0; index < 30; index++)
            {
                Array[index] = rnd.Next(0, 30);
                Console.Write("{0} ", Array[index]);
            }
            for (int index = 0; index < 30; index++)
            {
                if (Array[index] < Math.Pow(index, 2))
                {
                    sum += Array[index];
                }
            }
            Console.WriteLine("\n");
            Console.WriteLine(sum);
            Console.ReadLine();
        }
    }
}
