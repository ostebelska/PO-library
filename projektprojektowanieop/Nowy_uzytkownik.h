#include <exception>
#include <string>
using namespace std;


class Baza_ksiazek;
class Rejestracja;
class System;
class Nowy_uzytkownik;

class Nowy_uzytkownik
{
private: string _imie;
private: string _nazwisko;
private: string _mail;
private: string _data_uro;
public: Baza_ksiazek* _u¿ywa;
public: Rejestracja* _unnamed_rejestracja_;
public: System* _unnamed_system__;

public: void wyszukaj_ksi¹¿kê();

public: void powrót_do_menu();

public: void nadanie_id();
};