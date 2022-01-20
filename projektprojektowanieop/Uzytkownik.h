#include <exception>
#include <string>
#include <vector>
#include<iostream>
using namespace std;

class Ksiażka;
class Baza_ksišżek;
class logowanie;
class Rezerwacja;
class Wypożyczenie;
class system_;
class Użytkownik;

class Użytkownik
{
	//private: int _id_karty;
public: string _haslo;			//haslo do logowania
//public: Ksišżka* _rezerwuje_wypożycza_zwraca;
//public: Baza_ksišżek* _używa;
public: logowanie* _unnamed_logowanie_;
public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;
	  //public: std::vector<Wypożyczenie*> _unnamed_Wypożyczenie_;
	  //public: system_* _unnamed_system__;


public:
	//bool logowanie();
	void wyszukaj();
	void rezerwacja();
};
