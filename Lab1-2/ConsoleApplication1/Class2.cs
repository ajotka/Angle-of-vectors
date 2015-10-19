using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    public class Dziecko : Ludziki
    {
        public Dziecko(string a, int b, int c)
            : base(a, b, c)
        {
        }
        public override int ilosc()
        {
            int ile = 1 + IleRodzenstwa;
            Console.WriteLine("Obliczamy ile jest w sumie dzieci");
            return ile;
        }
    }

}
