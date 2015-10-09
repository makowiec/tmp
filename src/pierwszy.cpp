//**************************************************
// Plik: pierwszy_plik.cpp
//**************************************************
# include <iostream>
using namespace std;
# include "osoba.h"
# include "bilet.h"
void prezentacja (osoba);
void funkcja_w_innym_pliku();
//**************************************************
int main()
{
	osoba kompozytor, autor;
	kompozytor.zapamietaj ("Fryderyk Chopin", 36);
	autor.zapamietaj ("Marcel Proust", 34);

	prezentacja(kompozytor);
	prezentacja(autor);

	cout << "\n Uzywamy w tym pliku tez klasy 'bilet'\n";
	bilet zolty, niebieski;

	zolty.zapamietaj ("Franfurkt", "Paris", bilet::ekspres, 1);
	zolty.wypisz();

	niebieski.zapamietaj ("Zurich", "Genewa", bilet::przyspieszony);
	niebieski.wypisz();

	niebieski.zmien_rodzaj_pociagu(bilet::pospieszny);
	cout << "\n Po zmianie tego biletu...\n";
	niebieski.wypisz();

	funkcja_w_innym_pliku();
}
//**************************************************
void prezentacja (osoba ktos)
{
	cout << "Mam zaszczyt przedstawic Panstwu, \n"
			"Oto we wlasnej osobie:";
			ktos.wypisz();
}
