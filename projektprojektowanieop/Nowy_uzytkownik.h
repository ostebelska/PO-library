#include <exception>
#include <string>
#include"Uzytkownik.h"
using namespace std;


class Baza_ksiazek;
class Rejestracja;
class System;
class Uzytkownik;

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
		
public: 
	    void powrót_do_menu();
	    void nadanie_id();
};