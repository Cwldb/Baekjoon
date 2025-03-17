using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Baekjoon_practice
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int size = int.Parse(Console.ReadLine());

            for (int i = 0; i < size; i++)
            {
                int n = int.Parse(Console.ReadLine());

                int a = n / 5;
                int b = n % 5;

                for (int j = 0; j < a; j++)
                {
                    Console.Write("++++" + " ");
                }

                for (int k = 0; k < b; k++)
                {
                    Console.Write("|");
                }
                Console.WriteLine();
            }
        }
    }
}
