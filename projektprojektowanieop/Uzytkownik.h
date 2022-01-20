#include <exception>
#include <string>
#include <vector>
#include<iostream>
using namespace std;

class Ksiazka;
class Baza_ksiazek;
class Logowanie;
class Rezerwacja;
class Wypo¿yczenie;
class System;
class Uzytkownik;

class Uzytkownik
{
	//private: int _id_karty;
public: string _haslo;			//haslo do logowania
//public: Ksi¹¿ka* _rezerwuje_wypo¿ycza_zwraca;
//public: Baza_ksi¹¿ek* _u¿ywa;
public: Logowanie* _unnamed_logowanie_;
public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;
	  //public: std::vector<Wypo¿yczenie*> _unnamed_Wypo¿yczenie_;
	  //public: system_* _unnamed_system__;


public:
	//bool logowanie();
	void wyszukaj();
	void rezerwacja();
};
