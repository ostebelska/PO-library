#include <exception>
#include <string>
#include <iostream>
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

	Ksiazka(int kod, string tytul, string autor, int numer)
	{
		this->kod = kod;
		this->tytul = tytul;
		this->autor = autor;
		this->numer = numer;
	}

	void zmien_status();

};