#include <exception>
#include <string>
#include "Baza_ksiazek.h"
#include "Ksiazka.h"

#ifndef REZERWACJA_H
#define REZERWACJA_H
using namespace std;

class Uzytkownik;
class Ksiazka;
class Bibliotekarz;
class Wypozyczenie;
class Rezerwacja;
class Logowanie;

class Rezerwacja
{
public: 

	Ksiazka ksiazka;
	Baza_ksiazek b;

	void sprawdzRezerwacje();
	void zarezerwuj();
};
#endif