#include <exception>
#ifndef SYSTEM_H
#define SYSTEM_H

using namespace std;

class Uzytkownik;
class Pracownik_biblioteki;
class Nowy_uzytkownik;
class Baza_ksiazek;
class Rejestracja;
class Logowanie;
class Raport;

class System
{

public: void sprawdzenie_danych();

public: void nadanie_id();

public: void sprawdzenie_kar();

public: void szukaj_uzytkownika();

public: void utwórz_raport();

public: void wyœwietl_raport();

public: void zatwierdŸ_raport();

public: void czy_moze_zarezerwowac();
};

#endif