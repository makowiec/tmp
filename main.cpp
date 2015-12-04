#include <fstream>
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

using namespace std;

int main()
{
    wifstream plik1;
    wstring linia;
    plik1.open ("C:\\temp\\1.txt", ios::in);

    if( plik1.good() == true )
        {
        std::cout << "Uzyskano dostep do pliku!" << std::endl;

        while( !plik1.eof() )
            {
            getline( plik1, linia );

            std::locale loc (std::locale(), new std::codecvt_utf8<char16_t>);

            wcout << linia << endl;
            }
        plik1.close();
        }
    else
        std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;

    return 0;
}
