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
        public DateTime Birthday { get; set; } = new DateTime(2002, 11, 28);
        public string Sex { get; set; } = "Male";

        // методы
        public int GetCurrentAge()
        {
            int age = DateTime.Now.Year - Birthday.Year;
            if (Birthday.Date > DateTime.Now.AddYears(-age)) age--;
            return age;
        }
    }

    class Employee : Person
    {
        // свойства
        public string Position { get; set; } = "Student";
        public DateTime DateOfAdoption { get; set; } = new DateTime(2020, 07, 09);
        public string Salary { get; set; } = "1300uah";

        // методы
        public int GetWorkExpereince()
        {
            int WorkExpereince = DateTime.Now.Month - DateOfAdoption.Month;
            return WorkExpereince;
        }
    }
    class ITEmployee : Employee
    {
        // свойства
        public string Specialization { get; set; } = "Developer";
        public string Login { get; set; } = "1337";
        public string Password { get; set; } = "1488";

        // методы
        public void DataChange()
        {
            Console.WriteLine("What would you like to change: login or password? L - for Login, P - for password and B - for both");
            string change = Console.ReadLine();
            switch (change)
            {
                case "L":
                    Console.WriteLine("Enter your new login: ");
                    Login = Console.ReadLine();
                    break;
                case "l":
                    Console.WriteLine("Enter your new login: ");
                    Login = Console.ReadLine();
                    break;
                case "P":
                    Console.WriteLine("Enter your new password: ");
                    Password = Console.ReadLine();
                    break;
                case "p":
                    Console.WriteLine("Enter your new password: ");
                    Password = Console.ReadLine();
                    break;
                case "B":
                    Console.WriteLine("Enter your new login: ");
                    Login = Console.ReadLine();
                    Console.WriteLine("Enter your new password: ");
                    Password = Console.ReadLine();
                    break;
                case "b":
                    Console.WriteLine("Enter your new login: ");
                    Login = Console.ReadLine();
                    Console.WriteLine("Enter your new password: ");
                    Password = Console.ReadLine();
                    break;
                default: Console.WriteLine("Error: wrong input...");
                    Console.ReadKey();
                    break;
            }
            Console.WriteLine("Are you sure you want to save your new personal data?(y\\n)");
            string confidence = Console.ReadLine();
            switch (confidence)
            {
                case "y":
                    Console.WriteLine($"Your login is: {Login}");
                    Console.WriteLine($"Your password is: {Password} ");
                    Console.ReadKey();
                    break;
                case "Y":
                    Console.WriteLine($"Your login is: {Login}");
                    Console.WriteLine($"Your password is: {Password} ");
                    Console.ReadKey();
                    break;
                case "n":
                    Login = "1337";
                    Password = "1488";
                    Console.WriteLine("Your changes were rejected.");
                    Console.ReadKey();
                    break;
                case "N":
                    Login = "1337";
                    Password = "1488";
                    Console.WriteLine("Your changes were rejected.");
                    Console.ReadKey();
                    break;
                default:
                    Console.WriteLine("Error: wrong input...");
                    break;
            }
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            ITEmployee Daniyl = new ITEmployee();
            Console.WriteLine($"Class Person:\n    Name: {Daniyl.Name};\n    Age: {Daniyl.GetCurrentAge()};\n    Sex: {Daniyl.Sex}.\nClass Employee:\n    Work Expereince: {Daniyl.GetWorkExpereince()} months;\nClass ITEmployee:\nDo you want to change your personal data(login\\password?(y\\n)");
            string change = Console.ReadLine();
            switch (change)
            {
                case "y": Daniyl.DataChange();
                    break;
                case "Y":
                    Daniyl.DataChange();
                    break;
                case "n": break;
                case "N": break;
                default: Console.WriteLine("Error: wrong input...");
                    break;
            }
        }
    }
}
