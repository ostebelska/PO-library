#include <exception>
#include <string>
using namespace std;


class Baza_ksi��ek;
class rejestracja;
class system_;
class nowy_u�ytkownik;

class nowy_u�ytkownik
{
private: string _imie;
private: string _nazwisko;
private: string _mail;
private: string _data_uro;
public: Baza_ksi��ek* _u�ywa;
public: rejestracja* _unnamed_rejestracja_;
public: system_* _unnamed_system__;

public: void wyszukaj_ksi��k�();

public: void powr�t_do_menu();

public: void nadanie_id();
};