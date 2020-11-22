using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace okt5._1
{
    class Person
    {
        // свойства
        public string Name { get; set; } = "Daniyl";
        public int Birthday { get; set; } = 2002;
        public string Sex { get; set; } = "Male";

        // методы
        public int GetCurrentAge(int year)
        {          
            int currentAge = year - Birthday;
            return currentAge;
        }
    }
    class Employee : Person
    {
        public string Position { get; set; } = "Student";
        public string DateOfAdoption { get; set; } = "07.09.2020";
        public string Salary { get; set; } = "1300uah";
    }
    class Program
    {
        static void Main(string[] args)
        {
            Person Daniyl = new Employee();
            Console.WriteLine("Enter current year: ");
            int year = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"Class Person:\n    Name: {Daniyl.Name};\n    Age: {Daniyl.GetCurrentAge(year)};\n    Sex: {Daniyl.Sex}.");
            Console.ReadKey();

        }
    }
}
