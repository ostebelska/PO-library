#include <exception>
#include"Nowy_uzytkownik.h"
#include"Uzytkownik.h"
#ifndef REJESTRACJA_H
#define REJESTRACJA_H

#include "System.h"
using namespace std;

class Nowy_uzytkownik;
class System;
class Rejestracja;

class Rejestracja
{
public:
	Nowy_uzytkownik nowy_uzytkownik;
	Uzytkownik uzytkownik;

	void sprawdzenie_has³a();
	void utworzenie_karty();
	void utworzenie_has³a();
	void uzupe³nienie_danych();
	void nadanie_id();
};

#endif