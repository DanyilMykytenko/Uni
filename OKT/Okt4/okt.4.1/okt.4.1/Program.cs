using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void shekerSort(double[] mass, int count)
        {
            int left = 0; int right = count - 1;
            int flag = 1;
            while ((left < right) && flag > 0)
            {
                flag = 0;
                for (int i = left; i < right; i++)
                {
                    if (mass[i] > mass[i + 1])
                    {
                        double t = mass[i];
                        mass[i] = mass[i + 1];
                        mass[i + 1] = t;
                        flag = 1;
                    }
                }
                right--;
                for (int i = right; i > left; i--)
                {
                    if (mass[i - 1] > mass[i])
                    {
                        double t = mass[i];
                        mass[i] = mass[i - 1];
                        mass[i - 1] = t;
                        flag = 1;
                    }
                }
                left++;
            }
        }
        static void Main(string[] args)
        {
            Console.Write("Enter the size of array(the size of array will be the upper limit for elements of array, other will be randomed from 0 to size of array): ");
            int n = Convert.ToInt32(Console.ReadLine());
            double[] mass = new double[n];
            Random rnd = new Random();
            Console.WriteLine();
            Console.Write("Your array is:");
            Console.WriteLine();
            for (int i = 0; i < n; i++)
            {
                int element = rnd.Next(0, n);
                mass[i] = element;
            }
            for (int i = 0; i < n; i++)
                Console.Write("{0}\t", mass[i]);
            Console.ReadLine();
            Console.WriteLine();

            shekerSort(mass, n); //вызыв функции сортировки
            Console.Write("Sorted array looks like: ");
            Console.WriteLine();
            for (int i = 0; i < n; i++)
                Console.Write("{0}\t", mass[i]);
            Console.ReadKey();
        }
    }
}