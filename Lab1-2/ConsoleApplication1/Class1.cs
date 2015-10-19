using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    public class Ludziki
    {
        public string nazwisko;
        private int wiek;
        public int IleRodzenstwa;

        public Ludziki(string a, int b, int c)   // konstruktor
        {
            nazwisko = a;
            wiek = b;
            IleRodzenstwa = c;
        }

        public void PokazLudzika()  // metoda
        {
            Console.WriteLine("{0,-15} {1,10}", nazwisko, wiek);
            Console.WriteLine(IleRodzenstwa);
        }
        public virtual int ilosc()
        {
            Console.WriteLine("Brak dzieci");
            return 0;
        }
    }

}