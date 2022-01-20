#include <exception>
using namespace std;

class U¿ytkownik;
class Pracownik_biblioteki;
class nowy_u¿ytkownik;
class Baza_ksi¹¿ek;
class rejestracja;
class logowanie;
class Raport;
class system_;

class system_
{
public: U¿ytkownik* _unnamed_U¿ytkownik_;
public: Pracownik_biblioteki* _unnamed_Pracownik_biblioteki_;
public: nowy_u¿ytkownik* _unnamed_nowy_u¿ytkownik_;
public: Baza_ksi¹¿ek* _unnamed_Baza_ksi¹¿ek_;
public: rejestracja* _unnamed_rejestracja_;
public: logowanie* _unnamed_logowanie_;
public: Raport* _u¿ywa;

public: void sprawdzenie_danych();

public: void nadanie_id();

public: void sprawdzenie_kar();

public: void szukaj_uzytkownika();

public: void utwórz_raport();

public: void wyœwietl_raport();

public: void zatwierdŸ_raport();

public: void czy_moze_zarezerwowac();
};