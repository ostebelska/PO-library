#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "Rezerwacja.h"
#include"Baza_ksiazek.h"
#include"Ksiazka.h"
#include"Uzytkownik.h"

void Rezerwacja::sprawdz_rezerwacje() {
	throw "Not yet implemented";
}

void Rezerwacja::zarezerwuj(Ksiazka k)
{
	Ksiazka ksiazka_do_rezerwacji = k;
	ksiazka_do_rezerwacji.status = false;

	cout << "POMYSLNIE ZAREZERWOWANO KSIAZKE." << endl;
	cout << "ZAPRASZAMY DO WYPOZYCZENIA W PUNKCIE STACJONARNYM NASZEJ WYPOZYCZALNI." << endl;
	cout << "WIECEJ INFORMACJI NA E-MAILU.";

	getchar(), getchar();

}
