#include <exception>
#include <string>
#include <iostream>
#include"Uzytkownik.h"
#include"Rejestracja.h"
#include"Baza_ksiazek.h"
#include"Rezerwacja.h"
#include"Ksiazka.h"

#ifndef LOGOWANIE_H
#define LOGOWANIE_H
using namespace std;

class Uzytkownik;
class System;
class Logowanie;

class Logowanie
{
public:
	Uzytkownik uzytkownik;
	Baza_ksiazek b;
	Rezerwacja rez;
	Ksiazka ks2;


	void wprowadzenie_danych(int, string);
	void logowanie();
};

#endif
