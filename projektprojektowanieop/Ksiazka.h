#include <exception>
#include <string>
#include <iostream>
#ifndef KSIAZKA_H
#define KSIAZKA_H

using namespace std;


class Rezerwacja;
class Baza_ksiazek;
class Zwrot;
class Uzytkownik;
class Wypo¿yczenie;
class Bibliotekarz;
class Admin;


class Ksiazka
{
public:
	bool status;
	bool kara;
	int kod, numer;					//kod ksiazki/id
	string tytul; 				//tytul
	string autor; 				//imie i nazwisko autora
	string wydawnictwo;
	int ch;
	//nazwa wydawnictwa

	Ksiazka(){}

	Ksiazka(int kod, string tytul, string autor, int numer, bool status)
	{
		this->kod = kod;
		this->tytul = tytul;
		this->autor = autor;
		this->numer = numer;
		this->status = status;
	}

	void zmienStatus();
	void wyswietlStatus(bool status);
};
#endif