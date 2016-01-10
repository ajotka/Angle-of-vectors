#include <iostream>
#include <cmath>
#include <vector>

void odczyt (std::vector < float > v3) {
	for( int i = 0; i < v3.size(); i++ )
    {
        std::cout << v3[ i ] << " ";
    }
}


int main()
{
    std::vector < float > v1;
    std::vector < float > v2;

	int ile;
    float x;
    
    std::cout << "Podaj wymiar wektorow (sugeruje: 2): " << std::endl;
    std::cin >> ile;

    std::cout << "Wpisz wartosci v1: " << std::endl;
        //zapis
    for( int i = 0; i < ile; i++ )
    {
    	std::cin >> x;
        v1.push_back( x );  
    }
    
    std::cout << std::endl;
    
    std::cout << "Wpisz wartosci v2: " << std::endl;
        //zapis
    for( int i = 0; i < ile; i++ )
    {
    	std::cin >> x;
        v2.push_back( x );  
    }
    
    std::cout << std::endl;
    
    //sprawdzenie dlugosci
    float a[ile],b[ile];
    float dlugosc1= 0.0, dlugosc2=0.0;

    for( int i = 0; i < ile; i++ ) {
        a[i]=pow(v1[i],2);	
        dlugosc1 += a[i];
        
        b[i]=pow(v2[i],2);	
        dlugosc2 += b[i];
	}

	dlugosc1 = sqrt(dlugosc1);
    std::cout << "Dlugosc v1 = " << dlugosc1 << std::endl;

	dlugosc2 = sqrt(dlugosc2);
    std::cout << "Dlugosc v2 = " << dlugosc2 << std::endl;
    
    if (dlugosc1 == dlugosc2) {
    	std::cout << "V1 = V2" << std::endl;
	} 
	else {
		if (dlugosc1 > dlugosc2) {
			std::cout << "V1 > V2" << std::endl;
		} 
		else {
			std::cout << "V1 < V2" << std::endl;
		}
	}
	
	std::vector < float > v3( v1.size() );
	
	//dodawanie
	for( int i = 0; i < v3.size(); i++ ) {
		v3[i]=v1[i]+v2[i];
	}
	std::cout << "dodawanie: [ ";
	odczyt(v3);
	std::cout << "]";
	std::cout << std::endl;
	
	//odejmowanie
	for( int i = 0; i < v3.size(); i++ ) {
		v3[i]=v1[i]-v2[i];
	}
	std::cout << "odejmowanie: [ ";
	odczyt(v3);
	std::cout << "]";
	std::cout << std::endl;
	
	//mnozenie
	for( int i = 0; i < v3.size(); i++ ) {
		v3[i]=v1[i]*v2[i];
	}
	std::cout << "mnozenie: [ ";
	odczyt(v3);
	std::cout << "]";
	std::cout << std::endl;
	
	//kat alfa
	if ( (v1.size() == 2) && (v2.size() == 2) ) {
		float cosalfa, alfa;
		cosalfa= (v3[0] + v3[1])/(dlugosc1*dlugosc2);
		if (cosalfa >= 1.0) {
			std::cout << "Wektory sa rownolegle i kat nie istnieje..." << std::endl;
		}
		else {
		alfa=acos(cosalfa);
		std::cout << "kat: " << alfa << " rad" << std::endl;
		alfa=(alfa*360)/(2*3.14);
		std::cout << "kat: " << alfa << " stopni" << std::endl;	
		}
	}
	else {
		std::cout << "Wektory nie sa dwuwymiarowe, wiec kata nie policze..." << std::endl;
	}

    return 0;
}
