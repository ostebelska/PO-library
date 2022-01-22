#include <exception>
#include <string>
#include "Ksiazka.h"
#ifndef REZERWACJA_H
#define REZERWACJA_H
using namespace std;

class Uzytkownik;
class Ksiazka;
class Bibliotekarz;
class Wypozyczenie;
class Rezerwacja;

class Rezerwacja
{
public: 
	Ksiazka ksiazka;
	void sprawdz_rezerwacje();
	void zarezerwuj();
};
#endif