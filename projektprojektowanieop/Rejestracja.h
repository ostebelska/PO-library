#include <exception>
#include"Nowy_uzytkownik.h"
#include"Uzytkownik.h"
#ifndef REJESTRACJA_H
#define REJESTRACJA_H

#include "System.h"
#include "Logowanie.h"
#include"Nowy_uzytkownik.h"

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

	int kod;
	string haslo_nowe;

	void sprawdzenie_has³a();
	void utworzenie_konta(int, string);
	void utworzenie_has³a();
	void uzupe³nienie_danych();
	void nadanie_id(string);
};

#endif