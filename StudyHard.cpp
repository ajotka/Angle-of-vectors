// This is an example design of a traditional variable "ass". 
// He had to rapidly demonstrate and guide programming paradigms.

#include <iostream>
#include <string>

//
//	AJOTKA
// 
 
class Kolor
{
 
unsigned char RGBValue;
static size_t counter;
// int *a;
 
public:
    Kolor( unsigned char initialiser = 100 ) : RGBValue(initialiser) {
        counter ++;
        // a = new int[100];
    }
 
    ~Kolor() {
        -- ( this->counter );
        // delete[] a;
    }
 
    void setRGB( unsigned char &val ) {
        RGBValue = val;
    }
 
    unsigned char getRGB() {
        return RGBValue;
    }
 
    static size_t getCounter() {
        return counter;
    }
};
 
size_t Kolor::counter = 0;
 
namespace Dupa {
    int globalny;
}
 
int main() {
    Kolor czerwony;
    unsigned char eee = 65;
    czerwony.setRGB(eee);
    std::cout << czerwony.getRGB() << std::endl;
    Kolor czarny(68);
    Kolor zielony(99);
 
    unsigned char value = 123;
    czerwony.setRGB( value );
 
 // ASCII numbers are wrong define
 
    std::cout << czerwony.getRGB() << std::endl;
    std::cout << Dupa::globalny << std::endl;
    std::cout << Kolor::getCounter() << std::endl;
 
    std::string lol("\nc to ubogi kuzyn c++");
    std::cout << lol << std::endl;
    lol = "c++ jest madry!";
    std::cout << lol << std::endl;
 
    return 0;
}
