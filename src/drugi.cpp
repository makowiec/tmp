//**************************************************
// Plik: drugi_plik.cpp
//**************************************************
#include <iostream>
using namespace std;
#include "bilet.h"
//**************************************************
void funkcja_w_innym_pliku()
{
	cout << "\n Jestesmy w innym pliku programu, \n"
			"tu tez uzywamy biletow \n";

	bilet bialy;
	bialy.zapamietaj("Krakow", "Tarnow", bilet::osobowy);
	bialy.wypisz();

	cout << "Spieszy sie nam, zmieniamy bilet na taki:"
		 << endl;

	bialy.zmien_rodzaj_pociagu (bilet::pospieszny);
	bialy.wypisz();
}
