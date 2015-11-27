#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    fstream plik, plik2;
    plik.open( "C:\\temp\\1.txt", std::ios::in );
    plik2.open( "C:\\temp\\2.txt", std::ios::out );

    if( plik.good() == true )
{
    std::cout << "Uzyskano dostep do pliku!" << std::endl;

    string napis;
    while( !plik.eof() )
        {
            getline( plik, napis );
            cout << napis << endl;
        }


    plik.close();

}


    else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;

    return 0;
}
