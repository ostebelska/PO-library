#include <exception>
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
public: Uzytkownik* _unnamed_U¿ytkownik_;
public: Pracownik_biblioteki* _unnamed_Pracownik_biblioteki_;
public: Nowy_uzytkownik* _unnamed_nowy_u¿ytkownik_;
public: Baza_ksiazek* _unnamed_Baza_ksi¹¿ek_;
public: Rejestracja* _unnamed_rejestracja_;
public: Logowanie* _unnamed_logowanie_;
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