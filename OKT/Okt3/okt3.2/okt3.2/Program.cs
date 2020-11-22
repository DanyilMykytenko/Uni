using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace okt3._2
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int[,] Array = new int[10,10];
            int zeroes1 = 0, zeroes2 = 0, Max = 0, MaxString = 0;
            Random rnd = new Random();
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    Array[i, j] = rnd.Next(0, 4);
                    Console.Write("{0}\t", Array[i, j]);
                }
                Console.WriteLine();
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (Array[i, j] == 0)
                    {
                        zeroes2++;
                    }
                }
                Console.WriteLine("{0}: {1}", i + 1, zeroes2);
                Max = zeroes1;
                if (Max <= zeroes2)
                {
                    Max = zeroes2;
                    MaxString = i;
                    zeroes1 = zeroes2;
                }
                zeroes2 = 0;
            }
            Console.WriteLine($"Digit of nulls: {Max}, number of string: {MaxString+1}");
            Console.ReadLine();
        }
    }
}
