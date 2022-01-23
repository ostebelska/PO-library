#include <exception>
#include"Nowy_uzytkownik.h"
#include"Uzytkownik.h"
#ifndef REJESTRACJA_H
#define REJESTRACJA_H

#include "System.h"
#include "Logowanie.h"
#include"Nowy_uzytkownik.h"
#include "Baza_ksiazek.h"

using namespace std;

class Nowy_uzytkownik;
class System;
class Rejestracja;
class Logowanie;

class Rejestracja
{
public:
	Nowy_uzytkownik nowy_uzytkownik;
	Uzytkownik uzytkownik;
	Logowanie logowanie;
	Baza_ksiazek b;

	int kod;
	string haslo_nowe;

	void utworzenieKonta(int, string);
	void utworzenieHasla();
	void uzupelnienieDanych();
	void nadanieId(string);
};

#endif