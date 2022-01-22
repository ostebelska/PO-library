#include <exception>
#include <string>
#include <vector>
#include<iostream>
#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
using namespace std;

class Ksiazka;
class Baza_ksiazek;
class Logowanie;
class Rezerwacja;
class Wypozyczenie;
class System;

class Uzytkownik
{
public:
	int id_karty;
	string haslo;			//haslo do logowania

	//bool logowanie();
	void wyszukaj();
	void rezerwacja();
};
#endif
