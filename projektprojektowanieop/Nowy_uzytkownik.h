#include <exception>
#include <string>
#include"Uzytkownik.h"

#ifndef NOWY_UZYTKOWNIK_H
#define NOWY_UZYTKOWNIK_H

using namespace std;

class Baza_ksiazek;
class Rejestracja;
class System;
class Uzytkownik;
class Nowy_uzytkownik;

class Nowy_uzytkownik
{
public:
		string imie;
		string nazwisko;
		string mail;
		string data_uro;
		string haslo;
		string id_karty;

		Uzytkownik uzytkownik;
};

#endif