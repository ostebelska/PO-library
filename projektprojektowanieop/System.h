#include <exception>
using namespace std;

class U�ytkownik;
class Pracownik_biblioteki;
class nowy_u�ytkownik;
class Baza_ksi��ek;
class rejestracja;
class logowanie;
class Raport;
class system_;

class system_
{
public: U�ytkownik* _unnamed_U�ytkownik_;
public: Pracownik_biblioteki* _unnamed_Pracownik_biblioteki_;
public: nowy_u�ytkownik* _unnamed_nowy_u�ytkownik_;
public: Baza_ksi��ek* _unnamed_Baza_ksi��ek_;
public: rejestracja* _unnamed_rejestracja_;
public: logowanie* _unnamed_logowanie_;
public: Raport* _u�ywa;

public: void sprawdzenie_danych();

public: void nadanie_id();

public: void sprawdzenie_kar();

public: void szukaj_uzytkownika();

public: void utw�rz_raport();

public: void wy�wietl_raport();

public: void zatwierd�_raport();

public: void czy_moze_zarezerwowac();
};