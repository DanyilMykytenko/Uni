using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;


namespace okt3._3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter some english text here...");
            var text = Console.ReadLine();
            var result = (new Regex("[A-Za-z]")).Replace(text, "+");
            Console.WriteLine(result);
            Console.ReadKey();
        }
    }
}
