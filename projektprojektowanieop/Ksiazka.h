#include <exception>
#include <string>
#include <iostream>
using namespace std;


class Rezerwacja;
class Baza_ksi��ek;
class Zwrot;
class U�ytkownik;
class Wypo�yczenie;
class Bibliotekarz;
class Admin;
class Ksi��ka;

int res_book(int, int); //sprawdzenie czy ksiazka jest w systemie

class Ksiazka
{
public:
	bool status;
	int kod, numer;					//kod ksiazki/id
	string tytul; 				//tytul
	string autor; 				//imie i nazwisko autora
	string wydawnictwo;
	int ch;
	//nazwa wydawnictwa


	Ksiazka(int kod, string tytul, string autor, int numer)
	{
		this->kod = kod;
		this->tytul = tytul;
		this->autor = autor;
		this->numer = numer;
	}

	void zmien_status();
	void zarezerwuj();
	void zobacz_opis();
	void zwr��();
};