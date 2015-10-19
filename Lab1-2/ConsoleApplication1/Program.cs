using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    public class Program
    {
        static void Main(string[] args)
        {
            Ludziki nr1 = new Ludziki("Kowalski", 24, 4);
            Ludziki nr2 = new Ludziki("Nowakowska", 30, 2);
            Ludziki d1 = new Dziecko("Kowalski", 24, 4);
            Dziecko d2 = new Dziecko("Kowalewska", 30, 2);
            nr1.PokazLudzika();
            nr2.PokazLudzika();
            d1.ilosc();
            d2.ilosc();
            Console.ReadKey();
        }
    }
}