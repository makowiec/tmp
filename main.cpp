#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::ifstream plik;
    plik.open( "C:\\temp\\1.txt", std::ios::in );

    if( plik.good() == true )
{
    std::cout << "Uzyskano dostep do pliku!" << std::endl;

//tu zaraz coœ porobimy


    plik.close();

}


    else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;

    return 0;
}
